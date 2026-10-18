#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftActorHeadControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftActorViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_METHOD_5_2E6320D55DE0E8AE_OFFSET UNITYSDK_OFFSET(0xD5DF300)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_METHOD_5_5DA7B8BC642C6040_OFFSET UNITYSDK_OFFSET(0xD5DF2C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_METHOD_5_7B0D309096CCDCDA_OFFSET UNITYSDK_OFFSET(0xD5DF360)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD5DF6E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftActorHeadControl_TypeDefinitionIndex = 80010;

	class MechCraftActorHeadControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftActorHeadControlBinder* _Binder; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* Method_5_5DA7B8BC642C6040()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_METHOD_5_5DA7B8BC642C6040_OFFSET))(this);
		}

		::System::Void Method_5_2E6320D55DE0E8AE(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_METHOD_5_2E6320D55DE0E8AE_OFFSET))(this, a1);
		}

		::System::Void Method_5_7B0D309096CCDCDA(::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTORHEADCONTROL_METHOD_5_7B0D309096CCDCDA_OFFSET))(this, a1);
		}
	};
}
