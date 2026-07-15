#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/RefAsValueType_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int AllocFreeConcurrentStack_1_TypeDefinitionIndex = 6965;

	template <typename T>
	class AllocFreeConcurrentStack_1 : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_s_typeOfT()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(AllocFreeConcurrentStack_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
