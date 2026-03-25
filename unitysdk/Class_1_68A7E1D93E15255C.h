#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_019938BC9C50B169_6.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_68A7E1D93E15255C_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x9C5C1F0)
#define CLASS_1_68A7E1D93E15255C_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9C5C250)
#define CLASS_1_68A7E1D93E15255C_GET_EQUIPMENT3DTGAPATH_OFFSET UNITYSDK_OFFSET(0x9C5C1B0)
#define CLASS_1_68A7E1D93E15255C_GET_EQUIPMENTLIGHTMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x9C5C190)
#define CLASS_1_68A7E1D93E15255C_GET_FIRSTWORDTEXT_OFFSET UNITYSDK_OFFSET(0x9C5C270)
#define CLASS_1_68A7E1D93E15255C_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9C5C130)
#define CLASS_1_68A7E1D93E15255C_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9C5C120)
#define CLASS_1_68A7E1D93E15255C_GET_LIGHTCONECARDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9C5C210)
#define CLASS_1_68A7E1D93E15255C_GET_MIDDLEICONPATH_OFFSET UNITYSDK_OFFSET(0x9C5C150)
#define CLASS_1_68A7E1D93E15255C_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9C5C230)
#define CLASS_1_68A7E1D93E15255C_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x9C5C170)
#define CLASS_1_68A7E1D93E15255C_GET_TALKICONPATH_OFFSET UNITYSDK_OFFSET(0x9C5C1D0)
#define CLASS_1_68A7E1D93E15255C_SET_BGPATH_OFFSET UNITYSDK_OFFSET(0x9C5C200)
#define CLASS_1_68A7E1D93E15255C_SET_DESC_OFFSET UNITYSDK_OFFSET(0x9C5C260)
#define CLASS_1_68A7E1D93E15255C_SET_EQUIPMENT3DTGAPATH_OFFSET UNITYSDK_OFFSET(0x9C5C1C0)
#define CLASS_1_68A7E1D93E15255C_SET_EQUIPMENTLIGHTMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x9C5C1A0)
#define CLASS_1_68A7E1D93E15255C_SET_FIRSTWORDTEXT_OFFSET UNITYSDK_OFFSET(0x9C5C280)
#define CLASS_1_68A7E1D93E15255C_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9C5C140)
#define CLASS_1_68A7E1D93E15255C_SET_LIGHTCONECARDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9C5C220)
#define CLASS_1_68A7E1D93E15255C_SET_MIDDLEICONPATH_OFFSET UNITYSDK_OFFSET(0x9C5C160)
#define CLASS_1_68A7E1D93E15255C_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9C5C240)
#define CLASS_1_68A7E1D93E15255C_SET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x9C5C180)
#define CLASS_1_68A7E1D93E15255C_SET_TALKICONPATH_OFFSET UNITYSDK_OFFSET(0x9C5C1E0)
#define CLASS_1_68A7E1D93E15255C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C5C290)

inline static constexpr unsigned int Class_1_68A7E1D93E15255C_TypeDefinitionIndex = 41997;

class Class_1_68A7E1D93E15255C : public ::System::Object
{
public:
	::System::String* _SmallIconPath_k__BackingField; // 0x10
	::System::String* _LightConeCardBackImagePath_k__BackingField; // 0x18
	::System::String* _FirstWordText_k__BackingField; // 0x20
	::System::String* _MiddleIconPath_k__BackingField; // 0x28
	::System::String* _BgPath_k__BackingField; // 0x30
	::System::String* _Equipment3DTgaPath_k__BackingField; // 0x38
	::System::String* _EquipmentLightMaterialPath_k__BackingField; // 0x40
	::System::String* _IconPath_k__BackingField; // 0x48
	::System::String* _TalkIconPath_k__BackingField; // 0x50
	::RPG::Client::TextID _Desc_k__BackingField; // 0x58
	::Struct_2_019938BC9C50B169_6 _Identifier_k__BackingField; // 0x68
	::RPG::Client::TextID _Name_k__BackingField; // 0x70

	::System::Void _ctor(::Struct_2_019938BC9C50B169_6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_6))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_6 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::String* get_MiddleIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_MIDDLEICONPATH_OFFSET))(this);
	}

	::System::Void set_MiddleIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_MIDDLEICONPATH_OFFSET))(this, value);
	}

	::System::String* get_SmallIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_SMALLICONPATH_OFFSET))(this);
	}

	::System::Void set_SmallIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_SMALLICONPATH_OFFSET))(this, value);
	}

	::System::String* get_EquipmentLightMaterialPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_EQUIPMENTLIGHTMATERIALPATH_OFFSET))(this);
	}

	::System::Void set_EquipmentLightMaterialPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_EQUIPMENTLIGHTMATERIALPATH_OFFSET))(this, value);
	}

	::System::String* get_Equipment3DTgaPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_EQUIPMENT3DTGAPATH_OFFSET))(this);
	}

	::System::Void set_Equipment3DTgaPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_EQUIPMENT3DTGAPATH_OFFSET))(this, value);
	}

	::System::String* get_TalkIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_TALKICONPATH_OFFSET))(this);
	}

	::System::Void set_TalkIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_TALKICONPATH_OFFSET))(this, value);
	}

	::System::String* get_BgPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_BGPATH_OFFSET))(this);
	}

	::System::Void set_BgPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_BGPATH_OFFSET))(this, value);
	}

	::System::String* get_LightConeCardBackImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_LIGHTCONECARDBACKIMAGEPATH_OFFSET))(this);
	}

	::System::Void set_LightConeCardBackImagePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_LIGHTCONECARDBACKIMAGEPATH_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_NAME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_DESC_OFFSET))(this, value);
	}

	::System::String* get_FirstWordText()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_GET_FIRSTWORDTEXT_OFFSET))(this);
	}

	::System::Void set_FirstWordText(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68A7E1D93E15255C_SET_FIRSTWORDTEXT_OFFSET))(this, value);
	}
};
