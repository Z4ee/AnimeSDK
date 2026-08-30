#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_26B93FFBE9FAEBB7_GET_CENTERSTYLE_OFFSET UNITYSDK_OFFSET(0x18E71D40)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0x18E71E00)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x18E71D20)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMCHANGEEFFCOLORSTR_OFFSET UNITYSDK_OFFSET(0x18E71EA0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMFILLCOLORSTR_OFFSET UNITYSDK_OFFSET(0x18E71E80)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMPREFABPATH_OFFSET UNITYSDK_OFFSET(0x18E71DA0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMPROGRESSCOLORSTR_OFFSET UNITYSDK_OFFSET(0x18E71E60)
#define CLASS_1_26B93FFBE9FAEBB7_GET_ENERGYBARTYPE_OFFSET UNITYSDK_OFFSET(0x18E71CC0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18E71D60)
#define CLASS_1_26B93FFBE9FAEBB7_GET_ID_OFFSET UNITYSDK_OFFSET(0x18E71CA0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x18E71CE0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_ISENABLESELECTEDSTATE_OFFSET UNITYSDK_OFFSET(0x18E71D00)
#define CLASS_1_26B93FFBE9FAEBB7_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x18E71DE0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_NUMCOLORSTR_OFFSET UNITYSDK_OFFSET(0x18E71E40)
#define CLASS_1_26B93FFBE9FAEBB7_GET_SHOWCOUNT_OFFSET UNITYSDK_OFFSET(0x18E71E20)
#define CLASS_1_26B93FFBE9FAEBB7_GET_SPECIALEFFPATH_OFFSET UNITYSDK_OFFSET(0x18E71DC0)
#define CLASS_1_26B93FFBE9FAEBB7_GET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x18E71D80)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CENTERSTYLE_OFFSET UNITYSDK_OFFSET(0x18E71D50)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0x18E71E10)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x18E71D30)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMCHANGEEFFCOLORSTR_OFFSET UNITYSDK_OFFSET(0x18E71EB0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMFILLCOLORSTR_OFFSET UNITYSDK_OFFSET(0x18E71E90)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMPREFABPATH_OFFSET UNITYSDK_OFFSET(0x18E71DB0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMPROGRESSCOLORSTR_OFFSET UNITYSDK_OFFSET(0x18E71E70)
#define CLASS_1_26B93FFBE9FAEBB7_SET_ENERGYBARTYPE_OFFSET UNITYSDK_OFFSET(0x18E71CD0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18E71D70)
#define CLASS_1_26B93FFBE9FAEBB7_SET_ID_OFFSET UNITYSDK_OFFSET(0x18E71CB0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x18E71CF0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_ISENABLESELECTEDSTATE_OFFSET UNITYSDK_OFFSET(0x18E71D10)
#define CLASS_1_26B93FFBE9FAEBB7_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x18E71DF0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_NUMCOLORSTR_OFFSET UNITYSDK_OFFSET(0x18E71E50)
#define CLASS_1_26B93FFBE9FAEBB7_SET_SHOWCOUNT_OFFSET UNITYSDK_OFFSET(0x18E71E30)
#define CLASS_1_26B93FFBE9FAEBB7_SET_SPECIALEFFPATH_OFFSET UNITYSDK_OFFSET(0x18E71DD0)
#define CLASS_1_26B93FFBE9FAEBB7_SET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x18E71D90)
#define CLASS_1_26B93FFBE9FAEBB7__CTOR_OFFSET UNITYSDK_OFFSET(0x18E71EC0)

inline static constexpr unsigned int Class_1_26B93FFBE9FAEBB7_TypeDefinitionIndex = 79683;

