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

#define RPG_CLIENT_TOASTHINTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xA5E2320)
#define RPG_CLIENT_TOASTHINTITEM_FADEIN_OFFSET UNITYSDK_OFFSET(0xA5E2240)
#define RPG_CLIENT_TOASTHINTITEM_FADEOUT_OFFSET UNITYSDK_OFFSET(0xA5E22B0)
#define RPG_CLIENT_TOASTHINTITEM_GET_ANIMATING_OFFSET UNITYSDK_OFFSET(0xA5E2630)
#define RPG_CLIENT_TOASTHINTITEM_GET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0xA5E25F0)
#define RPG_CLIENT_TOASTHINTITEM_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA5E25A0)
#define RPG_CLIENT_TOASTHINTITEM_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xA5E25B0)
#define RPG_CLIENT_TOASTHINTITEM_GET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xA5E25D0)
#define RPG_CLIENT_TOASTHINTITEM_GET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xA5E2610)
#define RPG_CLIENT_TOASTHINTITEM_HIDE_OFFSET UNITYSDK_OFFSET(0xA5E1D40)
#define RPG_CLIENT_TOASTHINTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA5E1BD0)
#define RPG_CLIENT_TOASTHINTITEM_METHOD_5_07BF3EF95ADEC810_OFFSET UNITYSDK_OFFSET(0xA5E2070)
#define RPG_CLIENT_TOASTHINTITEM_METHOD_5_3CA62E1B04B7F162_OFFSET UNITYSDK_OFFSET(0xA5E24B0)
#define RPG_CLIENT_TOASTHINTITEM_METHOD_5_8422ABC65E83BF12_OFFSET UNITYSDK_OFFSET(0xA5E1DD0)
#define RPG_CLIENT_TOASTHINTITEM_METHOD_5_BD91A57DF699283A_OFFSET UNITYSDK_OFFSET(0xA5E1FC0)
#define RPG_CLIENT_TOASTHINTITEM_SETPOSITIONY_OFFSET UNITYSDK_OFFSET(0xA5E1CB0)
#define RPG_CLIENT_TOASTHINTITEM_SET_ANIMATING_OFFSET UNITYSDK_OFFSET(0xA5E2640)
#define RPG_CLIENT_TOASTHINTITEM_SET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0xA5E2600)
#define RPG_CLIENT_TOASTHINTITEM_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xA5E25C0)
#define RPG_CLIENT_TOASTHINTITEM_SET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xA5E25E0)
#define RPG_CLIENT_TOASTHINTITEM_SET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xA5E2620)
#define RPG_CLIENT_TOASTHINTITEM_SHOW_OFFSET UNITYSDK_OFFSET(0xA5E2160)
#define RPG_CLIENT_TOASTHINTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E2650)

namespace RPG::Client
{
	inline static constexpr unsigned int ToastHintItem_TypeDefinitionIndex = 59804;

	class ToastHintItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_12; // 0x0
		// static const ::System::String* Field_5_13; // 0x0
		// static const ::System::String* Field_5_14; // 0x0
		::System::Single _LifeTime_k__BackingField; // 0x18
		::System::UInt32 _PositionIndex_k__BackingField; // 0x1C
		::RPG::Client::ToastHintItem_Status _CurStatus_k__BackingField; // 0x20
		::System::Single _TimePoint_k__BackingField; // 0x24
		::System::Boolean _Animating_k__BackingField; // 0x28
		::UnityEngine::Animation* Field_5_5; // 0x30
		::UnityEngine::CanvasGroup* Field_5_6; // 0x38
		::UnityEngine::CanvasGroup* Field_5_7; // 0x40
		::UnityEngine::UI::Text* Field_5_8; // 0x48
		::UnityEngine::UI::Image* Field_5_9; // 0x50
		::UnityEngine::UI::Image* Field_5_10; // 0x58
		::RPG::Client::UIContextAssetLoader* Field_5_11; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Class_1_2DBF65AB2D8DEA9B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2DBF65AB2D8DEA9B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Method_5_8422ABC65E83BF12(::Class_1_2DBF65AB2D8DEA9B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2DBF65AB2D8DEA9B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_METHOD_5_8422ABC65E83BF12_OFFSET))(this, a1);
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

		::System::Void Method_5_07BF3EF95ADEC810(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_METHOD_5_07BF3EF95ADEC810_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SET_LIFETIME_OFFSET))(this, value);
		}

		::System::UInt32 get_PositionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_POSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_PositionIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SET_POSITIONINDEX_OFFSET))(this, value);
		}

		::RPG::Client::ToastHintItem_Status get_CurStatus()
		{
			return ((::RPG::Client::ToastHintItem_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_CURSTATUS_OFFSET))(this);
		}

		::System::Void set_CurStatus(::RPG::Client::ToastHintItem_Status value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ToastHintItem_Status))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SET_CURSTATUS_OFFSET))(this, value);
		}

		::System::Single get_TimePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_TIMEPOINT_OFFSET))(this);
		}

		::System::Void set_TimePoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SET_TIMEPOINT_OFFSET))(this, value);
		}

		::System::Boolean get_Animating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_GET_ANIMATING_OFFSET))(this);
		}

		::System::Void set_Animating(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTHINTITEM_SET_ANIMATING_OFFSET))(this, value);
		}
	};
}
