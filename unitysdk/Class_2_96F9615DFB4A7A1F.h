#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/ChessAbilityProperty.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace System { class Object; }

#define CLASS_2_96F9615DFB4A7A1F_CLEAR_OFFSET UNITYSDK_OFFSET(0xAC405E0)
#define CLASS_2_96F9615DFB4A7A1F_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xAC40690)
#define CLASS_2_96F9615DFB4A7A1F_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xAC40650)
#define CLASS_2_96F9615DFB4A7A1F_GET_CHANGEPARAM_OFFSET UNITYSDK_OFFSET(0xAC40740)
#define CLASS_2_96F9615DFB4A7A1F_GET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xAC40720)
#define CLASS_2_96F9615DFB4A7A1F_GET_ORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xAC40700)
#define CLASS_2_96F9615DFB4A7A1F_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0xAC406E0)
#define CLASS_2_96F9615DFB4A7A1F_METHOD_2_B482A7FC5DB52470_OFFSET UNITYSDK_OFFSET(0xAC40550)
#define CLASS_2_96F9615DFB4A7A1F_SET_CHANGEPARAM_OFFSET UNITYSDK_OFFSET(0xAC40750)
#define CLASS_2_96F9615DFB4A7A1F_SET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xAC40730)
#define CLASS_2_96F9615DFB4A7A1F_SET_ORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xAC40710)
#define CLASS_2_96F9615DFB4A7A1F_SET_PROPERTY_OFFSET UNITYSDK_OFFSET(0xAC406F0)
#define CLASS_2_96F9615DFB4A7A1F__CTOR_OFFSET UNITYSDK_OFFSET(0xAC40760)
#define CLASS_2_96F9615DFB4A7A1F___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xAC40770)

inline static constexpr unsigned int Class_2_96F9615DFB4A7A1F_TypeDefinitionIndex = 45249;

class Class_2_96F9615DFB4A7A1F : public ::Class_1_9988289E7F8AA214
{
public:
	::System::Object* _ChangeParam_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _OriginModifyValue_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _ChangeValue_k__BackingField; // 0x28
	::RPG::GameCore::ChessAbilityProperty _Property_k__BackingField; // 0x30
	::System::UInt32 Field_2_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F__CTOR_OFFSET))(this);
	}

	::Class_2_96F9615DFB4A7A1F* Method_2_B482A7FC5DB52470(::System::UInt32 a1, ::RPG::GameCore::ChessAbilityProperty a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::System::Object* a5)
	{
		return ((::Class_2_96F9615DFB4A7A1F*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChessAbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_METHOD_2_B482A7FC5DB52470_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_CLEAR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_GETEVENTTYPE_OFFSET))(this);
	}

	::RPG::GameCore::ChessAbilityProperty get_Property()
	{
		return ((::RPG::GameCore::ChessAbilityProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_GET_PROPERTY_OFFSET))(this);
	}

	::System::Void set_Property(::RPG::GameCore::ChessAbilityProperty value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_SET_PROPERTY_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_OriginModifyValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_GET_ORIGINMODIFYVALUE_OFFSET))(this);
	}

	::System::Void set_OriginModifyValue(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_SET_ORIGINMODIFYVALUE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_ChangeValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_GET_CHANGEVALUE_OFFSET))(this);
	}

	::System::Void set_ChangeValue(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_SET_CHANGEVALUE_OFFSET))(this, value);
	}

	::System::Object* get_ChangeParam()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_GET_CHANGEPARAM_OFFSET))(this);
	}

	::System::Void set_ChangeParam(::System::Object* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F_SET_CHANGEPARAM_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96F9615DFB4A7A1F___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
