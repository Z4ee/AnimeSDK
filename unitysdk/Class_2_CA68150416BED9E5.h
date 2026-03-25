#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6E5873B83DCA1F72.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierAttackType.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4382DA7CF2A7A8AA;
namespace RPG::GameCore { class FiveDimGrenadierBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimGrenadierMoveConfig; }
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }
namespace RPG::GameCore { class FiveDimGrenadierPropSpawnerParam; }

#define CLASS_2_CA68150416BED9E5_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA6CF280)
#define CLASS_2_CA68150416BED9E5_METHOD_2_38C81C8F250B78B7_OFFSET UNITYSDK_OFFSET(0xA6D05E0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0xA6CFD10)
#define CLASS_2_CA68150416BED9E5_METHOD_2_402D3BBAFFD1775E_OFFSET UNITYSDK_OFFSET(0xA6CF860)
#define CLASS_2_CA68150416BED9E5_METHOD_2_43361AC706081BBD_OFFSET UNITYSDK_OFFSET(0xA6D0E50)
#define CLASS_2_CA68150416BED9E5_METHOD_2_4E84FD21E7EECC5B_OFFSET UNITYSDK_OFFSET(0xA6CF7E0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA6D0FB0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_5F59867914726945_OFFSET UNITYSDK_OFFSET(0xA6D0C50)
#define CLASS_2_CA68150416BED9E5_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xA6CF450)
#define CLASS_2_CA68150416BED9E5_METHOD_2_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0xA6CF340)
#define CLASS_2_CA68150416BED9E5_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0xA6D1010)
#define CLASS_2_CA68150416BED9E5_METHOD_2_B51E64DF0C8A2663_OFFSET UNITYSDK_OFFSET(0xA6D01B0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_C0E99D83C9CCEB1A_OFFSET UNITYSDK_OFFSET(0xA6D0D90)
#define CLASS_2_CA68150416BED9E5_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xA6D0FA0)
#define CLASS_2_CA68150416BED9E5_METHOD_2_C85D93508ECC42CF_OFFSET UNITYSDK_OFFSET(0xA6D0590)
#define CLASS_2_CA68150416BED9E5_METHOD_2_D19EB92850536C95_OFFSET UNITYSDK_OFFSET(0xA6CE370)
#define CLASS_2_CA68150416BED9E5_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0xA6D0F30)
#define CLASS_2_CA68150416BED9E5_METHOD_2_EC1065B102446B76_OFFSET UNITYSDK_OFFSET(0xA6CF720)
#define CLASS_2_CA68150416BED9E5_METHOD_2_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0xA6CEA20)
#define CLASS_2_CA68150416BED9E5_METHOD_2_FCDA6C73F74BD98C_OFFSET UNITYSDK_OFFSET(0xA6CF500)
#define CLASS_2_CA68150416BED9E5__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D0F10)

inline static constexpr unsigned int Class_2_CA68150416BED9E5_TypeDefinitionIndex = 62744;

class Class_2_CA68150416BED9E5 : public ::Class_1_6E5873B83DCA1F72
{
public:
	::RPG::GameCore::FiveDimGrenadierPropSpawnerParam* Field_2_14; // 0x18
	::Il2CppArray<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>* Field_2_12; // 0x20
	::RPG::GameCore::FiveDimGrenadierAttackType Field_2_8; // 0x28
	::System::Single Field_2_0; // 0x2C
	::RPG::GameCore::FiveDimSimpleProjectileMoveType Field_2_9; // 0x30
	::System::Single Field_2_3; // 0x34
	::System::Single Field_2_13; // 0x38
	::System::Single Field_2_4; // 0x3C
	::System::Single Field_2_5; // 0x40
	::System::Single Field_2_10; // 0x44
	::System::Single Field_2_6; // 0x48
	::System::Single Field_2_2; // 0x4C
	::System::Single Field_2_11; // 0x50
	::System::Single Field_2_7; // 0x54
	::System::Single Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D19EB92850536C95(::Class_1_4382DA7CF2A7A8AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4382DA7CF2A7A8AA*))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_D19EB92850536C95_OFFSET))(this, a1);
	}

	::System::Void Method_2_FAADEE08E4E52BA5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_FAADEE08E4E52BA5_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
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

	::System::Boolean Method_2_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Boolean Method_2_38C81C8F250B78B7(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_38C81C8F250B78B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B51E64DF0C8A2663(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_B51E64DF0C8A2663_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_402D3BBAFFD1775E(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_402D3BBAFFD1775E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_5F59867914726945()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_5F59867914726945_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimOrthoDirection Method_2_C85D93508ECC42CF()
	{
		return ((::RPG::GameCore::FiveDimOrthoDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_C85D93508ECC42CF_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimGrenadierMoveConfig* Method_2_43361AC706081BBD()
	{
		return ((::RPG::GameCore::FiveDimGrenadierMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_43361AC706081BBD_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimGrenadierBakedMoveConfig* Method_2_C0E99D83C9CCEB1A()
	{
		return ((::RPG::GameCore::FiveDimGrenadierBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_C0E99D83C9CCEB1A_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_4382DA7CF2A7A8AA* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4382DA7CF2A7A8AA*))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA68150416BED9E5_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
