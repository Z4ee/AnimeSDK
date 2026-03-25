#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/Class_2_69C35B2DC237BAFD_Struct_2_4A2983C47713ACC8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SwordTrainingProperty.h"

class Class_1_83AB3963F9C15714;
namespace RPG::GameCore { class LevelModifierOnUnstackProperty; }
namespace RPG::GameCore { class LevelRemoveModifier; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_69C35B2DC237BAFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB288010)
#define CLASS_2_69C35B2DC237BAFD_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xB287A10)
#define CLASS_2_69C35B2DC237BAFD_GET_ALLYRANK_OFFSET UNITYSDK_OFFSET(0xB2888F0)
#define CLASS_2_69C35B2DC237BAFD_GET_ENEMYHPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xB288930)
#define CLASS_2_69C35B2DC237BAFD_GET_ENEMYRANK_OFFSET UNITYSDK_OFFSET(0xB288910)
#define CLASS_2_69C35B2DC237BAFD_METHOD_2_26BC69D24FA97C57_OFFSET UNITYSDK_OFFSET(0xB2886F0)
#define CLASS_2_69C35B2DC237BAFD_METHOD_2_5CCAF778DFBDD7D0_OFFSET UNITYSDK_OFFSET(0xB287FB0)
#define CLASS_2_69C35B2DC237BAFD_METHOD_2_6E57D3559C10FFA9_1_OFFSET UNITYSDK_OFFSET(0xB288640)
#define CLASS_2_69C35B2DC237BAFD_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xB2885F0)
#define CLASS_2_69C35B2DC237BAFD_METHOD_2_B86443FED5BE52D7_OFFSET UNITYSDK_OFFSET(0xB288690)
#define CLASS_2_69C35B2DC237BAFD_METHOD_2_E02190FCFA94D3AE_OFFSET UNITYSDK_OFFSET(0xB288890)
#define CLASS_2_69C35B2DC237BAFD_METHOD_2_EEF2EB5B071B5988_OFFSET UNITYSDK_OFFSET(0xB288280)
#define CLASS_2_69C35B2DC237BAFD_METHOD_2_EF2B8E3A69C84401_OFFSET UNITYSDK_OFFSET(0xB2884D0)
#define CLASS_2_69C35B2DC237BAFD_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB287B30)
#define CLASS_2_69C35B2DC237BAFD_SET_ALLYRANK_OFFSET UNITYSDK_OFFSET(0xB288900)
#define CLASS_2_69C35B2DC237BAFD_SET_ENEMYHPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xB288940)
#define CLASS_2_69C35B2DC237BAFD_SET_ENEMYRANK_OFFSET UNITYSDK_OFFSET(0xB288920)
#define CLASS_2_69C35B2DC237BAFD__CTOR_OFFSET UNITYSDK_OFFSET(0xB287A20)
#define CLASS_2_69C35B2DC237BAFD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2889B0)
#define CLASS_2_69C35B2DC237BAFD___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB288950)

inline static constexpr unsigned int Class_2_69C35B2DC237BAFD_TypeDefinitionIndex = 45046;

class Class_2_69C35B2DC237BAFD : public ::Class_1_9E296C95827C90A8
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SwordTrainingProperty, ::Class_1_83AB3963F9C15714*>* Field_2_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Collections::Generic::List_1<::Class_2_69C35B2DC237BAFD_Struct_2_4A2983C47713ACC8>*>* Field_2_3; // 0x30
	::System::UInt32 _AllyRank_k__BackingField; // 0x38
	::System::UInt32 _EnemyRank_k__BackingField; // 0x3C
	::RPG::GameCore::FixPoint _EnemyHpMultiplier_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5CCAF778DFBDD7D0(::RPG::GameCore::SwordTrainingProperty a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_METHOD_2_5CCAF778DFBDD7D0_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_EF2B8E3A69C84401(::RPG::GameCore::SwordTrainingProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::SwordTrainingProperty))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_METHOD_2_EF2B8E3A69C84401_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_EEF2EB5B071B5988(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::SwordTrainingProperty a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::SwordTrainingProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_METHOD_2_EEF2EB5B071B5988_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E57D3559C10FFA9_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_METHOD_2_6E57D3559C10FFA9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B86443FED5BE52D7(::RPG::GameCore::LevelRemoveModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRemoveModifier*))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_METHOD_2_B86443FED5BE52D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E02190FCFA94D3AE(::RPG::GameCore::LevelModifierOnUnstackProperty* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelModifierOnUnstackProperty*))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_METHOD_2_E02190FCFA94D3AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_26BC69D24FA97C57(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_METHOD_2_26BC69D24FA97C57_OFFSET))(this, a1);
	}

	::System::UInt32 get_AllyRank()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_GET_ALLYRANK_OFFSET))(this);
	}

	::System::Void set_AllyRank(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_SET_ALLYRANK_OFFSET))(this, value);
	}

	::System::UInt32 get_EnemyRank()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_GET_ENEMYRANK_OFFSET))(this);
	}

	::System::Void set_EnemyRank(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_SET_ENEMYRANK_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_EnemyHpMultiplier()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_GET_ENEMYHPMULTIPLIER_OFFSET))(this);
	}

	::System::Void set_EnemyHpMultiplier(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD_SET_ENEMYHPMULTIPLIER_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69C35B2DC237BAFD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
