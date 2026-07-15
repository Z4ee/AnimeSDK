#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_93A7657886F5B09F;
class Class_1_B0F3210ABBBBF098;
class Class_1_B3CB0277F28E93FA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_C85C4DAB350DD5FC_2_GET_BRIEFNAME_OFFSET UNITYSDK_OFFSET(0x157C8C50)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_COLLECTICONPATH_OFFSET UNITYSDK_OFFSET(0x157C8D30)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x157C8C90)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_DESC_OFFSET UNITYSDK_OFFSET(0x157C8C70)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_ICONPATHF_OFFSET UNITYSDK_OFFSET(0x157C8CD0)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x157C8CB0)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_ID_OFFSET UNITYSDK_OFFSET(0x157C8C20)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_ISACQUIRED_OFFSET UNITYSDK_OFFSET(0x157C8DF0)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_ISCOLLECTABLE_OFFSET UNITYSDK_OFFSET(0x157C8E10)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_ISINHANDBOOK_OFFSET UNITYSDK_OFFSET(0x157C8E70)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x157C8D90)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_LOWERREPLACEIDLIST_OFFSET UNITYSDK_OFFSET(0x157C8E50)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0x157C8DB0)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_NAME_OFFSET UNITYSDK_OFFSET(0x157C8C30)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x157C8DD0)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x157C8E90)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x157C8D50)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_SMALLICONPATHF_OFFSET UNITYSDK_OFFSET(0x157C8D10)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x157C8CF0)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_STORYDESC_OFFSET UNITYSDK_OFFSET(0x157C8E30)
#define CLASS_1_C85C4DAB350DD5FC_2_GET_TAG_OFFSET UNITYSDK_OFFSET(0x157C8D70)
#define CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x157C9A70)
#define CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x157C99F0)
#define CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_A8F6F688241E6DBC_1_OFFSET UNITYSDK_OFFSET(0x157C90F0)
#define CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_A8F6F688241E6DBC_2_OFFSET UNITYSDK_OFFSET(0x157C9330)
#define CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_A8F6F688241E6DBC_3_OFFSET UNITYSDK_OFFSET(0x157C9570)
#define CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_A8F6F688241E6DBC_4_OFFSET UNITYSDK_OFFSET(0x157C97B0)
#define CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x157C8EB0)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_BRIEFNAME_OFFSET UNITYSDK_OFFSET(0x157C8C60)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_COLLECTICONPATH_OFFSET UNITYSDK_OFFSET(0x157C8D40)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x157C8CA0)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_DESC_OFFSET UNITYSDK_OFFSET(0x157C8C80)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_ICONPATHF_OFFSET UNITYSDK_OFFSET(0x157C8CE0)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x157C8CC0)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_ISACQUIRED_OFFSET UNITYSDK_OFFSET(0x157C8E00)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_ISCOLLECTABLE_OFFSET UNITYSDK_OFFSET(0x157C8E20)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_ISINHANDBOOK_OFFSET UNITYSDK_OFFSET(0x157C8E80)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x157C8DA0)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_LOWERREPLACEIDLIST_OFFSET UNITYSDK_OFFSET(0x157C8E60)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_MANACOST_OFFSET UNITYSDK_OFFSET(0x157C8DC0)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_NAME_OFFSET UNITYSDK_OFFSET(0x157C8C40)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x157C8DE0)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x157C8EA0)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x157C8D60)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_SMALLICONPATHF_OFFSET UNITYSDK_OFFSET(0x157C8D20)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x157C8D00)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_STORYDESC_OFFSET UNITYSDK_OFFSET(0x157C8E40)
#define CLASS_1_C85C4DAB350DD5FC_2_SET_TAG_OFFSET UNITYSDK_OFFSET(0x157C8D80)
#define CLASS_1_C85C4DAB350DD5FC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x157C8B90)

inline static constexpr unsigned int Class_1_C85C4DAB350DD5FC_2_TypeDefinitionIndex = 76121;

