#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_5_0CB351963D3DE5D8_OFFSET UNITYSDK_OFFSET(0x1C49EF20)
#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_5_A05A1EDB0B641ADA_OFFSET UNITYSDK_OFFSET(0x1C49EF80)
#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49D5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActionConfigBase_TypeDefinitionIndex = 18827;

	class RogueActionConfigBase : public ::RPG::GameCore::PlayerActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0CB351963D3DE5D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_5_0CB351963D3DE5D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A05A1EDB0B641ADA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_5_A05A1EDB0B641ADA_OFFSET))(a1, a2);
		}
	};
}
