#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D43919DCE1F00DCB.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierAttackType.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A80764A8DE475761;
namespace RPG::GameCore { class FiveDimGrenadierBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimGrenadierMoveConfig; }
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }
namespace RPG::GameCore { class FiveDimGrenadierPropSpawnerParam; }
namespace RPG::GameCore { class FloatCurve; }

#define CLASS_2_CA68150416BED9E5_METHOD_2_1A3CA54C034C1DAE_OFFSET UNITYSDK_OFFSET(0x144EE140)
#define CLASS_2_CA68150416BED9E5_METHOD_2_22998C0497F21AFB_OFFSET UNITYSDK_OFFSET(0x144ED1C0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x144ED120)
#define CLASS_2_CA68150416BED9E5_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x144EEF20)
#define CLASS_2_CA68150416BED9E5_METHOD_2_4B2CD7086A8CA682_OFFSET UNITYSDK_OFFSET(0x144ED950)
#define CLASS_2_CA68150416BED9E5_METHOD_2_4E84FD21E7EECC5B_OFFSET UNITYSDK_OFFSET(0x144ED660)
#define CLASS_2_CA68150416BED9E5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x144EEEC0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_77419DE2B5B38846_OFFSET UNITYSDK_OFFSET(0x144EDE50)
#define CLASS_2_CA68150416BED9E5_METHOD_2_7B17B6C465305A1C_OFFSET UNITYSDK_OFFSET(0x144EC310)
#define CLASS_2_CA68150416BED9E5_METHOD_2_86914B28476494AF_OFFSET UNITYSDK_OFFSET(0x144EEB90)
#define CLASS_2_CA68150416BED9E5_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x144EEE50)
#define CLASS_2_CA68150416BED9E5_METHOD_2_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0x144EE930)
#define CLASS_2_CA68150416BED9E5_METHOD_2_98C57213CE3C2C74_OFFSET UNITYSDK_OFFSET(0x144EECD0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_B7859A6672E6EACD_OFFSET UNITYSDK_OFFSET(0x144EEDA0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_C85D93508ECC42CF_OFFSET UNITYSDK_OFFSET(0x144EE0F0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x144ED2D0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x144ECAB0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_E89FBBA661DE55BC_OFFSET UNITYSDK_OFFSET(0x144ED6D0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x144EEEB0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_EC1065B102446B76_OFFSET UNITYSDK_OFFSET(0x144ED5A0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_FCDA6C73F74BD98C_OFFSET UNITYSDK_OFFSET(0x144ED380)
#define CLASS_2_CA68150416BED9E5__CTOR_OFFSET UNITYSDK_OFFSET(0x144EEE30)

inline static constexpr unsigned int Class_2_CA68150416BED9E5_TypeDefinitionIndex = 71583;

class Class_2_CA68150416BED9E5 : public ::Class_1_D43919DCE1F00DCB
{
public:
	::Il2CppArray<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>* Field_2_0; // 0x18
	::RPG::GameCore::FloatCurve* Field_2_1; // 0x20
	::RPG::GameCore::FiveDimGrenadierPropSpawnerParam* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Single Field_2_5; // 0x38
	::System::Single Field_2_6; // 0x3C
	::System::Single Field_2_7; // 0x40
	::System::Single Field_2_8; // 0x44
	::System::Single Field_2_9; // 0x48
	::System::Single Field_2_10; // 0x4C
	::System::Single Field_2_11; // 0x50
	::System::Single Field_2_12; // 0x54
	::System::Single Field_2_13; // 0x58
	::System::Single Field_2_14; // 0x5C
	::RPG::GameCore::FiveDimGrenadierAttackType Field_2_15; // 0x60
	::RPG::GameCore::FiveDimSimpleProjectileMoveType Field_2_16; // 0x64
	::System::Single Field_2_17; // 0x68
	::System::Single Field_2_18; // 0x6C
	::System::Single Field_2_19; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7B17B6C465305A1C(::Class_1_A80764A8DE475761* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A80764A8DE475761*))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_7B17B6C465305A1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_22998C0497F21AFB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_22998C0497F21AFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Boolean Method_2_FCDA6C73F74BD98C(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_FCDA6C73F74BD98C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_EC1065B102446B76(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_EC1065B102446B76_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_4E84FD21E7EECC5B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_4E84FD21E7EECC5B_OFFSET))(this);
	}

	::System::Boolean Method_2_4B2CD7086A8CA682()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_4B2CD7086A8CA682_OFFSET))(this);
	}

	::System::Boolean Method_2_1A3CA54C034C1DAE(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_1A3CA54C034C1DAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_77419DE2B5B38846(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_77419DE2B5B38846_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_E89FBBA661DE55BC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_E89FBBA661DE55BC_OFFSET))(this);
	}

	::System::Boolean Method_2_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_97285E397E8F5091_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_86914B28476494AF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_86914B28476494AF_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimOrthoDirection Method_2_C85D93508ECC42CF()
	{
		return ((::RPG::GameCore::FiveDimOrthoDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_C85D93508ECC42CF_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimGrenadierMoveConfig* Method_2_B7859A6672E6EACD()
	{
		return ((::RPG::GameCore::FiveDimGrenadierMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_B7859A6672E6EACD_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimGrenadierBakedMoveConfig* Method_2_98C57213CE3C2C74()
	{
		return ((::RPG::GameCore::FiveDimGrenadierBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_98C57213CE3C2C74_OFFSET))(this);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_A80764A8DE475761* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A80764A8DE475761*))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
