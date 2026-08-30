#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectLayoutType.h"
#include "unitysdk/RPG/Client/Effect_MahJongAutoLayout_ItemVisibleMode.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_796E512D7EBA9D90;
namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xCDFAD30)
#define RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xCDFAE20)
#define RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xCDFAC90)
#define RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xCDFAC20)
#define RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xCDFAEE0)
#define RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xCDFAB10)
#define RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0xCDFAEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_MahJongAutoLayout_TypeDefinitionIndex = 69986;

	class Effect_MahJongAutoLayout : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean IsLayoutEnable; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* PositionOffsetLayouts; // 0x30
		::Il2CppArray<::UnityEngine::Quaternion>* RotationOffsetLayouts; // 0x38
		::RPG::Client::EffectLayoutType LayoutType; // 0x40
		::System::Boolean IsHideLayout; // 0x44
		::System::Single Scale; // 0x48
		::RPG::Client::Effect_MahJongAutoLayout* InheriteLayout; // 0x50
		::UnityEngine::Vector3 CenterOffset; // 0x58
		::System::Single HighlightDelay; // 0x64
		::RPG::Client::Effect_MahJongAutoLayout_ItemVisibleMode ItemFollowVisibleMode; // 0x68
		::System::Boolean NeedFadein; // 0x6C
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* MahJongEffectList; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* NewAddMahJongEffectList; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* RemoveMahJongEffectList; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* LastLayoutEffectsSnapShot; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* MaxMahJongEffectList; // 0x90
		::Class_2_796E512D7EBA9D90* KADDKEGNCHE; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_DESTROYPLUGIN_OFFSET))(this);
		}

		::Class_2_796E512D7EBA9D90* get_Behavior()
		{
			return ((::Class_2_796E512D7EBA9D90*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_MAHJONGAUTOLAYOUT_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
