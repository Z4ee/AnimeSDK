#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/GridFightDropCfgType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT_METHOD_3_89FDE3EA751ACC21_OFFSET UNITYSDK_OFFSET(0x18E21BA0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT_METHOD_3_968C390F763E1166_OFFSET UNITYSDK_OFFSET(0x18E21C20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E21BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByGridFightTraitBonusDropCount_TypeDefinitionIndex = 21415;

	class SetDynamicValueByGridFightTraitBonusDropCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Trait; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::GridFightDropCfgType DropType; // 0x2C
		::System::UInt32 TraitID; // 0x30
		::RPG::GameCore::DynamicFloat* TraitBonusCountFrom; // 0x38
		::RPG::GameCore::DynamicFloat* TraitBonusCountTo; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89FDE3EA751ACC21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT_METHOD_3_89FDE3EA751ACC21_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_968C390F763E1166(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT_METHOD_3_968C390F763E1166_OFFSET))(a1, a2);
		}
	};
}
