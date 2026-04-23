#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/Struct_2_0158E2E99AA204F4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_AVATARSYSTEM_AVATARSKIN_GETMAPPEDPATH_OFFSET UNITYSDK_OFFSET(0x9A8ED70)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_ACTIONHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EAB0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_ADVDEFAULTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EC30)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_ADVPLAYERPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9A8EC10)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_AUDIOEVENTTAG_OFFSET UNITYSDK_OFFSET(0x9A8ECD0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARDROPOFFSET_OFFSET UNITYSDK_OFFSET(0x9A8EB90)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0x9A8E9F0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARSELFSHOWOFFSET_OFFSET UNITYSDK_OFFSET(0x9A8EC90)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_CHARACTERSKINOVERRIDECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x9A8ECB0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINBACKGROUNDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9A8EB50)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINFRONTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9A8EB70)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9A8EB30)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTININTRODUCE_OFFSET UNITYSDK_OFFSET(0x9A8EBB0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_DEFAULTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EA90)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_DEFAULTMODELPATH_OFFSET UNITYSDK_OFFSET(0x9A8EA10)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9A8E9D0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0x9A8EBF0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9A8E980)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0x9A8ECF0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_ITEMAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EC70)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_MANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EC50)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EA70)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9A8E9B0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_PLAYERCARDID_OFFSET UNITYSDK_OFFSET(0x9A8EBD0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_SIDEHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EAF0)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_SIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EA50)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_SKINICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8ED10)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9A8E990)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_UIMODELPATH_OFFSET UNITYSDK_OFFSET(0x9A8EA30)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_ULTRASKILLCUTINPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9A8EB10)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x9A8ED30)
#define RPG_AVATARSYSTEM_AVATARSKIN_GET_WAITINGHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EAD0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_ACTIONHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EAC0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_ADVDEFAULTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EC40)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_ADVPLAYERPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9A8EC20)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_AUDIOEVENTTAG_OFFSET UNITYSDK_OFFSET(0x9A8ECE0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARDROPOFFSET_OFFSET UNITYSDK_OFFSET(0x9A8EBA0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0x9A8EA00)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARSELFSHOWOFFSET_OFFSET UNITYSDK_OFFSET(0x9A8ECA0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_CHARACTERSKINOVERRIDECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x9A8ECC0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINBACKGROUNDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9A8EB60)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINFRONTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9A8EB80)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9A8EB40)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTININTRODUCE_OFFSET UNITYSDK_OFFSET(0x9A8EBC0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_DEFAULTHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EAA0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_DEFAULTMODELPATH_OFFSET UNITYSDK_OFFSET(0x9A8EA20)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_DESC_OFFSET UNITYSDK_OFFSET(0x9A8E9E0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_FREESTYLECHARACTERID_OFFSET UNITYSDK_OFFSET(0x9A8EC00)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0x9A8ED00)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_ITEMAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EC80)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_MANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EC60)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EA80)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9A8E9C0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_PLAYERCARDID_OFFSET UNITYSDK_OFFSET(0x9A8EBE0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_SIDEHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EB00)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_SIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EA60)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_SKINICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8ED20)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9A8E9A0)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_UIMODELPATH_OFFSET UNITYSDK_OFFSET(0x9A8EA40)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_ULTRASKILLCUTINPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9A8EB20)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x9A8ED40)
#define RPG_AVATARSYSTEM_AVATARSKIN_SET_WAITINGHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x9A8EAE0)
#define RPG_AVATARSYSTEM_AVATARSKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9A8ED50)

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarSkin_TypeDefinitionIndex = 47979;

	class AvatarSkin : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _AvatarDropOffset_k__BackingField; // 0x10
		::System::String* _SkinIconPath_k__BackingField; // 0x18
		::System::String* _AdvPlayerPrefabPath_k__BackingField; // 0x20
		::System::String* _CutinFrontImagePath_k__BackingField; // 0x28
		::System::String* _AudioEventTag_k__BackingField; // 0x30
		::System::String* _UIModelPath_k__BackingField; // 0x38
		::System::String* _WaitingHeadIconPath_k__BackingField; // 0x40
		::System::String* _DefaultModelPath_k__BackingField; // 0x48
		::System::String* _ItemAvatarIconPath_k__BackingField; // 0x50
		::System::String* _ActionHeadIconPath_k__BackingField; // 0x58
		::System::String* _MiniIconPath_k__BackingField; // 0x60
		::System::String* _FreeStyleCharacterID_k__BackingField; // 0x68
		::System::String* _ManikinJsonPath_k__BackingField; // 0x70
		::System::String* _SideIconPath_k__BackingField; // 0x78
		::System::String* _DefaultHeadIconPath_k__BackingField; // 0x80
		::System::String* _SideHeadIconPath_k__BackingField; // 0x88
		::Il2CppArray<::System::Single>* _AvatarSelfShowOffset_k__BackingField; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _PathMap; // 0x98
		::System::String* _CutinImagePath_k__BackingField; // 0xA0
		::System::String* _AdvDefaultHeadIconPath_k__BackingField; // 0xA8
		::System::String* _CutinBackgroundImagePath_k__BackingField; // 0xB0
		::System::String* _CharacterSkinOverrideConfigPath_k__BackingField; // 0xB8
		::System::String* _UltraSkillCutInPrefabPath_k__BackingField; // 0xC0
		::RPG::Client::TextID _Desc_k__BackingField; // 0xC8
		::System::UInt32 _PlayerCardID_k__BackingField; // 0xD8
		::System::UInt32 _IntroduceID_k__BackingField; // 0xDC
		::RPG::Client::TextID _CutinIntroduce_k__BackingField; // 0xE0
		::RPG::GameCore::AvatarSkinType _Type_k__BackingField; // 0xF0
		::Struct_2_0158E2E99AA204F4 _Identifier_k__BackingField; // 0xF4
		::RPG::Client::TextID _AvatarName_k__BackingField; // 0x108
		::RPG::Client::TextID _Name_k__BackingField; // 0x118
		::System::UInt32 _VideoID_k__BackingField; // 0x128

		::System::Void _ctor(::Struct_2_0158E2E99AA204F4 identifier, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* pathMap)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_0158E2E99AA204F4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN__CTOR_OFFSET))(this, identifier, pathMap);
		}

		::Struct_2_0158E2E99AA204F4 get_Identifier()
		{
			return ((::Struct_2_0158E2E99AA204F4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_IDENTIFIER_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkinType get_Type()
		{
			return ((::RPG::GameCore::AvatarSkinType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::AvatarSkinType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkinType))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_TYPE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_DESC_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_AvatarName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARNAME_OFFSET))(this);
		}

		::System::Void set_AvatarName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARNAME_OFFSET))(this, value);
		}

		::System::String* get_DefaultModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_DEFAULTMODELPATH_OFFSET))(this);
		}

		::System::Void set_DefaultModelPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_DEFAULTMODELPATH_OFFSET))(this, value);
		}

		::System::String* get_UIModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_UIMODELPATH_OFFSET))(this);
		}

		::System::Void set_UIModelPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_UIMODELPATH_OFFSET))(this, value);
		}

		::System::String* get_SideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_SIDEICONPATH_OFFSET))(this);
		}

		::System::Void set_SideIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_SIDEICONPATH_OFFSET))(this, value);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Void set_MiniIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_MINIICONPATH_OFFSET))(this, value);
		}

		::System::String* get_DefaultHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_DEFAULTHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_DefaultHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_DEFAULTHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ActionHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_ACTIONHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_ActionHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_ACTIONHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_WaitingHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_WAITINGHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_WaitingHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_WAITINGHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_SideHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_SIDEHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_SideHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_SIDEHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_UltraSkillCutInPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_ULTRASKILLCUTINPREFABPATH_OFFSET))(this);
		}

		::System::Void set_UltraSkillCutInPrefabPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_ULTRASKILLCUTINPREFABPATH_OFFSET))(this, value);
		}

		::System::String* get_CutinImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_CutinImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINIMAGEPATH_OFFSET))(this, value);
		}

		::System::String* get_CutinBackgroundImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINBACKGROUNDIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_CutinBackgroundImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINBACKGROUNDIMAGEPATH_OFFSET))(this, value);
		}

		::System::String* get_CutinFrontImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTINFRONTIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_CutinFrontImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTINFRONTIMAGEPATH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_AvatarDropOffset()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARDROPOFFSET_OFFSET))(this);
		}

		::System::Void set_AvatarDropOffset(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARDROPOFFSET_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_CutinIntroduce()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_CUTININTRODUCE_OFFSET))(this);
		}

		::System::Void set_CutinIntroduce(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_CUTININTRODUCE_OFFSET))(this, value);
		}

		::System::UInt32 get_PlayerCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_PLAYERCARDID_OFFSET))(this);
		}

		::System::Void set_PlayerCardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_PLAYERCARDID_OFFSET))(this, value);
		}

		::System::String* get_FreeStyleCharacterID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_FREESTYLECHARACTERID_OFFSET))(this);
		}

		::System::Void set_FreeStyleCharacterID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_FREESTYLECHARACTERID_OFFSET))(this, value);
		}

		::System::String* get_AdvPlayerPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_ADVPLAYERPREFABPATH_OFFSET))(this);
		}

		::System::Void set_AdvPlayerPrefabPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_ADVPLAYERPREFABPATH_OFFSET))(this, value);
		}

		::System::String* get_AdvDefaultHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_ADVDEFAULTHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_AdvDefaultHeadIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_ADVDEFAULTHEADICONPATH_OFFSET))(this, value);
		}

		::System::String* get_ManikinJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_MANIKINJSONPATH_OFFSET))(this);
		}

		::System::Void set_ManikinJsonPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_MANIKINJSONPATH_OFFSET))(this, value);
		}

		::System::String* get_ItemAvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_ITEMAVATARICONPATH_OFFSET))(this);
		}

		::System::Void set_ItemAvatarIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_ITEMAVATARICONPATH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_AvatarSelfShowOffset()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_AVATARSELFSHOWOFFSET_OFFSET))(this);
		}

		::System::Void set_AvatarSelfShowOffset(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_AVATARSELFSHOWOFFSET_OFFSET))(this, value);
		}

		::System::String* get_CharacterSkinOverrideConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_CHARACTERSKINOVERRIDECONFIGPATH_OFFSET))(this);
		}

		::System::Void set_CharacterSkinOverrideConfigPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_CHARACTERSKINOVERRIDECONFIGPATH_OFFSET))(this, value);
		}

		::System::String* get_AudioEventTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_AUDIOEVENTTAG_OFFSET))(this);
		}

		::System::Void set_AudioEventTag(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_AUDIOEVENTTAG_OFFSET))(this, value);
		}

		::System::UInt32 get_IntroduceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_INTRODUCEID_OFFSET))(this);
		}

		::System::Void set_IntroduceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_INTRODUCEID_OFFSET))(this, value);
		}

		::System::String* get_SkinIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_SKINICONPATH_OFFSET))(this);
		}

		::System::Void set_SkinIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_SKINICONPATH_OFFSET))(this, value);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GET_VIDEOID_OFFSET))(this);
		}

		::System::Void set_VideoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_SET_VIDEOID_OFFSET))(this, value);
		}

		::System::String* GetMappedPath(::System::String* originPath)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_AVATARSYSTEM_AVATARSKIN_GETMAPPEDPATH_OFFSET))(this, originPath);
		}
	};
}
