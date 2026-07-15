#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_202F60AA9B78CCAD_OFFSET UNITYSDK_OFFSET(0x1C4AF0C0)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_4D275D38310FAFB9_OFFSET UNITYSDK_OFFSET(0x1C4AF120)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AE990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueConditionConfigBase_TypeDefinitionIndex = 19027;

	class RogueConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_202F60AA9B78CCAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_202F60AA9B78CCAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4D275D38310FAFB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_4D275D38310FAFB9_OFFSET))(a1, a2);
		}
	};
}
