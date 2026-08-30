#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class AddChallengeBossInfoPanelState; }
namespace RPG::GameCore { class RemoveChallengeBossInfoPanelState; }
namespace RPG::GameCore { class SwitchChallengeBossInfoPanelState; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6FE13DC8E3A9F329_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AA54660)
#define CLASS_2_6FE13DC8E3A9F329_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AA54820)
#define CLASS_2_6FE13DC8E3A9F329_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1AA53020)
#define CLASS_2_6FE13DC8E3A9F329_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1AA53040)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x1AA53260)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x1AA53AB0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x1AA54260)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_30866F9CCFB9057B_OFFSET UNITYSDK_OFFSET(0x1AA53420)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_5633C39E0F4C80C6_OFFSET UNITYSDK_OFFSET(0x1AA53D60)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_8C0F82AA8DA03496_OFFSET UNITYSDK_OFFSET(0x1AA53F20)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1AA538A0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x1AA54540)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_BA60B5B08BA71FA9_OFFSET UNITYSDK_OFFSET(0x1AA54150)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_D10D72BF522CC48B_OFFSET UNITYSDK_OFFSET(0x1AA541E0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1AA543C0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x1AA54480)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1AA54300)
#define CLASS_2_6FE13DC8E3A9F329_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1AA53030)
#define CLASS_2_6FE13DC8E3A9F329__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA549C0)
#define CLASS_2_6FE13DC8E3A9F329__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AA53080)
#define CLASS_2_6FE13DC8E3A9F329__ONTICK_OFFSET UNITYSDK_OFFSET(0x1AA53960)

inline static constexpr unsigned int Class_2_6FE13DC8E3A9F329_TypeDefinitionIndex = 72033;

class Class_2_6FE13DC8E3A9F329 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::UI::Text* LKICJKJDPAI; // 0x60
	::UnityEngine::Transform* PEMIMCDDCNP; // 0x68
	::UnityEngine::CanvasGroup* KNPDPINAFBG; // 0x70
	::UnityEngine::CanvasGroup* GFJADDHHOII; // 0x78
	::UnityEngine::Transform* COGOPBJHLME; // 0x80
	::RPG::Client::AnimatorButton* HDPAGPIHAJG; // 0x88
	::UnityEngine::Animation* PMOJILOJEPE; // 0x90
	::RPG::Client::AnimatorButton* NBBGLIHKLDH; // 0x98
	::System::Collections::Generic::Dictionary_2<::RPG::Client::TextID, ::System::Int32>* CPKPPAAJEOJ; // 0xA0
	::System::Int32 _Index_k__BackingField; // 0xA8
	::System::Int32 JJBOPOPCOCH; // 0xAC
	::RPG::Client::TextID CHMGOIODCMK; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_GET_TRANS_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_30866F9CCFB9057B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_30866F9CCFB9057B_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_8C0F82AA8DA03496(::RPG::GameCore::SwitchChallengeBossInfoPanelState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_8C0F82AA8DA03496_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA60B5B08BA71FA9(::RPG::GameCore::AddChallengeBossInfoPanelState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_BA60B5B08BA71FA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D10D72BF522CC48B(::RPG::GameCore::RemoveChallengeBossInfoPanelState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_D10D72BF522CC48B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::RPG::Client::TextID Method_2_5633C39E0F4C80C6()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_5633C39E0F4C80C6_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FE13DC8E3A9F329_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
