#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_35B5591E4067D7D2_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1562E4A0)
#define CLASS_1_35B5591E4067D7D2_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1562E500)
#define CLASS_1_35B5591E4067D7D2_GET_EQUIPMENT3DTGAPATH_OFFSET UNITYSDK_OFFSET(0x1562E460)
#define CLASS_1_35B5591E4067D7D2_GET_EQUIPMENTLIGHTMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x1562E440)
#define CLASS_1_35B5591E4067D7D2_GET_FIRSTWORDTEXT_OFFSET UNITYSDK_OFFSET(0x1562E520)
#define CLASS_1_35B5591E4067D7D2_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1562E3E0)
#define CLASS_1_35B5591E4067D7D2_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1562E3D0)
#define CLASS_1_35B5591E4067D7D2_GET_LIGHTCONECARDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1562E4C0)
#define CLASS_1_35B5591E4067D7D2_GET_MIDDLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1562E400)
#define CLASS_1_35B5591E4067D7D2_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1562E4E0)
#define CLASS_1_35B5591E4067D7D2_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1562E420)
#define CLASS_1_35B5591E4067D7D2_GET_TALKICONPATH_OFFSET UNITYSDK_OFFSET(0x1562E480)
#define CLASS_1_35B5591E4067D7D2_SET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1562E4B0)
#define CLASS_1_35B5591E4067D7D2_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1562E510)
#define CLASS_1_35B5591E4067D7D2_SET_EQUIPMENT3DTGAPATH_OFFSET UNITYSDK_OFFSET(0x1562E470)
#define CLASS_1_35B5591E4067D7D2_SET_EQUIPMENTLIGHTMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x1562E450)
#define CLASS_1_35B5591E4067D7D2_SET_FIRSTWORDTEXT_OFFSET UNITYSDK_OFFSET(0x1562E530)
#define CLASS_1_35B5591E4067D7D2_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1562E3F0)
#define CLASS_1_35B5591E4067D7D2_SET_LIGHTCONECARDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1562E4D0)
#define CLASS_1_35B5591E4067D7D2_SET_MIDDLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1562E410)
#define CLASS_1_35B5591E4067D7D2_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1562E4F0)
#define CLASS_1_35B5591E4067D7D2_SET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1562E430)
#define CLASS_1_35B5591E4067D7D2_SET_TALKICONPATH_OFFSET UNITYSDK_OFFSET(0x1562E490)
#define CLASS_1_35B5591E4067D7D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1562E540)

inline static constexpr unsigned int Class_1_35B5591E4067D7D2_TypeDefinitionIndex = 52256;

class Class_1_35B5591E4067D7D2 : public ::System::Object
{
public:
	::System::String* _FirstWordText_k__BackingField; // 0x10
	::System::String* _BgPath_k__BackingField; // 0x18
	::System::String* _EquipmentLightMaterialPath_k__BackingField; // 0x20
	::System::String* _LightConeCardBackImagePath_k__BackingField; // 0x28
	::System::String* _SmallIconPath_k__BackingField; // 0x30
	::System::String* _TalkIconPath_k__BackingField; // 0x38
	::System::String* _Equipment3DTgaPath_k__BackingField; // 0x40
	::System::String* _IconPath_k__BackingField; // 0x48
	::System::String* _MiddleIconPath_k__BackingField; // 0x50
	::RPG::Client::TextID _Desc_k__BackingField; // 0x58
	::RPG::Client::TextID _Name_k__BackingField; // 0x68
	::Struct_2_D645B4E0B73852B6_4 _Identifier_k__BackingField; // 0x78

	::System::Void _ctor(::Struct_2_D645B4E0B73852B6_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_4))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_D645B4E0B73852B6_4 get_Identifier()
	{
		return ((::Struct_2_D645B4E0B73852B6_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_MiddleIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_MIDDLEICONPATH_OFFSET))(this);
	}

	::System::Void set_MiddleIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_MIDDLEICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_SmallIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_SMALLICONPATH_OFFSET))(this);
	}

	::System::Void set_SmallIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_SMALLICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_EquipmentLightMaterialPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_EQUIPMENTLIGHTMATERIALPATH_OFFSET))(this);
	}

	::System::Void set_EquipmentLightMaterialPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_EQUIPMENTLIGHTMATERIALPATH_OFFSET))(this, a1);
	}

	::System::String* get_Equipment3DTgaPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_EQUIPMENT3DTGAPATH_OFFSET))(this);
	}

	::System::Void set_Equipment3DTgaPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_EQUIPMENT3DTGAPATH_OFFSET))(this, a1);
	}

	::System::String* get_TalkIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_TALKICONPATH_OFFSET))(this);
	}

	::System::Void set_TalkIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_TALKICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_BgPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_BGPATH_OFFSET))(this);
	}

	::System::Void set_BgPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_BGPATH_OFFSET))(this, a1);
	}

	::System::String* get_LightConeCardBackImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_LIGHTCONECARDBACKIMAGEPATH_OFFSET))(this);
	}

	::System::Void set_LightConeCardBackImagePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_LIGHTCONECARDBACKIMAGEPATH_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_DESC_OFFSET))(this, a1);
	}

	::System::String* get_FirstWordText()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_GET_FIRSTWORDTEXT_OFFSET))(this);
	}

	::System::Void set_FirstWordText(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35B5591E4067D7D2_SET_FIRSTWORDTEXT_OFFSET))(this, a1);
	}
};
