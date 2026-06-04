#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ConstructorInfo; }

#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181933F0)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18193430)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C___CCTOR_B__15_0_OFFSET UNITYSDK_OFFSET(0x18193440)

namespace MessagePack
{
	inline static constexpr unsigned int SkipClrVisibilityChecks___c_TypeDefinitionIndex = 7192;

	class SkipClrVisibilityChecks___c : public ::System::Object
	{
	public:
		static ::MessagePack::SkipClrVisibilityChecks___c** StaticGet___9()
		{
			return (::MessagePack::SkipClrVisibilityChecks___c**)Il2CppClass::FromTypeDefinitionIndex(SkipClrVisibilityChecks___c_TypeDefinitionIndex)->GetStaticField(0xA4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__15_0(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C___CCTOR_B__15_0_OFFSET))(this, a1);
		}
	};
}
