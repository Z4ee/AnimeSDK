#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_A17F0CCA3D2B239E_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1A7F3DE0)
#define CLASS_1_A17F0CCA3D2B239E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7F2FC0)
#define CLASS_1_A17F0CCA3D2B239E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7F3CC0)
#define CLASS_1_A17F0CCA3D2B239E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7F34B0)
#define CLASS_1_A17F0CCA3D2B239E_GET_BATTLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1A7F2710)
#define CLASS_1_A17F0CCA3D2B239E_GET_CARDOWNERMARKERICONPATH_OFFSET UNITYSDK_OFFSET(0x1A7F26D0)
#define CLASS_1_A17F0CCA3D2B239E_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1A7F2640)
#define CLASS_1_A17F0CCA3D2B239E_GET_HANDBOOKCARDTABICONPATH_OFFSET UNITYSDK_OFFSET(0x1A7F26F0)
#define CLASS_1_A17F0CCA3D2B239E_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1A7F2670)
#define CLASS_1_A17F0CCA3D2B239E_GET_SOURCEAVATARID_OFFSET UNITYSDK_OFFSET(0x1A7F2690)
#define CLASS_1_A17F0CCA3D2B239E_GET_SWITCHDAYTALKICONPATH_OFFSET UNITYSDK_OFFSET(0x1A7F2730)
#define CLASS_1_A17F0CCA3D2B239E_GET_SYSTEMFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x1A7F26B0)
#define CLASS_1_A17F0CCA3D2B239E_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0x1A7F2750)
#define CLASS_1_A17F0CCA3D2B239E_GET_ULTRABTNEFFECTPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A7F2770)
#define CLASS_1_A17F0CCA3D2B239E_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A7F2FA0)
#define CLASS_1_A17F0CCA3D2B239E_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A7F2F70)
#define CLASS_1_A17F0CCA3D2B239E_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1A7F2950)
#define CLASS_1_A17F0CCA3D2B239E_SET_BATTLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1A7F2720)
#define CLASS_1_A17F0CCA3D2B239E_SET_CARDOWNERMARKERICONPATH_OFFSET UNITYSDK_OFFSET(0x1A7F26E0)
#define CLASS_1_A17F0CCA3D2B239E_SET_HANDBOOKCARDTABICONPATH_OFFSET UNITYSDK_OFFSET(0x1A7F2700)
#define CLASS_1_A17F0CCA3D2B239E_SET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1A7F2680)
#define CLASS_1_A17F0CCA3D2B239E_SET_SOURCEAVATARID_OFFSET UNITYSDK_OFFSET(0x1A7F26A0)
#define CLASS_1_A17F0CCA3D2B239E_SET_SWITCHDAYTALKICONPATH_OFFSET UNITYSDK_OFFSET(0x1A7F2740)
#define CLASS_1_A17F0CCA3D2B239E_SET_SYSTEMFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x1A7F26C0)
#define CLASS_1_A17F0CCA3D2B239E_SET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0x1A7F2760)
#define CLASS_1_A17F0CCA3D2B239E_SET_ULTRABTNEFFECTPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A7F2780)
#define CLASS_1_A17F0CCA3D2B239E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7F2790)
#define CLASS_1_A17F0CCA3D2B239E__CLONE___OFFSET UNITYSDK_OFFSET(0x1A7F3D20)
#define CLASS_1_A17F0CCA3D2B239E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7F3DA0)
#define CLASS_1_A17F0CCA3D2B239E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F2600)

inline static constexpr unsigned int Class_1_A17F0CCA3D2B239E_TypeDefinitionIndex = 79880;

class Class_1_A17F0CCA3D2B239E : public ::System::Object
{
public:
	::System::String* _UltraBtnEffectPrefabPath_k__BackingField; // 0x10
	::System::String* _SystemFigurePath_k__BackingField; // 0x18
	::System::String* _HandbookCardTabIconPath_k__BackingField; // 0x20
	::System::String* _BattleIconPath_k__BackingField; // 0x28
	::System::String* _CardOwnerMarkerIconPath_k__BackingField; // 0x30
	::System::String* _UIColorState_k__BackingField; // 0x38
	::System::String* _SwitchDayTalkIconPath_k__BackingField; // 0x40
	::System::UInt32 _SourceAvatarID_k__BackingField; // 0x48
	::RPG::GameCore::FateRinHouguOwnerType _OwnerType_k__BackingField; // 0x4C

	::System::Void _ctor(::RPG::GameCore::FateRinHouguOwnerType a1, ::System::UInt32 a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::String* a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::System::UInt32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void _ctor_1(::Class_1_A17F0CCA3D2B239E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A17F0CCA3D2B239E*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::RPG::GameCore::FateRinHouguOwnerType get_OwnerType()
	{
		return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GET_OWNERTYPE_OFFSET))(this);
	}

	::System::Void set_OwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_SET_OWNERTYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_SourceAvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GET_SOURCEAVATARID_OFFSET))(this);
	}

	::System::Void set_SourceAvatarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_SET_SOURCEAVATARID_OFFSET))(this, a1);
	}

	::System::String* get_SystemFigurePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GET_SYSTEMFIGUREPATH_OFFSET))(this);
	}

	::System::Void set_SystemFigurePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_SET_SYSTEMFIGUREPATH_OFFSET))(this, a1);
	}

	::System::String* get_CardOwnerMarkerIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GET_CARDOWNERMARKERICONPATH_OFFSET))(this);
	}

	::System::Void set_CardOwnerMarkerIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_SET_CARDOWNERMARKERICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_HandbookCardTabIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GET_HANDBOOKCARDTABICONPATH_OFFSET))(this);
	}

	::System::Void set_HandbookCardTabIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_SET_HANDBOOKCARDTABICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_BattleIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GET_BATTLEICONPATH_OFFSET))(this);
	}

	::System::Void set_BattleIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_SET_BATTLEICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_SwitchDayTalkIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GET_SWITCHDAYTALKICONPATH_OFFSET))(this);
	}

	::System::Void set_SwitchDayTalkIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_SET_SWITCHDAYTALKICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_UIColorState()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GET_UICOLORSTATE_OFFSET))(this);
	}

	::System::Void set_UIColorState(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_SET_UICOLORSTATE_OFFSET))(this, a1);
	}

	::System::String* get_UltraBtnEffectPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GET_ULTRABTNEFFECTPREFABPATH_OFFSET))(this);
	}

	::System::Void set_UltraBtnEffectPrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_SET_ULTRABTNEFFECTPREFABPATH_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_A17F0CCA3D2B239E* a1, ::Class_1_A17F0CCA3D2B239E* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A17F0CCA3D2B239E*, ::Class_1_A17F0CCA3D2B239E*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_A17F0CCA3D2B239E* a1, ::Class_1_A17F0CCA3D2B239E* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A17F0CCA3D2B239E*, ::Class_1_A17F0CCA3D2B239E*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A17F0CCA3D2B239E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A17F0CCA3D2B239E*))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_A17F0CCA3D2B239E* _Clone__()
	{
		return ((::Class_1_A17F0CCA3D2B239E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::RPG::GameCore::FateRinHouguOwnerType& a1, ::System::UInt32& a2, ::System::String*& a3, ::System::String*& a4, ::System::String*& a5, ::System::String*& a6, ::System::String*& a7, ::System::String*& a8, ::System::String*& a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType&, ::System::UInt32&, ::System::String*&, ::System::String*&, ::System::String*&, ::System::String*&, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_A17F0CCA3D2B239E_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
};
