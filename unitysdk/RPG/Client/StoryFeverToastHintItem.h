#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StoryFeverToastHintItem_Status.h"
#include "unitysdk/RPG/GameCore/FeverTimeToastType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_77F4DFDB808FBF65;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xC935DF0)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_FADEIN_OFFSET UNITYSDK_OFFSET(0xC935380)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_FADEOUT_OFFSET UNITYSDK_OFFSET(0xC935510)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_ANIMATING_OFFSET UNITYSDK_OFFSET(0xC936080)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0xC936040)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xC934FE0)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xC936000)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xC936020)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xC936060)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_HIDE_OFFSET UNITYSDK_OFFSET(0xC935450)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC9356A0)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_METHOD_5_0DC5168DCA324602_OFFSET UNITYSDK_OFFSET(0xC935F60)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_METHOD_5_901A4F07F0046C04_OFFSET UNITYSDK_OFFSET(0xC935CB0)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_METHOD_5_996B9749A311D0D4_OFFSET UNITYSDK_OFFSET(0xC935C60)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_SETPOSITIONY_OFFSET UNITYSDK_OFFSET(0xC934FF0)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_SET_ANIMATING_OFFSET UNITYSDK_OFFSET(0xC936090)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_SET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0xC936050)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xC936010)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_SET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xC936030)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_SET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xC936070)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM_SHOW_OFFSET UNITYSDK_OFFSET(0xC935320)
#define RPG_CLIENT_STORYFEVERTOASTHINTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC9360A0)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryFeverToastHintItem_TypeDefinitionIndex = 67373;

	class StoryFeverToastHintItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_0; // 0x0
		// static const ::System::String* Field_5_1; // 0x0
		// static const ::System::String* Field_5_2; // 0x0
		// static const ::System::String* Field_5_3; // 0x0
		// static const ::System::String* Field_5_4; // 0x0
		// static const ::System::String* Field_5_5; // 0x0
		// static const ::System::String* Field_5_6; // 0x0
		::System::Single _LifeTime_k__BackingField; // 0x18
		::System::UInt32 _PositionIndex_k__BackingField; // 0x1C
		::RPG::Client::StoryFeverToastHintItem_Status _CurStatus_k__BackingField; // 0x20
		::System::Single _TimePoint_k__BackingField; // 0x24
		::System::Boolean _Animating_k__BackingField; // 0x28
		::UnityEngine::Animation* Field_5_12; // 0x30
		::UnityEngine::Animation* Field_5_13; // 0x38
		::UnityEngine::UI::Text* Field_5_14; // 0x40
		::UnityEngine::UI::Text* Field_5_15; // 0x48
		::UnityEngine::UI::Text* Field_5_16; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Class_1_77F4DFDB808FBF65* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_77F4DFDB808FBF65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Method_5_996B9749A311D0D4(::Class_1_77F4DFDB808FBF65* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_77F4DFDB808FBF65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_METHOD_5_996B9749A311D0D4_OFFSET))(this, a1);
		}

		::System::Void SetPositionY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_SETPOSITIONY_OFFSET))(this, a1);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_FADEOUT_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_HIDE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_901A4F07F0046C04(::Class_1_77F4DFDB808FBF65* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_77F4DFDB808FBF65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_METHOD_5_901A4F07F0046C04_OFFSET))(this, a1);
		}

		::System::String* Method_5_0DC5168DCA324602(::RPG::GameCore::FeverTimeToastType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FeverTimeToastType))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_METHOD_5_0DC5168DCA324602_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_SET_LIFETIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_PositionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_POSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_PositionIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_SET_POSITIONINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::StoryFeverToastHintItem_Status get_CurStatus()
		{
			return ((::RPG::Client::StoryFeverToastHintItem_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_CURSTATUS_OFFSET))(this);
		}

		::System::Void set_CurStatus(::RPG::Client::StoryFeverToastHintItem_Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryFeverToastHintItem_Status))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_SET_CURSTATUS_OFFSET))(this, a1);
		}

		::System::Single get_TimePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_TIMEPOINT_OFFSET))(this);
		}

		::System::Void set_TimePoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_SET_TIMEPOINT_OFFSET))(this, a1);
		}

		::System::Boolean get_Animating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_GET_ANIMATING_OFFSET))(this);
		}

		::System::Void set_Animating(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYFEVERTOASTHINTITEM_SET_ANIMATING_OFFSET))(this, a1);
		}
	};
}
