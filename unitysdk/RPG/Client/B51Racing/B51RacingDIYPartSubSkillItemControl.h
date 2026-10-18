#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconControl; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0xC788390)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC788020)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC788450)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC787F80)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC787E10)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC787D30)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL__SETUPCARICON_OFFSET UNITYSDK_OFFSET(0xC7882C0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYPartSubSkillItemControl_TypeDefinitionIndex = 81782;

	class B51RacingDIYPartSubSkillItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconControl* _CarPartIconControl; // 0x40
		::RPG::Client::LocalizedText* _NameText; // 0x48
		::RPG::Client::LocalizedText* _DescrText; // 0x50
		::RPG::Client::AnimatorButton* _AnimatorButton; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnItemClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL_ONITEMCLICK_OFFSET))(this);
		}

		::System::Void _SetupCarIcon(::RPG::GameCore::B51RacingPartType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTSUBSKILLITEMCONTROL__SETUPCARICON_OFFSET))(this, a1, a2);
		}
	};
}
