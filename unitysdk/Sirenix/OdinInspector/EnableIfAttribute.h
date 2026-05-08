#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ENABLEIFATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1C01F890)
#define SIRENIX_ODININSPECTOR_ENABLEIFATTRIBUTE_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1C01F8A0)
#define SIRENIX_ODININSPECTOR_ENABLEIFATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C01F8C0)
#define SIRENIX_ODININSPECTOR_ENABLEIFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F8B0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int EnableIfAttribute_TypeDefinitionIndex = 7161;

	class EnableIfAttribute : public ::System::Attribute
	{
	public:
		::System::String* Condition; // 0x10
		::System::Object* Value; // 0x18

		::System::Void _ctor(::System::String* condition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ENABLEIFATTRIBUTE__CTOR_OFFSET))(this, condition);
		}

		::System::Void _ctor_1(::System::String* condition, ::System::Object* optionalValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ENABLEIFATTRIBUTE__CTOR_1_OFFSET))(this, condition, optionalValue);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ENABLEIFATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ENABLEIFATTRIBUTE_SET_MEMBERNAME_OFFSET))(this, value);
		}
	};
}
