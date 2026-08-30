#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_1_61D4710B31163D99;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_PLAYSELECTANIMATIONIFCURRENT_OFFSET UNITYSDK_OFFSET(0xC8ACB40)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_PLAYSELECTANIMATIONIFSELECTED_OFFSET UNITYSDK_OFFSET(0xC8ACCA0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_SETUPVIEW_1_OFFSET UNITYSDK_OFFSET(0xC8ABD40)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_SETUPVIEW_2_OFFSET UNITYSDK_OFFSET(0xC8ABE50)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_SETUPVIEW_3_OFFSET UNITYSDK_OFFSET(0xC8ABEC0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC8ABCF0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__APPLYSELECTANIMATION_1_OFFSET UNITYSDK_OFFSET(0xC8AC960)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__APPLYSELECTANIMATION_OFFSET UNITYSDK_OFFSET(0xC8ACC30)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__CANPLAYDESELECTANIMATION_OFFSET UNITYSDK_OFFSET(0xC8AC820)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC8ACDF0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__GETICONPATH_OFFSET UNITYSDK_OFFSET(0xC8ACAD0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__GETSTATEBYCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xC8AC8C0)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC8ACD90)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC8AB9C0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingSeasonCalendarItem_TypeDefinitionIndex = 80650;

	class MonoB51RacingSeasonCalendarItem : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* SELECT_ANIM_CLIP; // 0x0
		// static const ::System::String* DeSELECT_ANIM_CLIP; // 0x0
		::RPG::Client::LocalizedText* _DayText; // 0x38
		::RPG::Client::LocalizedText* _DayLabelText; // 0x40
		::RPG::Client::LocalizedText* _SelectedDayLabelText; // 0x48
		::RPG::Client::LocalizedText* _TypeText; // 0x50
		::UnityEngine::Transform* _SelectNode; // 0x58
		::UnityEngine::Transform* _SelectFrame; // 0x60
		::UnityEngine::Transform* _ShadowNode; // 0x68
		::UnityEngine::UI::Image* _IconImage; // 0x70
		::UnityEngine::Animation* _Animation; // 0x78
		::RPG::Client::UIStateCtrl* _UIStateCtrlItem; // 0x80
		::RPG::Client::UIStateCtrl* _UIStateCtrlContent; // 0x88
		::RPG::Client::UIStateCtrl* _UIStateCtrlRoot; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_SETUPVIEW_OFFSET))(this);
		}

		::System::Void SetupView_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_SETUPVIEW_1_OFFSET))(this, a1);
		}

		::System::Void SetupView_2(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_SETUPVIEW_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetupView_3(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_SETUPVIEW_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlaySelectAnimationIfCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_PLAYSELECTANIMATIONIFCURRENT_OFFSET))(this);
		}

		::System::Void PlaySelectAnimationIfSelected(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM_PLAYSELECTANIMATIONIFSELECTED_OFFSET))(this, a1);
		}

		static ::System::String* _GetIconPath(::Class_1_61D4710B31163D99* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::Class_1_61D4710B31163D99*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__GETICONPATH_OFFSET))(a1, a2);
		}

		::System::Boolean _CanPlayDeselectAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__CANPLAYDESELECTANIMATION_OFFSET))(this);
		}

		::System::Void _ApplySelectAnimation(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__APPLYSELECTANIMATION_OFFSET))(this, a1, a2);
		}

		::System::Void _ApplySelectAnimation_1(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__APPLYSELECTANIMATION_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* _GetStateByContentType(::RPG::GameCore::B51RacingContentType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::B51RacingContentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__GETSTATEBYCONTENTTYPE_OFFSET))(this, a1);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONCALENDARITEM__ONDESTROY_OFFSET))(this);
		}
	};
}
