#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/StackAdditivePropertyOp.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_METHOD_3_4850C0E7E7D93A0C_OFFSET UNITYSDK_OFFSET(0x1C119A90)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_METHOD_3_E7B8B721B1C4175D_OFFSET UNITYSDK_OFFSET(0x1C119A30)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C119A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ModifyOwedRollCount_TypeDefinitionIndex = 15447;

	class DiceCombatTaskConfig_ModifyOwedRollCount : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::StackAdditivePropertyOp OP; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7B8B721B1C4175D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_METHOD_3_E7B8B721B1C4175D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4850C0E7E7D93A0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ModifyOwedRollCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_MODIFYOWEDROLLCOUNT_METHOD_3_4850C0E7E7D93A0C_OFFSET))(a1, a2);
		}
	};
}
