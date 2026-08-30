#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AnimatorButton.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_INTROBUTTON_GET_ENABLEGUIDECLOSEATTHEOUTSET_OFFSET UNITYSDK_OFFSET(0xD4061B0)
#define RPG_CLIENT_INTROBUTTON_GET_GUIDEID_OFFSET UNITYSDK_OFFSET(0xD406100)
#define RPG_CLIENT_INTROBUTTON_GET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0xD406050)
#define RPG_CLIENT_INTROBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xD406250)
#define RPG_CLIENT_INTROBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xD406350)
#define RPG_CLIENT_INTROBUTTON_OPENINTRODUCEDIALOG_OFFSET UNITYSDK_OFFSET(0xD4063B0)
#define RPG_CLIENT_INTROBUTTON_OPENTUTORIALGUIDEDIALOG_OFFSET UNITYSDK_OFFSET(0xD406550)
#define RPG_CLIENT_INTROBUTTON_SET_ENABLEGUIDECLOSEATTHEOUTSET_OFFSET UNITYSDK_OFFSET(0xD406200)
#define RPG_CLIENT_INTROBUTTON_SET_GUIDEID_OFFSET UNITYSDK_OFFSET(0xD406150)
#define RPG_CLIENT_INTROBUTTON_SET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0xD4060A0)
#define RPG_CLIENT_INTROBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0xD4066C0)
#define RPG_CLIENT_INTROBUTTON__OPENDIALOG_OFFSET UNITYSDK_OFFSET(0xD4062B0)

namespace RPG::Client
{
	inline static constexpr unsigned int IntroButton_TypeDefinitionIndex = 72475;

	class IntroButton : public ::RPG::Client::AnimatorButton
	{
	public:
		::System::Int32 introduceID; // 0x1C8
		::System::Int32 guideID; // 0x1CC
		::System::Boolean enableGuideCloseAtTheOutset; // 0x1D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON__CTOR_OFFSET))(this);
		}

		::System::Int32 get_IntroduceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_GET_INTRODUCEID_OFFSET))(this);
		}

		::System::Void set_IntroduceID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_SET_INTRODUCEID_OFFSET))(this, a1);
		}

		::System::Int32 get_GuideID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_GET_GUIDEID_OFFSET))(this);
		}

		::System::Void set_GuideID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_SET_GUIDEID_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableGuideCloseAtTheOutset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_GET_ENABLEGUIDECLOSEATTHEOUTSET_OFFSET))(this);
		}

		::System::Void set_EnableGuideCloseAtTheOutset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_SET_ENABLEGUIDECLOSEATTHEOUTSET_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void OpenIntroduceDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_OPENINTRODUCEDIALOG_OFFSET))(this);
		}

		::System::Void OpenTutorialGuideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_OPENTUTORIALGUIDEDIALOG_OFFSET))(this);
		}

		::System::Void _OpenDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON__OPENDIALOG_OFFSET))(this);
		}
	};
}