class Class_1_C85C4DAB350DD5FC_2 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::String* _IconPathF_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _LowerReplaceIDList_k__BackingField; // 0x20
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_B3CB0277F28E93FA*>* _Keywords_k__BackingField; // 0x28
	::System::String* _SmallIconPath_k__BackingField; // 0x30
	::System::String* _CollectIconPath_k__BackingField; // 0x38
	::Class_1_B0F3210ABBBBF098* _Tag_k__BackingField; // 0x40
	::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParams_k__BackingField; // 0x48
	::Class_1_93A7657886F5B09F* _Rarity_k__BackingField; // 0x50
	::System::String* _SmallIconPathF_k__BackingField; // 0x58
	::System::UInt32 _Priority_k__BackingField; // 0x60
	::RPG::GameCore::FateRinHouguOwnerType _Owner_k__BackingField; // 0x64
	::RPG::Client::TextID _Name_k__BackingField; // 0x68
	::RPG::Client::TextID _StoryDesc_k__BackingField; // 0x78
	::RPG::Client::TextID _BriefName_k__BackingField; // 0x88
	::RPG::Client::TextID _Desc_k__BackingField; // 0x98
	::System::Int32 _ManaCost_k__BackingField; // 0xA8
	::System::UInt32 _ID_k__BackingField; // 0xAC
	::System::Boolean _IsInHandbook_k__BackingField; // 0xB0
	::System::Boolean _IsAcquired_k__BackingField; // 0xB1
	::System::Boolean _IsCollectable_k__BackingField; // 0xB2

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_ID_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_BriefName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_BRIEFNAME_OFFSET))(this);
	}

	::System::Void set_BriefName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_BRIEFNAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_DESC_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParams()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_DESCPARAMS_OFFSET))(this);
	}

	::System::Void set_DescParams(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_DESCPARAMS_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_IconPathF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_ICONPATHF_OFFSET))(this);
	}

	::System::Void set_IconPathF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_ICONPATHF_OFFSET))(this, a1);
	}

	::System::String* get_SmallIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_SMALLICONPATH_OFFSET))(this);
	}

	::System::Void set_SmallIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_SMALLICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_SmallIconPathF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_SMALLICONPATHF_OFFSET))(this);
	}

	::System::Void set_SmallIconPathF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_SMALLICONPATHF_OFFSET))(this, a1);
	}

	::System::String* get_CollectIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_COLLECTICONPATH_OFFSET))(this);
	}

	::System::Void set_CollectIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_COLLECTICONPATH_OFFSET))(this, a1);
	}

	::Class_1_93A7657886F5B09F* get_Rarity()
	{
		return ((::Class_1_93A7657886F5B09F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_RARITY_OFFSET))(this);
	}

	::System::Void set_Rarity(::Class_1_93A7657886F5B09F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93A7657886F5B09F*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_RARITY_OFFSET))(this, a1);
	}

	::Class_1_B0F3210ABBBBF098* get_Tag()
	{
		return ((::Class_1_B0F3210ABBBBF098*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_TAG_OFFSET))(this);
	}

	::System::Void set_Tag(::Class_1_B0F3210ABBBBF098* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B0F3210ABBBBF098*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_TAG_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_B3CB0277F28E93FA*>* get_Keywords()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_B3CB0277F28E93FA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_KEYWORDS_OFFSET))(this);
	}

	::System::Void set_Keywords(::System::Collections::Generic::IReadOnlyList_1<::Class_1_B3CB0277F28E93FA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B3CB0277F28E93FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_KEYWORDS_OFFSET))(this, a1);
	}

	::System::Int32 get_ManaCost()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_MANACOST_OFFSET))(this);
	}

	::System::Void set_ManaCost(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_MANACOST_OFFSET))(this, a1);
	}

	::RPG::GameCore::FateRinHouguOwnerType get_Owner()
	{
		return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_OWNER_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAcquired()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_ISACQUIRED_OFFSET))(this);
	}

	::System::Void set_IsAcquired(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_ISACQUIRED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsCollectable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_ISCOLLECTABLE_OFFSET))(this);
	}

	::System::Void set_IsCollectable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_ISCOLLECTABLE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_StoryDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_STORYDESC_OFFSET))(this);
	}

	::System::Void set_StoryDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_STORYDESC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_LowerReplaceIDList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_LOWERREPLACEIDLIST_OFFSET))(this);
	}

	::System::Void set_LowerReplaceIDList(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_LOWERREPLACEIDLIST_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInHandbook()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_ISINHANDBOOK_OFFSET))(this);
	}

	::System::Void set_IsInHandbook(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_ISINHANDBOOK_OFFSET))(this, a1);
	}

	::System::UInt32 get_Priority()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_SET_PRIORITY_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_A8F6F688241E6DBC_1_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_A8F6F688241E6DBC_2_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_A8F6F688241E6DBC_3_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_A8F6F688241E6DBC_4_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C85C4DAB350DD5FC_2_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
