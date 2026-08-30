#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/ToastHintItem_Status.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_2DBF65AB2D8DEA9B;
namespace RPG::Client { class UIContextAssetLoader; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_TOASTHINTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x197BAAB0)
#define RPG_CLIENT_TOASTHINTITEM_FADEIN_OFFSET UNITYSDK_OFFSET(0x197BA9D0)
#define RPG_CLIENT_TOASTHINTITEM_FADEOUT_OFFSET UNITYSDK_OFFSET(0x197BAA40)
#define RPG_CLIENT_TOASTHINTITEM_GET_ANIMATING_OFFSET UNITYSDK_OFFSET(0x197BAE00)
#define RPG_CLIENT_TOASTHINTITEM_GET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0x197BADC0)
#define RPG_CLIENT_TOASTHINTITEM_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x197BAD30)
#define RPG_CLIENT_TOASTHINTITEM_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x197BAD80)
#define RPG_CLIENT_TOASTHINTITEM_GET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x197BADA0)
#define RPG_CLIENT_TOASTHINTITEM_GET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0x197BADE0)
#define RPG_CLIENT_TOASTHINTITEM_HIDE_OFFSET UNITYSDK_OFFSET(0x197BA600)
#define RPG_CLIENT_TOASTHINTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x197BA490)
#define RPG_CLIENT_TOASTHINTITEM_METHOD_5_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0x197BA890)
#define RPG_CLIENT_TOASTHINTITEM_METHOD_5_3CA62E1B04B7F162_OFFSET UNITYSDK_OFFSET(0x197BAC40)
#define RPG_CLIENT_TOASTHINTITEM_METHOD_5_61CD3163D493FB64_OFFSET UNITYSDK_OFFSET(0x197BA690)
#define RPG_CLIENT_TOASTHINTITEM_METHOD_5_BD91A57DF699283A_OFFSET UNITYSDK_OFFSET(0x197BA7E0)
#define RPG_CLIENT_TOASTHINTITEM_SETPOSITIONY_OFFSET UNITYSDK_OFFSET(0x197BA570)
#define RPG_CLIENT_TOASTHINTITEM_SET_ANIMATING_OFFSET UNITYSDK_OFFSET(0x197BAE10)
#define RPG_CLIENT_TOASTHINTITEM_SET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0x197BADD0)
#define RPG_CLIENT_TOASTHINTITEM_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x197BAD90)
#define RPG_CLIENT_TOASTHINTITEM_SET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x197BADB0)
#define RPG_CLIENT_TOASTHINTITEM_SET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0x197BADF0)
#define RPG_CLIENT_TOASTHINTITEM_SHOW_OFFSET UNITYSDK_OFFSET(0x197BA8F0)
#define RPG_CLIENT_TOASTHINTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x197BAE20)

namespace RPG::Client
{
	inline static constexpr unsigned int ToastHintItem_TypeDefinitionIndex = 72868;

	class ToastHintItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single JNEEFIAEGOF; // 0x0
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		::System::Single _LifeTime_k__BackingField; // 0x18
		::System::UInt32 _PositionIndex_k__BackingField; // 0x1C
		::RPG::Client::ToastHintItem_Status _CurStatus_k__BackingField; // 0x20
		::System::Single _TimePoint_k__BackingField; // 0x24
		::System::Boolean _Animating_k__BackingField; // 0x28
		::UnityEngine::Animation* PMOJILOJEPE; // 0x30
		::UnityEngine::CanvasGroup* MCEMOKNBOOJ; // 0x38
		::UnityEngine::CanvasGroup* CNGBDCINLIK; // 0x40
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x48
		::UnityEngine::UI::Image* OLJEJJLPDFC; // 0x50
		::UnityEngine::UI::Image* PIFIGAEIGLJ; // 0x58
		::RPG::Client::UIContextAssetLoader* DLALHGJDNNO; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Class_1_2DBF65AB2D8DEA9B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2DBF65AB2D8DEA9B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Method_5_61CD3163D493FB64(::Class_1_2DBF65AB2D8DEA9B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2DBF65AB2D8DEA9B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_METHOD_5_61CD3163D493FB64_OFFSET))(this, a1);
		}

		::System::Void SetPositionY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SETPOSITIONY_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SHOW_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_FADEOUT_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_HIDE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_3CA62E1B04B7F162(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_METHOD_5_3CA62E1B04B7F162_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_BD91A57DF699283A(::System::String* a1, ::System::String* a2, ::RPG::Client::TextID a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_METHOD_5_BD91A57DF699283A_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_14045882BC5C6CA9(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_METHOD_5_14045882BC5C6CA9_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SET_LIFETIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_PositionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_POSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_PositionIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SET_POSITIONINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ToastHintItem_Status get_CurStatus()
		{
			return ((::RPG::Client::ToastHintItem_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_CURSTATUS_OFFSET))(this);
		}

		::System::Void set_CurStatus(::RPG::Client::ToastHintItem_Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToastHintItem_Status))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SET_CURSTATUS_OFFSET))(this, a1);
		}

		::System::Single get_TimePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_TIMEPOINT_OFFSET))(this);
		}

		::System::Void set_TimePoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SET_TIMEPOINT_OFFSET))(this, a1);
		}

		::System::Boolean get_Animating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_ANIMATING_OFFSET))(this);
		}

		::System::Void set_Animating(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SET_ANIMATING_OFFSET))(this, a1);
		}
	};
}
