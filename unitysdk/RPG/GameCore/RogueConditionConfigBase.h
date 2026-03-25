#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_4D275D38310FAFB9_OFFSET UNITYSDK_OFFSET(0x175EF140)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_E9BAE92B9BDEB9E0_OFFSET UNITYSDK_OFFSET(0x175ED1D0)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x175EB070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueConditionConfigBase_TypeDefinitionIndex = 18136;

	class RogueConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_E9BAE92B9BDEB9E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_E9BAE92B9BDEB9E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4D275D38310FAFB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_4D275D38310FAFB9_OFFSET))(a1, a2);
		}
	};
}
