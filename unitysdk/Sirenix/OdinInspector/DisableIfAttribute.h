#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SIRENIX_ODININSPECTOR_DISABLEIFATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1E328A70)
#define SIRENIX_ODININSPECTOR_DISABLEIFATTRIBUTE_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1E328A80)
#define SIRENIX_ODININSPECTOR_DISABLEIFATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E328AA0)
#define SIRENIX_ODININSPECTOR_DISABLEIFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328A90)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisableIfAttribute_TypeDefinitionIndex = 7277;

	class DisableIfAttribute : public ::System::Attribute
	{
	public:
		::System::String* Condition; // 0x10
		::System::Object* Value; // 0x18

		::System::Void _ctor(::System::String* condition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEIFATTRIBUTE__CTOR_OFFSET))(this, condition);
		}

		::System::Void _ctor_1(::System::String* condition, ::System::Object* optionalValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEIFATTRIBUTE__CTOR_1_OFFSET))(this, condition, optionalValue);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEIFATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEIFATTRIBUTE_SET_MEMBERNAME_OFFSET))(this, value);
		}
	};
}
