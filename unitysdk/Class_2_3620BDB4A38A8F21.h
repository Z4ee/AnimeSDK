#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/Class_2_3620BDB4A38A8F21_Struct_2_4A2983C47713ACC8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SwordTrainingProperty.h"

class Class_1_83AB3963F9C15714;
namespace RPG::GameCore { class LevelModifierOnUnstackProperty; }
namespace RPG::GameCore { class LevelRemoveModifier; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3620BDB4A38A8F21_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10617AD0)
#define CLASS_2_3620BDB4A38A8F21_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x106174D0)
#define CLASS_2_3620BDB4A38A8F21_GET_ALLYRANK_OFFSET UNITYSDK_OFFSET(0x106183A0)
#define CLASS_2_3620BDB4A38A8F21_GET_ENEMYHPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x106183E0)
#define CLASS_2_3620BDB4A38A8F21_GET_ENEMYRANK_OFFSET UNITYSDK_OFFSET(0x106183C0)
#define CLASS_2_3620BDB4A38A8F21_METHOD_2_2579B977859E46CE_OFFSET UNITYSDK_OFFSET(0x106181B0)
#define CLASS_2_3620BDB4A38A8F21_METHOD_2_57E68C714D9813EA_OFFSET UNITYSDK_OFFSET(0x10617A70)
#define CLASS_2_3620BDB4A38A8F21_METHOD_2_6E57D3559C10FFA9_1_OFFSET UNITYSDK_OFFSET(0x10618100)
#define CLASS_2_3620BDB4A38A8F21_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x106180B0)
#define CLASS_2_3620BDB4A38A8F21_METHOD_2_94C0056C3BACDCCE_OFFSET UNITYSDK_OFFSET(0x10617D30)
#define CLASS_2_3620BDB4A38A8F21_METHOD_2_B72193A40BB31D4E_OFFSET UNITYSDK_OFFSET(0x10618150)
#define CLASS_2_3620BDB4A38A8F21_METHOD_2_E06D12ACE6572EB7_OFFSET UNITYSDK_OFFSET(0x10618340)
#define CLASS_2_3620BDB4A38A8F21_METHOD_2_EF2B8E3A69C84401_OFFSET UNITYSDK_OFFSET(0x10617FB0)
#define CLASS_2_3620BDB4A38A8F21_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x106175F0)
#define CLASS_2_3620BDB4A38A8F21_SET_ALLYRANK_OFFSET UNITYSDK_OFFSET(0x106183B0)
#define CLASS_2_3620BDB4A38A8F21_SET_ENEMYHPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x106183F0)
#define CLASS_2_3620BDB4A38A8F21_SET_ENEMYRANK_OFFSET UNITYSDK_OFFSET(0x106183D0)
#define CLASS_2_3620BDB4A38A8F21__CTOR_OFFSET UNITYSDK_OFFSET(0x106174E0)
#define CLASS_2_3620BDB4A38A8F21___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10618460)
#define CLASS_2_3620BDB4A38A8F21___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x10618400)

inline static constexpr unsigned int Class_2_3620BDB4A38A8F21_TypeDefinitionIndex = 52469;

class Class_2_3620BDB4A38A8F21 : public ::Class_1_9E296C95827C90A8
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SwordTrainingProperty, ::Class_1_83AB3963F9C15714*>* Field_2_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Collections::Generic::List_1<::Class_2_3620BDB4A38A8F21_Struct_2_4A2983C47713ACC8>*>* Field_2_1; // 0x38
	::RPG::GameCore::FixPoint _EnemyHpMultiplier_k__BackingField; // 0x40
	::System::UInt32 _EnemyRank_k__BackingField; // 0x48
	::System::UInt32 _AllyRank_k__BackingField; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_57E68C714D9813EA(::RPG::GameCore::SwordTrainingProperty a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_METHOD_2_57E68C714D9813EA_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_EF2B8E3A69C84401(::RPG::GameCore::SwordTrainingProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SwordTrainingProperty))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_METHOD_2_EF2B8E3A69C84401_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_94C0056C3BACDCCE(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::SwordTrainingProperty a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::SwordTrainingProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_METHOD_2_94C0056C3BACDCCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E57D3559C10FFA9_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_METHOD_2_6E57D3559C10FFA9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B72193A40BB31D4E(::RPG::GameCore::LevelRemoveModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRemoveModifier*))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_METHOD_2_B72193A40BB31D4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E06D12ACE6572EB7(::RPG::GameCore::LevelModifierOnUnstackProperty* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelModifierOnUnstackProperty*))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_METHOD_2_E06D12ACE6572EB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_2579B977859E46CE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_METHOD_2_2579B977859E46CE_OFFSET))(this, a1);
	}

	::System::UInt32 get_AllyRank()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_GET_ALLYRANK_OFFSET))(this);
	}

	::System::Void set_AllyRank(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_SET_ALLYRANK_OFFSET))(this, a1);
	}

	::System::UInt32 get_EnemyRank()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_GET_ENEMYRANK_OFFSET))(this);
	}

	::System::Void set_EnemyRank(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_SET_ENEMYRANK_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_EnemyHpMultiplier()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_GET_ENEMYHPMULTIPLIER_OFFSET))(this);
	}

	::System::Void set_EnemyHpMultiplier(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21_SET_ENEMYHPMULTIPLIER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3620BDB4A38A8F21___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
