#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"
#include "unitysdk/RPG/Client/BookletFadeInState.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_871;
class Class_1_8AB8B167CB0901EC;
namespace RPG::GameCore::Booklet { class BasicPageElementConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_FADEIN_OFFSET UNITYSDK_OFFSET(0x91F8060)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_FULLSHOW_OFFSET UNITYSDK_OFFSET(0x91F8120)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_GET_ISLIVE_OFFSET UNITYSDK_OFFSET(0x91F77C0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x91F77A0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_HIDE_OFFSET UNITYSDK_OFFSET(0x91F80C0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0x91F7930)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_METHOD_7_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x91F7A90)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_METHOD_7_638B7168F3D35983_OFFSET UNITYSDK_OFFSET(0x91F7980)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x91F7EC0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_METHOD_7_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x91F7880)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_METHOD_7_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x91F7F40)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x91F7BA0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_SET_ISLIVE_OFFSET UNITYSDK_OFFSET(0x91F7800)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x91F7E00)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x91F8180)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET UNITYSDK_OFFSET(0x91F8230)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT___IFIXBASEPROXY_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x91F8280)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x91F8290)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletBasicPageElement_TypeDefinitionIndex = 59292;

	class BookletBasicPageElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::BasicPageElementConfig*>
	{
	public:
		::UnityEngine::Animation* AnimRoot; // 0x40
		::UnityEngine::AnimationClip* HideClip; // 0x48
		::UnityEngine::AnimationClip* FadeInClip; // 0x50
		::UnityEngine::AnimationClip* ShowClip; // 0x58
		::UnityEngine::AnimationClip* EnableClip; // 0x60
		::UnityEngine::AnimationClip* DisableClip; // 0x68
		::UnityEngine::Transform* Content; // 0x70
		::System::Nullable_1<::System::Boolean> Field_7_7; // 0x78
		::Class_1_8AB8B167CB0901EC* Field_7_8; // 0x80
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_871*>* Field_7_9; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT__CTOR_OFFSET))(this);
		}

		::RPG::Client::BookletFadeInState get_State()
		{
			return ((::RPG::Client::BookletFadeInState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_IsLive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_GET_ISLIVE_OFFSET))(this);
		}

		::System::Void set_IsLive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_SET_ISLIVE_OFFSET))(this, a1);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_FADEIN_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_HIDE_OFFSET))(this);
		}

		::System::Void FullShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_FULLSHOW_OFFSET))(this);
		}

		::System::Void Method_7_638B7168F3D35983()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_METHOD_7_638B7168F3D35983_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_7_C561FF611C07A44C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_METHOD_7_C561FF611C07A44C_OFFSET))(this);
		}

		::System::Void Method_7_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_METHOD_7_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_7_DDA8A2337932DF10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_METHOD_7_DDA8A2337932DF10_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT___IFIXBASEPROXY_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET))(this);
		}
	};
}
