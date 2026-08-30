#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_METHOD_3_0EAC55B0C21CBABA_OFFSET UNITYSDK_OFFSET(0x1CDD5150)
#define RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_METHOD_3_B6CA1272C86EAAC3_OFFSET UNITYSDK_OFFSET(0x1CDD51F0)
#define RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD51B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerForceUseDefaultOutfit_TypeDefinitionIndex = 20793;

	class AdvPlayerForceUseDefaultOutfit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* DefaultSlotTypes; // 0x28
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* EffectList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0EAC55B0C21CBABA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_METHOD_3_0EAC55B0C21CBABA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6CA1272C86EAAC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_METHOD_3_B6CA1272C86EAAC3_OFFSET))(a1, a2);
		}
	};
}