class Class_1_26B93FFBE9FAEBB7 : public ::System::Object
{
public:
	::System::String* _CustomFillColorStr_k__BackingField; // 0x10
	::System::String* _CustomChangeEffColorStr_k__BackingField; // 0x18
	::System::String* _TriggerName_k__BackingField; // 0x20
	::System::String* _NumColorStr_k__BackingField; // 0x28
	::System::String* _CustomPrefabPath_k__BackingField; // 0x30
	::System::String* _IconPath_k__BackingField; // 0x38
	::System::String* _CustomProgressColorStr_k__BackingField; // 0x40
	::System::String* _SpecialEffPath_k__BackingField; // 0x48
	::RPG::GameCore::EnergyBarState _CurState_k__BackingField; // 0x50
	::System::UInt32 _ID_k__BackingField; // 0x54
	::RPG::GameCore::FixPoint _CurCount_k__BackingField; // 0x58
	::System::Int32 _CenterStyle_k__BackingField; // 0x60
	::System::Boolean _IsActive_k__BackingField; // 0x64
	::System::Boolean _IsEnableSelectedState_k__BackingField; // 0x65
	::RPG::GameCore::FixPoint _ShowCount_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _MaxCount_k__BackingField; // 0x70
	::RPG::GameCore::MonsterEnergyBarType _EnergyBarType_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_ID_OFFSET))(this, a1);
	}

	::RPG::GameCore::MonsterEnergyBarType get_EnergyBarType()
	{
		return ((::RPG::GameCore::MonsterEnergyBarType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_ENERGYBARTYPE_OFFSET))(this);
	}

	::System::Void set_EnergyBarType(::RPG::GameCore::MonsterEnergyBarType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterEnergyBarType))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_ENERGYBARTYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEnableSelectedState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_ISENABLESELECTEDSTATE_OFFSET))(this);
	}

	::System::Void set_IsEnableSelectedState(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_ISENABLESELECTEDSTATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::EnergyBarState get_CurState()
	{
		return ((::RPG::GameCore::EnergyBarState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CURSTATE_OFFSET))(this);
	}

	::System::Void set_CurState(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CURSTATE_OFFSET))(this, a1);
	}

	::System::Int32 get_CenterStyle()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CENTERSTYLE_OFFSET))(this);
	}

	::System::Void set_CenterStyle(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CENTERSTYLE_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_TriggerName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_TRIGGERNAME_OFFSET))(this);
	}

	::System::Void set_TriggerName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_TRIGGERNAME_OFFSET))(this, a1);
	}

	::System::String* get_CustomPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMPREFABPATH_OFFSET))(this);
	}

	::System::Void set_CustomPrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMPREFABPATH_OFFSET))(this, a1);
	}

	::System::String* get_SpecialEffPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_SPECIALEFFPATH_OFFSET))(this);
	}

	::System::Void set_SpecialEffPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_SPECIALEFFPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxCount()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_MAXCOUNT_OFFSET))(this);
	}

	::System::Void set_MaxCount(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_MAXCOUNT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurCount()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CURCOUNT_OFFSET))(this);
	}

	::System::Void set_CurCount(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CURCOUNT_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ShowCount()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_SHOWCOUNT_OFFSET))(this);
	}

	::System::Void set_ShowCount(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_SHOWCOUNT_OFFSET))(this, a1);
	}

	::System::String* get_NumColorStr()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_NUMCOLORSTR_OFFSET))(this);
	}

	::System::Void set_NumColorStr(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_NUMCOLORSTR_OFFSET))(this, a1);
	}

	::System::String* get_CustomProgressColorStr()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMPROGRESSCOLORSTR_OFFSET))(this);
	}

	::System::Void set_CustomProgressColorStr(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMPROGRESSCOLORSTR_OFFSET))(this, a1);
	}

	::System::String* get_CustomFillColorStr()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMFILLCOLORSTR_OFFSET))(this);
	}

	::System::Void set_CustomFillColorStr(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMFILLCOLORSTR_OFFSET))(this, a1);
	}

	::System::String* get_CustomChangeEffColorStr()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_GET_CUSTOMCHANGEEFFCOLORSTR_OFFSET))(this);
	}

	::System::Void set_CustomChangeEffColorStr(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B93FFBE9FAEBB7_SET_CUSTOMCHANGEEFFCOLORSTR_OFFSET))(this, a1);
	}
};
