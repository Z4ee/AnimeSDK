#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNAVGRAPHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7B0860)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A1A780)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x7C5660)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8817F0)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x881730)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_GET_NAVNODELIST_OFFSET UNITYSDK_OFFSET(0x3A1A790)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6E35A0)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B077BF0)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B077F40)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B077CE0)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1B077FF0)
#define RPG_GAMECORE_LEVELNAVGRAPHINFO_SET_NAVNODELIST_OFFSET UNITYSDK_OFFSET(0x3A1A7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavGraphInfo_TypeDefinitionIndex = 10359;

	struct alignas(8) LevelNavGraphInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNavGraphInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavGraphInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNavGraphInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavGraphInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelNavGraphInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNavGraphInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNavGraphInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		/*
		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInfo> get_NavNodeList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_GET_NAVNODELIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_NavNodeList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVGRAPHINFO_SET_NAVNODELIST_OFFSET))(this, a1);
		}
		*/
	};
}
