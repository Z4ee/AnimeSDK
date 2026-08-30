#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpeditionBattleFlowStateConfig; }

#define RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIGCONTAINER_METHOD_2_BFB83A0BB75120D2_OFFSET UNITYSDK_OFFSET(0x1D7DB880)
#define RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIGCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DB940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleFlowStateConfigContainer_TypeDefinitionIndex = 16051;

	class ExpeditionBattleFlowStateConfigContainer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ExpeditionBattleFlowStateConfig*>* Configs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIGCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BFB83A0BB75120D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionBattleFlowStateConfigContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionBattleFlowStateConfigContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIGCONTAINER_METHOD_2_BFB83A0BB75120D2_OFFSET))(a1, a2);
		}
	};
}
