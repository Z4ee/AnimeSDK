#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/ModifierCustomEventSortType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_460;
class Class_1_5F51D4049EA87B7B;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierCustomEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierCustomEvent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_524C7B39734B3AFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A462F0)
#define CLASS_3_524C7B39734B3AFD_METHOD_3_2576376AC7F6B15D_OFFSET UNITYSDK_OFFSET(0x18A47040)
#define CLASS_3_524C7B39734B3AFD_METHOD_3_CD08DF225FEEB414_OFFSET UNITYSDK_OFFSET(0x18A47300)
#define CLASS_3_524C7B39734B3AFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A46340)
#define CLASS_3_524C7B39734B3AFD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A46190)

inline static constexpr unsigned int Class_3_524C7B39734B3AFD_TypeDefinitionIndex = 55935;

class Class_3_524C7B39734B3AFD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerModifierCustomEvent*>
{
public:
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x28
	::RPG::GameCore::GameEntity* GHBGHCLIMKC; // 0x30
	::RPG::GameCore::ModifierCustomEventConfig* FNKBIEBFFBO; // 0x38
	::RPG::GameCore::GameEntity* BLDBOAKGDNH; // 0x40
	::RPG::PoolList_1<::RPG::GameCore::TurnBasedModifierInstance*>* HKGJKJHBOBG; // 0x48
	::RPG::GameCore::ModifierCustomEventSortType OEAAMAEJBDP; // 0x50
	::System::Int32 HMLNECEFMEL; // 0x54
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x58
	::System::Int32 CIFEKCAKFPL; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModifierCustomEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModifierCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_2576376AC7F6B15D(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::ModifierCustomEventConfig* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::ModifierCustomEventConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD_METHOD_3_2576376AC7F6B15D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CD08DF225FEEB414(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_524C7B39734B3AFD_METHOD_3_CD08DF225FEEB414_OFFSET))(this, a1);
	}
};
