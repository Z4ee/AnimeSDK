#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_MULTIVERSIONERRORREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B05F7A0)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionErrorRef_TypeDefinitionIndex = 8135;

	class MultiVersionErrorRef : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* errorRefPaths; // 0x10
		::System::String* multiVerPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONERRORREF__CTOR_OFFSET))(this);
		}
	};
}
