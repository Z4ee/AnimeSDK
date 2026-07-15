#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelRegionConnectivityType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7B0860)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A1AF20)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x7C5660)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8817F0)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_CONDITIONINFOS_OFFSET UNITYSDK_OFFSET(0x3A1AF90)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_CONNECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x3A1B060)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_CONNECTPOINTKEY_OFFSET UNITYSDK_OFFSET(0x3A1AFF0)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x3A1B0C0)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_FROMNODEID_OFFSET UNITYSDK_OFFSET(0x3A1B130)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_HASCONNECTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x3A1AF30)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x881730)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_TONODEID_OFFSET UNITYSDK_OFFSET(0x3A1B190)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6E35A0)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B07C290)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B07C5E0)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B07C380)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1B07C690)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_CONDITIONINFOS_OFFSET UNITYSDK_OFFSET(0x3A1AFA0)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_CONNECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x3A1B070)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_CONNECTPOINTKEY_OFFSET UNITYSDK_OFFSET(0x3A1B010)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x3A1B0E0)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_FROMNODEID_OFFSET UNITYSDK_OFFSET(0x3A1B140)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_HASCONNECTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x3A1AF40)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_TONODEID_OFFSET UNITYSDK_OFFSET(0x3A1B1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeTransitInfo_TypeDefinitionIndex = 10365;

	struct alignas(8) LevelNavNodeTransitInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNavNodeTransitInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeTransitInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNavNodeTransitInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeTransitInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelNavNodeTransitInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeTransitInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNavNodeTransitInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeTransitInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNavNodeTransitInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeTransitInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		::System::Boolean get_HasConnectWayPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_HASCONNECTWAYPOINT_OFFSET))(this);
		}

		::System::Void set_HasConnectWayPoint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_HASCONNECTWAYPOINT_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNavNodeConditionInfos* get_ConditionInfos()
		{
			return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_CONDITIONINFOS_OFFSET))(this);
		}

		::System::Void set_ConditionInfos(::RPG::GameCore::LevelNavNodeConditionInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavNodeConditionInfos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_CONDITIONINFOS_OFFSET))(this, a1);
		}

		/*
		::Struct_2_CC45B4503679E14E_6 get_ConnectPointKey()
		{
			return ((::Struct_2_CC45B4503679E14E_6(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_CONNECTPOINTKEY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_ConnectPointKey(::Struct_2_CC45B4503679E14E_6 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_CONNECTPOINTKEY_OFFSET))(this, a1);
		}
		*/

		::RPG::GameCore::LevelRegionConnectivityType get_ConnectionType()
		{
			return ((::RPG::GameCore::LevelRegionConnectivityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_CONNECTIONTYPE_OFFSET))(this);
		}

		::System::Void set_ConnectionType(::RPG::GameCore::LevelRegionConnectivityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionConnectivityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_CONNECTIONTYPE_OFFSET))(this, a1);
		}

		/*
		::Struct_2_CC45B4503679E14E_6 get_Destination()
		{
			return ((::Struct_2_CC45B4503679E14E_6(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_DESTINATION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Destination(::Struct_2_CC45B4503679E14E_6 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_DESTINATION_OFFSET))(this, a1);
		}
		*/

		::System::UInt32 get_FromNodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_FROMNODEID_OFFSET))(this);
		}

		::System::Void set_FromNodeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_FROMNODEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ToNodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_GET_TONODEID_OFFSET))(this);
		}

		::System::Void set_ToNodeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_SET_TONODEID_OFFSET))(this, a1);
		}
	};
}
