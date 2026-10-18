#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class RegisterToPlanarReflectionMonoPlugin; }
namespace RPG::Client::MechCraft::View { class MechCraftMechatronView; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftProductUI3DViewModel; }
namespace System { class String; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD64EA60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0xD64F4B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD64EAA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL_START_OFFSET UNITYSDK_OFFSET(0xD64F460)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD64F500)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL__GETTRACKNAME_OFFSET UNITYSDK_OFFSET(0xD64F3D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL__REFRESH_OFFSET UNITYSDK_OFFSET(0xD64EB00)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftProductUI3DControl_TypeDefinitionIndex = 80049;

	class MechCraftProductUI3DControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel* _Content; // 0x18
		::RPG::Client::MechCraft::View::MechCraftMechatronView* _MechatronView; // 0x20
		::RPG::Client::RegisterToPlanarReflectionMonoPlugin* _Plugin; // 0x28
		::UnityEngine::Playables::PlayableDirector* _PlayableDirector; // 0x30
		::System::String* _ReplaceMechTrackName; // 0x38
		::System::String* _AventurineReplaceMechTrackName; // 0x40
		::System::String* _SushangReplaceMechTrackName; // 0x48
		::System::String* _DrRatioReplaceMechTrackName; // 0x50
		::System::String* _RuanMeiReplaceMechTrackName; // 0x58
		::System::UInt32 _AventurineMechatronID; // 0x60
		::System::UInt32 _SushangMechatronID; // 0x64
		::System::UInt32 _DrRatioMechatronID; // 0x68
		::System::UInt32 _RuanMeiMechatronID; // 0x6C
		::System::String* _WeaponTrackName; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel* get_Content()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void _Refresh(::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL__REFRESH_OFFSET))(this, a1);
		}

		::System::String* _GetTrackName(::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftProductUI3DViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL__GETTRACKNAME_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL_START_OFFSET))(this);
		}

		::System::Void PlayTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPRODUCTUI3DCONTROL_PLAYTIMELINE_OFFSET))(this);
		}
	};
}
