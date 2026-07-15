#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SRF_HELPERS_SRREFLECTION_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1CECD340)
#define SRF_HELPERS_SRREFLECTION_SETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1CECD470)

namespace SRF::Helpers
{
	inline static constexpr unsigned int SRReflection_TypeDefinitionIndex = 33995;

	class SRReflection : public ::System::Object
	{
	public:
		static ::System::Void SetPropertyValue(::System::Object* a1, ::System::Reflection::PropertyInfo* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Reflection::PropertyInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_HELPERS_SRREFLECTION_SETPROPERTYVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* GetPropertyValue(::System::Object* a1, ::System::Reflection::PropertyInfo* a2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SRF_HELPERS_SRREFLECTION_GETPROPERTYVALUE_OFFSET))(a1, a2);
		}
	};
}
