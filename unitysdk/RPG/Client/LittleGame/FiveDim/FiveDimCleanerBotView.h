#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"

namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_3FFD0D3E22A538D6_OFFSET UNITYSDK_OFFSET(0xBDEF190)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xBDEF4E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xBDEF050)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEF4A0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimCleanerBotView_TypeDefinitionIndex = 71699;

	class FiveDimCleanerBotView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_7_B43C848B078B3C34()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_B43C848B078B3C34_OFFSET))(this);
		}

		::System::Void Method_7_3FFD0D3E22A538D6(::UnityEngine::Transform* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_3FFD0D3E22A538D6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_7744894CEC41BF06_OFFSET))(this);
		}
	};
}
