#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47DAE01AFECF913D.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3A873ED311700F93;
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }

#define CLASS_2_4684D9319ADB79CC_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x14A18E30)
#define CLASS_2_4684D9319ADB79CC_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x14A18E00)
#define CLASS_2_4684D9319ADB79CC_GET_V0_OFFSET UNITYSDK_OFFSET(0x14A18E70)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x14A1A480)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x14A18F50)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x14A19A20)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x14A192A0)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_8F4CC8440DF53D30_OFFSET UNITYSDK_OFFSET(0x14A18EA0)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x14A19ED0)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x14A1A060)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_C8324B85AEB18C17_OFFSET UNITYSDK_OFFSET(0x14A18DF0)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x14A1A010)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_DA7D5FED1E10712C_OFFSET UNITYSDK_OFFSET(0x14A1AAB0)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_E0C935AE223B555F_OFFSET UNITYSDK_OFFSET(0x14A1A3B0)
#define CLASS_2_4684D9319ADB79CC_METHOD_2_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x14A1A2C0)
#define CLASS_2_4684D9319ADB79CC_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x14A18E50)
#define CLASS_2_4684D9319ADB79CC_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x14A18E20)
#define CLASS_2_4684D9319ADB79CC_SET_V0_OFFSET UNITYSDK_OFFSET(0x14A18E90)
#define CLASS_2_4684D9319ADB79CC__CTOR_OFFSET UNITYSDK_OFFSET(0x14A18F30)

inline static constexpr unsigned int Class_2_4684D9319ADB79CC_TypeDefinitionIndex = 74162;

class Class_2_4684D9319ADB79CC : public ::Class_1_47DAE01AFECF913D
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::RPG::Client::TriggerEffectParamsRef Field_2_1; // 0x40
	::RPG::GameCore::CakeRaceMoveStateConfig* Field_2_2; // 0x50
	::RPG::MVector3 _StartPos_k__BackingField; // 0x58
	::RPG::GameCore::CakeRaceMoveState Field_2_4; // 0x64
	::RPG::GameCore::CakeRaceCurveType Field_2_5; // 0x68
	::System::Single Field_2_6; // 0x6C
	::RPG::MVector3 _V0_k__BackingField; // 0x70
	::System::Single Field_2_8; // 0x7C
	::System::UInt32 Field_2_9; // 0x80
	::RPG::MVector3 _EndPos_k__BackingField; // 0x84

	::System::Void _ctor(::Class_1_3A873ED311700F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceAIState Method_2_C8324B85AEB18C17()
	{
		return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_C8324B85AEB18C17_OFFSET))(this);
	}

	::RPG::MVector3 get_StartPos()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_SET_STARTPOS_OFFSET))(this, a1);
	}

	::RPG::MVector3 get_EndPos()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_SET_ENDPOS_OFFSET))(this, a1);
	}

	::RPG::MVector3 get_V0()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_GET_V0_OFFSET))(this);
	}

	::System::Void set_V0(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_SET_V0_OFFSET))(this, a1);
	}

	static ::Class_2_4684D9319ADB79CC* Method_2_8F4CC8440DF53D30(::Class_1_3A873ED311700F93* a1)
	{
		return ((::Class_2_4684D9319ADB79CC*(*)(::Class_1_3A873ED311700F93*))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_8F4CC8440DF53D30_OFFSET))(a1);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_3306F24AC967FE79_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_E0C935AE223B555F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_E0C935AE223B555F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Single Method_2_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Single Method_2_DA7D5FED1E10712C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4684D9319ADB79CC_METHOD_2_DA7D5FED1E10712C_OFFSET))(this);
	}
};
