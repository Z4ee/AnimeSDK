#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_METHOD_6_9C224BD55FB17304_OFFSET UNITYSDK_OFFSET(0x19B43AB0)
#define RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_METHOD_6_DF0C7A30CBDBEC7D_OFFSET UNITYSDK_OFFSET(0x19B21850)
#define RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B21720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicConditionConfigBase_TypeDefinitionIndex = 18545;

	class RogueMagicConditionConfigBase : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9C224BD55FB17304(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_METHOD_6_9C224BD55FB17304_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_DF0C7A30CBDBEC7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDITIONCONFIGBASE_METHOD_6_DF0C7A30CBDBEC7D_OFFSET))(a1, a2);
		}
	};
}
