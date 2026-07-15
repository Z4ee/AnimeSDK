#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
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

#define CLASS_2_6FE13DC8E3A9F329_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x186CCDB0)
#define CLASS_2_6FE13DC8E3A9F329_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x186CCF70)
#define CLASS_2_6FE13DC8E3A9F329_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x186CB770)
#define CLASS_2_6FE13DC8E3A9F329_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x186CB790)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x186CB9B0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x186CC210)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x186CC9B0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_30866F9CCFB9057B_OFFSET UNITYSDK_OFFSET(0x186CBB70)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_5633C39E0F4C80C6_OFFSET UNITYSDK_OFFSET(0x186CC4C0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_8C0F82AA8DA03496_OFFSET UNITYSDK_OFFSET(0x186CC680)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x186CC000)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x186CCC90)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_BA60B5B08BA71FA9_OFFSET UNITYSDK_OFFSET(0x186CC8A0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_D10D72BF522CC48B_OFFSET UNITYSDK_OFFSET(0x186CC930)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x186CCB10)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x186CCBD0)
#define CLASS_2_6FE13DC8E3A9F329_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x186CCA50)
#define CLASS_2_6FE13DC8E3A9F329_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x186CB780)
#define CLASS_2_6FE13DC8E3A9F329__CTOR_OFFSET UNITYSDK_OFFSET(0x186CD110)
#define CLASS_2_6FE13DC8E3A9F329__ONBIND_OFFSET UNITYSDK_OFFSET(0x186CB7D0)
#define CLASS_2_6FE13DC8E3A9F329__ONTICK_OFFSET UNITYSDK_OFFSET(0x186CC0C0)

inline static constexpr unsigned int Class_2_6FE13DC8E3A9F329_TypeDefinitionIndex = 68835;

class Class_2_6FE13DC8E3A9F329 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::CanvasGroup* Field_2_1; // 0x60
	::UnityEngine::Animation* Field_2_2; // 0x68
	::UnityEngine::UI::Text* Field_2_3; // 0x70
	::RPG::Client::AnimatorButton* Field_2_4; // 0x78
	::RPG::Client::AnimatorButton* Field_2_5; // 0x80
	::UnityEngine::Transform* Field_2_6; // 0x88
	::UnityEngine::CanvasGroup* Field_2_7; // 0x90
	::System::Collections::Generic::Dictionary_2<::RPG::Client::TextID, ::System::Int32>* Field_2_8; // 0x98
	::UnityEngine::Transform* Field_2_9; // 0xA0
	::RPG::Client::TextID Field_2_10; // 0xA8
	::System::Int32 Field_2_11; // 0xB8
	::System::Int32 _Index_k__BackingField; // 0xBC

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
