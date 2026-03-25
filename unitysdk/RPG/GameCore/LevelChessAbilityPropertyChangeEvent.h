#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/ChessAbilityProperty.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace System { class Object; }

#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97F560)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97F620)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97F5D0)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GET_CHANGEPARAM_OFFSET UNITYSDK_OFFSET(0xA97F6E0)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xA97F6B0)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GET_ORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xA97F690)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0xA97F670)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GET_TARGETENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97F6D0)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA97F4D0)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_SET_CHANGEPARAM_OFFSET UNITYSDK_OFFSET(0xA97F6F0)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_SET_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xA97F6C0)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_SET_ORIGINMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0xA97F6A0)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_SET_PROPERTY_OFFSET UNITYSDK_OFFSET(0xA97F680)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA97F700)
#define RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97F710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelChessAbilityPropertyChangeEvent_TypeDefinitionIndex = 45250;

	class LevelChessAbilityPropertyChangeEvent : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Object* _ChangeParam_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _OriginModifyValue_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _ChangeValue_k__BackingField; // 0x28
		::RPG::GameCore::ChessAbilityProperty _Property_k__BackingField; // 0x30
		::System::UInt32 _EntityRuntimeID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelChessAbilityPropertyChangeEvent* Init(::System::UInt32 entityRuntimeID, ::RPG::GameCore::ChessAbilityProperty property, ::RPG::GameCore::FixPoint originModifyValue, ::RPG::GameCore::FixPoint changeValue, ::System::Object* changeParam)
		{
			return ((::RPG::GameCore::LevelChessAbilityPropertyChangeEvent*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChessAbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_INIT_OFFSET))(this, entityRuntimeID, property, originModifyValue, changeValue, changeParam);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ChessAbilityProperty get_Property()
		{
			return ((::RPG::GameCore::ChessAbilityProperty(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GET_PROPERTY_OFFSET))(this);
		}

		::System::Void set_Property(::RPG::GameCore::ChessAbilityProperty value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessAbilityProperty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_SET_PROPERTY_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_OriginModifyValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GET_ORIGINMODIFYVALUE_OFFSET))(this);
		}

		::System::Void set_OriginModifyValue(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_SET_ORIGINMODIFYVALUE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_ChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GET_CHANGEVALUE_OFFSET))(this);
		}

		::System::Void set_ChangeValue(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_SET_CHANGEVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetEntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GET_TARGETENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Object* get_ChangeParam()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_GET_CHANGEPARAM_OFFSET))(this);
		}

		::System::Void set_ChangeParam(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT_SET_CHANGEPARAM_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHESSABILITYPROPERTYCHANGEEVENT___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
