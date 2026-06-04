#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B1E2EEF1A82C7A76_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18B83F20)
#define CLASS_1_B1E2EEF1A82C7A76_METHOD_1_3B5ED44E3BCB0FFF_OFFSET UNITYSDK_OFFSET(0x18B83F10)
#define CLASS_1_B1E2EEF1A82C7A76_METHOD_1_7EADEF08F0D4BEB0_OFFSET UNITYSDK_OFFSET(0x18B83F00)
#define CLASS_1_B1E2EEF1A82C7A76_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B83F80)
#define CLASS_1_B1E2EEF1A82C7A76__CTOR_OFFSET UNITYSDK_OFFSET(0x18B83FD0)

inline static constexpr unsigned int Class_1_B1E2EEF1A82C7A76_TypeDefinitionIndex = 34918;

class Class_1_B1E2EEF1A82C7A76 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::RPG::MVector3 Field_1_1; // 0x14
	::RPG::GameCore::CakeRaceMoveState Field_1_2; // 0x20
	::RPG::MVector3 Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x34
	::System::Int32 Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x3C
	::System::Boolean Field_1_8; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E2EEF1A82C7A76__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CakeRaceMoveState Method_1_7EADEF08F0D4BEB0()
	{
		return ((::RPG::GameCore::CakeRaceMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E2EEF1A82C7A76_METHOD_1_7EADEF08F0D4BEB0_OFFSET))(this);
	}

	::System::Void Method_1_3B5ED44E3BCB0FFF(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_B1E2EEF1A82C7A76_METHOD_1_3B5ED44E3BCB0FFF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E2EEF1A82C7A76_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E2EEF1A82C7A76_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
