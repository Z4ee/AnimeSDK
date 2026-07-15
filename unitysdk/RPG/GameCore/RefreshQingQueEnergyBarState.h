#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REFRESHQINGQUEENERGYBARSTATE_METHOD_3_1C8CF601C1857B5E_OFFSET UNITYSDK_OFFSET(0x1B9C12D0)
#define RPG_GAMECORE_REFRESHQINGQUEENERGYBARSTATE_METHOD_3_9E371DC9A3F180CF_OFFSET UNITYSDK_OFFSET(0x1B9C1370)
#define RPG_GAMECORE_REFRESHQINGQUEENERGYBARSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C1330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshQingQueEnergyBarState_TypeDefinitionIndex = 21920;

	class RefreshQingQueEnergyBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHQINGQUEENERGYBARSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C8CF601C1857B5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshQingQueEnergyBarState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshQingQueEnergyBarState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHQINGQUEENERGYBARSTATE_METHOD_3_1C8CF601C1857B5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E371DC9A3F180CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshQingQueEnergyBarState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshQingQueEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHQINGQUEENERGYBARSTATE_METHOD_3_9E371DC9A3F180CF_OFFSET))(a1, a2);
		}
	};
}
