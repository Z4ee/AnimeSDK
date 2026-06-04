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

#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_CREATE_OFFSET UNITYSDK_OFFSET(0xB7BD990)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_FOCUSONSPECIALDICEICON_OFFSET UNITYSDK_OFFSET(0xB7E1290)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB7E1B00)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_REMOVECOLOR_OFFSET UNITYSDK_OFFSET(0xB7E1640)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB7DFD30)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0xB7E1DD0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__BIND_OFFSET UNITYSDK_OFFSET(0xB7DE8D0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7E2140)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xB7DE8C0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__ONREMOVECOLORMATTWEENTICK_OFFSET UNITYSDK_OFFSET(0xB7E2030)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPAVAILABLEDICEVIEW_OFFSET UNITYSDK_OFFSET(0xB7E0C50)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPLEVELVIEW_OFFSET UNITYSDK_OFFSET(0xB7E03B0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPREMOVECOLORMAT_OFFSET UNITYSDK_OFFSET(0xB7E1690)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPSTARVIEW_OFFSET UNITYSDK_OFFSET(0xB7E09B0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__STARTREMOVECOLOR_OFFSET UNITYSDK_OFFSET(0xB7E1980)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex = 59477;

	class DiceCombatBigAvatarCardDisplayer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet__LEVEL_STYLE_MAP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0x6980);
		}
		static ::System::String** StaticGet__REMOVE_COLOR_MAT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0x6988);
		}
		static ::System::UInt32* StaticGet__DICE_MAX_RARE()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0x33A0);
		}
		static ::System::UInt32* StaticGet__CARD_MAX_RARE()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0x33A4);
		}
		::Il2CppArray<::UnityEngine::Transform*>* _NodeStars; // 0x10
		::UnityEngine::UI::Image* _ImgHighLevelAvatarBg; // 0x18
		::RPG::Client::LocalizedText* _TxtHp; // 0x20
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _AvatarInfo; // 0x28
		::RPG::Client::UIValueChangeAnimation* _ValueChanger; // 0x30
		::UnityEngine::UI::Image* _ImgAvatarLevelFrame2; // 0x38
		::UnityEngine::UI::Image* _ImgAvatarLevelFrame1; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceRarityIconDisplayer*>* _RareIconPanelList; // 0x48
		::UnityEngine::UI::Image* _ImgAvatarLevel1; // 0x50
		::RPG::Client::LocalizedText* _TxtAvatarName; // 0x58
		::UnityEngine::Transform* _NodeDiceValueItemContent; // 0x60
		::UnityEngine::Material* _InstRemoveColorMat; // 0x68
		::UnityEngine::UI::ScrollRect* _ScrollViewSkillDesc; // 0x70
		::RPG::Client::MonoUIColorSwitcher* _ColorSwitcher; // 0x78
		::UnityEngine::UI::Image* _ImgAvatarLevel2; // 0x80
		::UnityEngine::UI::Image* _ImgAvatarLevel3; // 0x88
		::UnityEngine::UI::Image* _ImgAvatarLevelFrame3; // 0x90
		::RPG::Client::LocalizedText* _TxtAtk; // 0x98
		::Il2CppArray<::UnityEngine::Transform*>* _NodeLevels; // 0xA0
		::UnityEngine::Material* _RemoveColorMat; // 0xA8
		::UnityEngine::Transform* _RemoveColorMatWhiteListRoot; // 0xB0
		::RPG::Client::LocalizedText* _TxtDef; // 0xB8
		::UnityEngine::Transform* _NodeLevel3; // 0xC0
		::UnityEngine::Transform* _NodeStarItemContent; // 0xC8
		::UnityEngine::Transform* _NodeLevel1; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _LoadedResources; // 0xD8
		::UnityEngine::Transform* _NodeLevel2; // 0xE0
		::Il2CppArray<::UnityEngine::UI::Image*>* _ImgAvatars; // 0xE8
		::Il2CppArray<::UnityEngine::UI::Image*>* _ImgLevelFrames; // 0xF0
		::RPG::Client::LocalizedText* _TxtSkillDesc; // 0xF8
		::UnityEngine::Transform* _Root; // 0x100
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
