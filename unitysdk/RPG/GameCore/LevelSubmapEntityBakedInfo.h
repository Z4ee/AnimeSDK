#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7B0860)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A1B460)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x7C5660)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8817F0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x3A1B470)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x3A1B4D0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x881730)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x3A1B530)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6E35A0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B08A8B0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B08AAF0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B08A9C0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1B08ABA0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x3A1B480)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x3A1B4E0)
#define RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x3A1B540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSubmapEntityBakedInfo_TypeDefinitionIndex = 10371;

	struct alignas(8) LevelSubmapEntityBakedInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelSubmapEntityBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelSubmapEntityBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelSubmapEntityBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelSubmapEntityBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelSubmapEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelSubmapEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelSubmapEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelSubmapEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelSubmapEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelSubmapEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubmapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_GET_SUBMAPID_OFFSET))(this);
		}

		::System::Void set_SubmapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSUBMAPENTITYBAKEDINFO_SET_SUBMAPID_OFFSET))(this, a1);
		}
	};
}
