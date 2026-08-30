#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ConstructorInfo; }

#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6D9E40)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6D9E80)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS___C___CCTOR_B__15_0_OFFSET UNITYSDK_OFFSET(0x1B6D9E90)

namespace MessagePack
{
	inline static constexpr unsigned int SkipClrVisibilityChecks___c_TypeDefinitionIndex = 7184;

	class SkipClrVisibilityChecks___c : public ::System::Object
	{
	public:
		static ::MessagePack::SkipClrVisibilityChecks___c** StaticGet___9()
		{
			return (::MessagePack::SkipClrVisibilityChecks___c**)Il2CppClass::FromTypeDefinitionIndex(SkipClrVisibilityChecks___c_TypeDefinitionIndex)->GetStaticField(0x2F3B0);
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
