#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_D42F3C789728FA20_1_METHOD_2_1C3975705F9FCC2E_OFFSET UNITYSDK_OFFSET(0x13EA39A0)
#define CLASS_2_D42F3C789728FA20_1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13EA3A60)
#define CLASS_2_D42F3C789728FA20_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13EA3B50)
#define CLASS_2_D42F3C789728FA20_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x13EA3BE0)
#define CLASS_2_D42F3C789728FA20_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13EA3960)
#define CLASS_2_D42F3C789728FA20_1_METHOD_2_DD67415EE586CE5C_OFFSET UNITYSDK_OFFSET(0x13EA3AF0)
#define CLASS_2_D42F3C789728FA20_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EA39E0)
#define CLASS_2_D42F3C789728FA20_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13EA3A50)

inline static constexpr unsigned int Class_2_D42F3C789728FA20_1_TypeDefinitionIndex = 79004;

class Class_2_D42F3C789728FA20_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x10C; // 0x0
	::MoleMole::Battle::Entity* Field_2_7; // 0x20
	::MoleMole::Config::DamageElementType Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D42F3C789728FA20_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42F3C789728FA20_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42F3C789728FA20_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::Config::DamageElementType Method_2_1C3975705F9FCC2E()
	{
		return ((::MoleMole::Config::DamageElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42F3C789728FA20_1_METHOD_2_1C3975705F9FCC2E_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42F3C789728FA20_1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_DD67415EE586CE5C(::MoleMole::Config::DamageElementType a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_D42F3C789728FA20_1_METHOD_2_DD67415EE586CE5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42F3C789728FA20_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42F3C789728FA20_1_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}
};
