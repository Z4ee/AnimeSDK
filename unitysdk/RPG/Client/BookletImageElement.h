#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"
#include "unitysdk/RPG/Client/BookletFadeInState.h"

class Class_1_8AB8B167CB0901EC;
namespace RPG::GameCore::Booklet { class ImageElementConfig; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_BOOKLETIMAGEELEMENT_FADEIN_OFFSET UNITYSDK_OFFSET(0x9EA38A0)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_FULLSHOW_OFFSET UNITYSDK_OFFSET(0x9EA3940)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9EA3530)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_HIDE_OFFSET UNITYSDK_OFFSET(0x9EA38F0)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0x9EA3550)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_METHOD_7_638B7168F3D35983_OFFSET UNITYSDK_OFFSET(0x9EA35A0)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9EA3820)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9EA36B0)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x9EA3790)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA3990)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET UNITYSDK_OFFSET(0x9EA3A10)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT___IFIXBASEPROXY_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9EA3A60)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x9EA3A70)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletImageElement_TypeDefinitionIndex = 66692;

	class BookletImageElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::ImageElementConfig*>
	{
	public:
		::UnityEngine::Animation* AnimRoot; // 0x40
		::UnityEngine::AnimationClip* HideClip; // 0x48
		::UnityEngine::AnimationClip* FadeInClip; // 0x50
		::UnityEngine::AnimationClip* ShowClip; // 0x58
		::UnityEngine::UI::Image* Front; // 0x60
		::UnityEngine::UI::Image* Back; // 0x68
		::Class_1_8AB8B167CB0901EC* Field_7_6; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT__CTOR_OFFSET))(this);
		}

		::RPG::Client::BookletFadeInState get_State()
		{
			return ((::RPG::Client::BookletFadeInState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_GET_STATE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_FADEIN_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_HIDE_OFFSET))(this);
		}

		::System::Void FullShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_FULLSHOW_OFFSET))(this);
		}

		::System::Void Method_7_638B7168F3D35983()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_METHOD_7_638B7168F3D35983_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT___IFIXBASEPROXY_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET))(this);
		}
	};
}
