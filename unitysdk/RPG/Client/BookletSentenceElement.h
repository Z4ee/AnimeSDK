#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"
#include "unitysdk/RPG/Client/BookletFadeInState.h"

class Class_1_8AB8B167CB0901EC;
namespace RPG::GameCore::Booklet { class SentenceElementConfig; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_FADEIN_OFFSET UNITYSDK_OFFSET(0xC9676F0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_FULLSHOW_OFFSET UNITYSDK_OFFSET(0xC967790)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC967270)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_HIDE_OFFSET UNITYSDK_OFFSET(0xC967740)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xC9672C0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_METHOD_7_638B7168F3D35983_OFFSET UNITYSDK_OFFSET(0xC967310)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC967670)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC967420)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xC9675E0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC9677E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletSentenceElement_TypeDefinitionIndex = 72320;

	class BookletSentenceElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::SentenceElementConfig*>
	{
	public:
		::UnityEngine::Animation* AnimRoot; // 0x40
		::UnityEngine::AnimationClip* HideClip; // 0x48
		::UnityEngine::AnimationClip* FadeInClip; // 0x50
		::UnityEngine::AnimationClip* ShowClip; // 0x58
		::UnityEngine::UI::Text* Content; // 0x60
		::Class_1_8AB8B167CB0901EC* BIGJHPJGDNH; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT__CTOR_OFFSET))(this);
		}

		::RPG::Client::BookletFadeInState get_State()
		{
			return ((::RPG::Client::BookletFadeInState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_GET_STATE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_FADEIN_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_HIDE_OFFSET))(this);
		}

		::System::Void FullShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_FULLSHOW_OFFSET))(this);
		}

		::System::Void Method_7_638B7168F3D35983()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_METHOD_7_638B7168F3D35983_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_METHOD_7_9681042564541CD6_OFFSET))(this);
		}
	};
}
