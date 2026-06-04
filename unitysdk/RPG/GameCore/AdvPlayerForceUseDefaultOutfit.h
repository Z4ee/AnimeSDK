#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_METHOD_3_B6CA1272C86EAAC3_OFFSET UNITYSDK_OFFSET(0x194315D0)
#define RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_METHOD_3_DA9515D8C0F01E99_OFFSET UNITYSDK_OFFSET(0x19431500)
#define RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19431580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerForceUseDefaultOutfit_TypeDefinitionIndex = 19879;

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

		static ::System::Void Method_3_DA9515D8C0F01E99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_METHOD_3_DA9515D8C0F01E99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6CA1272C86EAAC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_METHOD_3_B6CA1272C86EAAC3_OFFSET))(a1, a2);
		}
	};
}
