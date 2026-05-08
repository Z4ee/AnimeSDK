#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

#define CLASS_2_FAEC3C0106DE11C3_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x11459BB0)
#define CLASS_2_FAEC3C0106DE11C3_METHOD_2_A5240ADEB2056B2C_OFFSET UNITYSDK_OFFSET(0x11459CD0)
#define CLASS_2_FAEC3C0106DE11C3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11459C40)
#define CLASS_2_FAEC3C0106DE11C3__CCTOR_OFFSET UNITYSDK_OFFSET(0x11459B30)
#define CLASS_2_FAEC3C0106DE11C3__CTOR_OFFSET UNITYSDK_OFFSET(0x11459BA0)

inline static constexpr unsigned int Class_2_FAEC3C0106DE11C3_TypeDefinitionIndex = 59188;

class Class_2_FAEC3C0106DE11C3 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0xC; // 0x0
	::MoleMole::Config::EntityType Field_2_3; // 0x20
	::MoleMole::Config::CharacterAliveState Field_2_0; // 0x24
	::System::UInt32 Field_2_2; // 0x28
	::MoleMole::Config::CharacterAliveState Field_2_1; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FAEC3C0106DE11C3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAEC3C0106DE11C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAEC3C0106DE11C3_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAEC3C0106DE11C3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A5240ADEB2056B2C(::System::UInt32 a1, ::System::UInt32 a2, ::MoleMole::Config::CharacterAliveState a3, ::MoleMole::Config::CharacterAliveState a4, ::MoleMole::Config::EntityType a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::Config::CharacterAliveState, ::MoleMole::Config::CharacterAliveState, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_2_FAEC3C0106DE11C3_METHOD_2_A5240ADEB2056B2C_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
