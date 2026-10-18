#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_METHOD_4_828CF1074DA720BA_OFFSET UNITYSDK_OFFSET(0x1D6B3460)
#define RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_METHOD_4_92D459114A3ED0DB_OFFSET UNITYSDK_OFFSET(0x1D6B34E0)
#define RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B34D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBeatBackPlayerAction_TypeDefinitionIndex = 18686;

	class FiveDimBeatBackPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_828CF1074DA720BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_METHOD_4_828CF1074DA720BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_92D459114A3ED0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBEATBACKPLAYERACTION_METHOD_4_92D459114A3ED0DB_OFFSET))(a1, a2);
		}
	};
}
