#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinViewModel; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD5F5310)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_METHOD_5_CD44C46D7E42C357_OFFSET UNITYSDK_OFFSET(0xD5F53B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD5F5350)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD5F5490)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCoinIconControl_TypeDefinitionIndex = 79811;

	class MechCraftCoinIconControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* LFGMLJCCPCH; // 0x18
		::UnityEngine::UI::Image* _Icon; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* get_Content()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_CD44C46D7E42C357(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCOINICONCONTROL_METHOD_5_CD44C46D7E42C357_OFFSET))(this, a1);
		}
	};
}
