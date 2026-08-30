#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRare.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CE23F1128F2D76B2_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18A06B70)
#define CLASS_1_CE23F1128F2D76B2_GET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x18A06B10)
#define CLASS_1_CE23F1128F2D76B2_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x18A06AB0)
#define CLASS_1_CE23F1128F2D76B2_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0x18A06AD0)
#define CLASS_1_CE23F1128F2D76B2_GET_LOGICJSONPATH_OFFSET UNITYSDK_OFFSET(0x18A06B90)
#define CLASS_1_CE23F1128F2D76B2_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x18A06AF0)
#define CLASS_1_CE23F1128F2D76B2_GET_RARE_OFFSET UNITYSDK_OFFSET(0x18A06B30)
#define CLASS_1_CE23F1128F2D76B2_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x18A06B50)
#define CLASS_1_CE23F1128F2D76B2_GET_VIEWJSONPATH_OFFSET UNITYSDK_OFFSET(0x18A06BB0)
#define CLASS_1_CE23F1128F2D76B2_METHOD_1_D3B7E4F5CEA0567D_OFFSET UNITYSDK_OFFSET(0x18A06920)
#define CLASS_1_CE23F1128F2D76B2_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18A06B80)
#define CLASS_1_CE23F1128F2D76B2_SET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x18A06B20)
#define CLASS_1_CE23F1128F2D76B2_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x18A06AC0)
#define CLASS_1_CE23F1128F2D76B2_SET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0x18A06AE0)
#define CLASS_1_CE23F1128F2D76B2_SET_LOGICJSONPATH_OFFSET UNITYSDK_OFFSET(0x18A06BA0)
#define CLASS_1_CE23F1128F2D76B2_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x18A06B00)
#define CLASS_1_CE23F1128F2D76B2_SET_RARE_OFFSET UNITYSDK_OFFSET(0x18A06B40)
#define CLASS_1_CE23F1128F2D76B2_SET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x18A06B60)
#define CLASS_1_CE23F1128F2D76B2_SET_VIEWJSONPATH_OFFSET UNITYSDK_OFFSET(0x18A06BC0)
#define CLASS_1_CE23F1128F2D76B2__CTOR_OFFSET UNITYSDK_OFFSET(0x18A06A20)

inline static constexpr unsigned int Class_1_CE23F1128F2D76B2_TypeDefinitionIndex = 79958;

class Class_1_CE23F1128F2D76B2 : public ::System::Object
{
public:
	::System::String* _ViewJsonPath_k__BackingField; // 0x10
	::System::String* _LogicJsonPath_k__BackingField; // 0x18
	::Il2CppArray<::System::Int32>* _ParamList_k__BackingField; // 0x20
	::Il2CppArray<::System::UInt32>* _TagList_k__BackingField; // 0x28
	::System::String* _IconPath_k__BackingField; // 0x30
	::RPG::Client::TextID _ItemDesc_k__BackingField; // 0x38
	::RPG::Client::TextID _ItemName_k__BackingField; // 0x48
	::System::UInt32 _ItemID_k__BackingField; // 0x58
	::RPG::GameCore::ChenLingFesItemRare _Rare_k__BackingField; // 0x5C

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_CE23F1128F2D76B2* Method_1_D3B7E4F5CEA0567D(::System::UInt32 a1)
	{
		return ((::Class_1_CE23F1128F2D76B2*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_METHOD_1_D3B7E4F5CEA0567D_OFFSET))(a1);
	}

	::System::UInt32 get_ItemID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_GET_ITEMID_OFFSET))(this);
	}

	::System::Void set_ItemID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_SET_ITEMID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ItemName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_GET_ITEMNAME_OFFSET))(this);
	}

	::System::Void set_ItemName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_SET_ITEMNAME_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Int32>* get_ParamList()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_SET_PARAMLIST_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ItemDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_GET_ITEMDESC_OFFSET))(this);
	}

	::System::Void set_ItemDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_SET_ITEMDESC_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingFesItemRare get_Rare()
	{
		return ((::RPG::GameCore::ChenLingFesItemRare(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_GET_RARE_OFFSET))(this);
	}

	::System::Void set_Rare(::RPG::GameCore::ChenLingFesItemRare a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesItemRare))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_SET_RARE_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_TagList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_GET_TAGLIST_OFFSET))(this);
	}

	::System::Void set_TagList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_SET_TAGLIST_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_LogicJsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_GET_LOGICJSONPATH_OFFSET))(this);
	}

	::System::Void set_LogicJsonPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_SET_LOGICJSONPATH_OFFSET))(this, a1);
	}

	::System::String* get_ViewJsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_GET_VIEWJSONPATH_OFFSET))(this);
	}

	::System::Void set_ViewJsonPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CE23F1128F2D76B2_SET_VIEWJSONPATH_OFFSET))(this, a1);
	}
};
