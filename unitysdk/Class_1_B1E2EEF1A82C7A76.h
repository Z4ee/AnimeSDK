#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B1E2EEF1A82C7A76_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18181CE0)
#define CLASS_1_B1E2EEF1A82C7A76_METHOD_1_3B5ED44E3BCB0FFF_OFFSET UNITYSDK_OFFSET(0x18181CD0)
#define CLASS_1_B1E2EEF1A82C7A76_METHOD_1_7EADEF08F0D4BEB0_OFFSET UNITYSDK_OFFSET(0x18181CC0)
#define CLASS_1_B1E2EEF1A82C7A76_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18181D40)
#define CLASS_1_B1E2EEF1A82C7A76__CTOR_OFFSET UNITYSDK_OFFSET(0x18181D90)

inline static constexpr unsigned int Class_1_B1E2EEF1A82C7A76_TypeDefinitionIndex = 35700;

class Class_1_B1E2EEF1A82C7A76 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::Int32 Field_1_2; // 0x18
	::RPG::MVector3 Field_1_3; // 0x1C
	::System::Boolean Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x29
	::System::Int32 Field_1_6; // 0x2C
	::RPG::MVector3 Field_1_7; // 0x30
	::RPG::GameCore::CakeRaceMoveState Field_1_8; // 0x3C

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
