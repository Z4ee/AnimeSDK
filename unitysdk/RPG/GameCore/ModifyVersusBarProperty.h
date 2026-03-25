#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/VersusBarEffectType.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYVERSUSBARPROPERTY_METHOD_3_1A4469B4285A2608_OFFSET UNITYSDK_OFFSET(0x17435A60)
#define RPG_GAMECORE_MODIFYVERSUSBARPROPERTY_METHOD_3_80B89F377FA71134_OFFSET UNITYSDK_OFFSET(0x174359E0)
#define RPG_GAMECORE_MODIFYVERSUSBARPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x17435A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyVersusBarProperty_TypeDefinitionIndex = 21379;

	class ModifyVersusBarProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::VersusBarPropertyType ValueType; // 0x1C
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x20
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::System::Boolean ShowReasonTip; // 0x30
		::RPG::Client::TextID ReasonTipText; // 0x38
		::RPG::GameCore::VersusBarReasonTipType ReasonChangeLevel; // 0x48
		::RPG::GameCore::VersusBarEffectType BarChangeLevel; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYVERSUSBARPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80B89F377FA71134(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyVersusBarProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyVersusBarProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYVERSUSBARPROPERTY_METHOD_3_80B89F377FA71134_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A4469B4285A2608(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyVersusBarProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyVersusBarProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYVERSUSBARPROPERTY_METHOD_3_1A4469B4285A2608_OFFSET))(a1, a2);
		}
	};
}
