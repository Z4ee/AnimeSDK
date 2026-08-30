#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DiceCombatDiceRarityIconDisplayer; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_CREATE_OFFSET UNITYSDK_OFFSET(0x1B8C6090)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_FOCUSONSPECIALDICEICON_OFFSET UNITYSDK_OFFSET(0x1B8C9040)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8C9840)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_REMOVECOLOR_OFFSET UNITYSDK_OFFSET(0x1B8C93D0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B8C75A0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0x1B8C9B20)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__BIND_OFFSET UNITYSDK_OFFSET(0x1B8C6150)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8C9F40)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C6140)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__ONREMOVECOLORMATTWEENTICK_OFFSET UNITYSDK_OFFSET(0x1B8C9D80)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPAVAILABLEDICEVIEW_OFFSET UNITYSDK_OFFSET(0x1B8C8890)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPLEVELVIEW_OFFSET UNITYSDK_OFFSET(0x1B8C7E90)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPREMOVECOLORMAT_OFFSET UNITYSDK_OFFSET(0x1B8C9420)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPSTARVIEW_OFFSET UNITYSDK_OFFSET(0x1B8C85F0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__STARTREMOVECOLOR_OFFSET UNITYSDK_OFFSET(0x1B8C96B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex = 63614;

	class DiceCombatBigAvatarCardDisplayer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet__LEVEL_STYLE_MAP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0x5A7B0);
		}
		static ::System::String** StaticGet__REMOVE_COLOR_MAT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0x5A7B8);
		}
		static ::System::UInt32* StaticGet__DICE_MAX_RARE()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0x12620);
		}
		static ::System::UInt32* StaticGet__CARD_MAX_RARE()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0x12624);
		}
		::UnityEngine::UI::Image* _ImgAvatarLevelFrame1; // 0x10
		::RPG::Client::LocalizedText* _TxtHp; // 0x18
		::UnityEngine::Transform* _NodeLevel3; // 0x20
		::UnityEngine::Transform* _RemoveColorMatWhiteListRoot; // 0x28
		::RPG::Client::MonoUIColorSwitcher* _ColorSwitcher; // 0x30
		::RPG::Client::LocalizedText* _TxtAtk; // 0x38
		::UnityEngine::UI::Image* _ImgAvatarLevel1; // 0x40
		::UnityEngine::Transform* _Root; // 0x48
		::UnityEngine::UI::Image* _ImgAvatarLevelFrame3; // 0x50
		::UnityEngine::Transform* _NodeLevel1; // 0x58
		::Il2CppArray<::UnityEngine::UI::Image*>* _ImgAvatars; // 0x60
		::UnityEngine::Transform* _NodeStarItemContent; // 0x68
		::UnityEngine::Transform* _NodeLevel2; // 0x70
		::Il2CppArray<::UnityEngine::Transform*>* _NodeStars; // 0x78
		::RPG::Client::LocalizedText* _TxtAvatarName; // 0x80
		::UnityEngine::UI::Image* _ImgHighLevelAvatarBg; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceRarityIconDisplayer*>* _RareIconPanelList; // 0x90
		::Il2CppArray<::UnityEngine::Transform*>* _NodeLevels; // 0x98
		::UnityEngine::Material* _RemoveColorMat; // 0xA0
		::UnityEngine::UI::Image* _ImgAvatarLevel3; // 0xA8
		::RPG::Client::UIValueChangeAnimation* _ValueChanger; // 0xB0
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _AvatarInfo; // 0xB8
		::UnityEngine::UI::Image* _ImgAvatarLevelFrame2; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _LoadedResources; // 0xC8
		::RPG::Client::LocalizedText* _TxtDef; // 0xD0
		::UnityEngine::Transform* _NodeDiceValueItemContent; // 0xD8
		::Il2CppArray<::UnityEngine::UI::Image*>* _ImgLevelFrames; // 0xE0
		::RPG::Client::LocalizedText* _TxtSkillDesc; // 0xE8
		::UnityEngine::Material* _InstRemoveColorMat; // 0xF0
		::UnityEngine::UI::ScrollRect* _ScrollViewSkillDesc; // 0xF8
		::UnityEngine::UI::Image* _ImgAvatarLevel2; // 0x100
		::System::UInt32 _TargetAvatarLevel; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::DiceCombatBigAvatarCardDisplayer* Create(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::DiceCombatBigAvatarCardDisplayer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_CREATE_OFFSET))(a1);
		}

		::System::Void SetUpView(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_SETUPVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void FocusOnSpecialDiceIcon(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_FOCUSONSPECIALDICEICON_OFFSET))(this, a1);
		}

		::System::Void RemoveColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_REMOVECOLOR_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_ONDISPOSE_OFFSET))(this);
		}

		::System::Void _SetupLevelView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPLEVELVIEW_OFFSET))(this);
		}

		::System::Void _SetupStarView(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPSTARVIEW_OFFSET))(this, a1);
		}

		::System::Void _SetupAvailableDiceView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPAVAILABLEDICEVIEW_OFFSET))(this);
		}

		::System::Void _OnRemoveColorMatTweenTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__ONREMOVECOLORMATTWEENTICK_OFFSET))(this, a1);
		}

		::System::Void _StartRemoveColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__STARTREMOVECOLOR_OFFSET))(this);
		}

		::System::Void _SetupRemoveColorMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPREMOVECOLORMAT_OFFSET))(this);
		}

		::System::Void _AsyncLoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__ASYNCLOADSPRITETO_OFFSET))(this, a1, a2);
		}

		::System::Void _Bind(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__BIND_OFFSET))(this, a1);
		}
	};
}
