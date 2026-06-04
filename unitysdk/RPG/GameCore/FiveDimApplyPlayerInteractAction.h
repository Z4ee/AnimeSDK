#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_METHOD_3_30E75A6C9D701C2F_OFFSET UNITYSDK_OFFSET(0x19727680)
#define RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_METHOD_3_C32D1304AFC03CA2_OFFSET UNITYSDK_OFFSET(0x197275C0)
#define RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19727660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimApplyPlayerInteractAction_TypeDefinitionIndex = 17857;

	class FiveDimApplyPlayerInteractAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C32D1304AFC03CA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_METHOD_3_C32D1304AFC03CA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30E75A6C9D701C2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAPPLYPLAYERINTERACTACTION_METHOD_3_30E75A6C9D701C2F_OFFSET))(a1, a2);
		}
	};
}
