#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SRF_HELPERS_SRREFLECTION_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x19EA2FF0)
#define SRF_HELPERS_SRREFLECTION_SETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x19EA3060)

namespace SRF::Helpers
{
	inline static constexpr unsigned int SRReflection_TypeDefinitionIndex = 33342;

	class SRReflection : public ::System::Object
	{
	public:
		static ::System::Void SetPropertyValue(::System::Object* obj, ::System::Reflection::PropertyInfo* p, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Reflection::PropertyInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_HELPERS_SRREFLECTION_SETPROPERTYVALUE_OFFSET))(obj, p, value);
		}

		static ::System::Object* GetPropertyValue(::System::Object* obj, ::System::Reflection::PropertyInfo* p)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SRF_HELPERS_SRREFLECTION_GETPROPERTYVALUE_OFFSET))(obj, p);
		}
	};
}
