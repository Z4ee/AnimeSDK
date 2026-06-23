#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define FOUNDATION_ENUMX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E53C0)

namespace Foundation
{
	inline static constexpr unsigned int EnumX_TypeDefinitionIndex = 7909;

	class EnumX : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Array*>** StaticGet_s_EnumValuesDic()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Array*>**)Il2CppClass::FromTypeDefinitionIndex(EnumX_TypeDefinitionIndex)->GetStaticField(0x71E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ENUMX__CCTOR_OFFSET))();
		}
	};
}
