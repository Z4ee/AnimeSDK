#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SIRENIX_ODININSPECTOR_SHOWIFATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1C020FD0)
#define SIRENIX_ODININSPECTOR_SHOWIFATTRIBUTE_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1C020FE0)
#define SIRENIX_ODININSPECTOR_SHOWIFATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C021000)
#define SIRENIX_ODININSPECTOR_SHOWIFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C020FF0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ShowIfAttribute_TypeDefinitionIndex = 7222;

	class ShowIfAttribute : public ::System::Attribute
	{
	public:
		::System::String* Condition; // 0x10
		::System::Object* Value; // 0x18
		::System::Boolean Animate; // 0x20

		::System::Void _ctor(::System::String* condition, ::System::Boolean animate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFATTRIBUTE__CTOR_OFFSET))(this, condition, animate);
		}

		::System::Void _ctor_1(::System::String* condition, ::System::Object* optionalValue, ::System::Boolean animate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFATTRIBUTE__CTOR_1_OFFSET))(this, condition, optionalValue, animate);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWIFATTRIBUTE_SET_MEMBERNAME_OFFSET))(this, value);
		}
	};
}
