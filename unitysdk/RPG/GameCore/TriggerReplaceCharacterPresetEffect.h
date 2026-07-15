#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT_METHOD_3_92F8A44ECE5A2031_OFFSET UNITYSDK_OFFSET(0x1B05B280)
#define RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT_METHOD_3_E288DF4A51329FDB_OFFSET UNITYSDK_OFFSET(0x1B05B300)
#define RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B05B2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerReplaceCharacterPresetEffect_TypeDefinitionIndex = 19484;

	class TriggerReplaceCharacterPresetEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* Preset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_92F8A44ECE5A2031(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT_METHOD_3_92F8A44ECE5A2031_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E288DF4A51329FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERREPLACECHARACTERPRESETEFFECT_METHOD_3_E288DF4A51329FDB_OFFSET))(a1, a2);
		}
	};
}
