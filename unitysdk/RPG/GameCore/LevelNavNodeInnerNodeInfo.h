#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7B0860)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A1ACD0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x7C5660)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8817F0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3A1ACE0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x881730)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x3A1AD40)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6E35A0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B07ADE0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B07B020)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B07AEF0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1B07B0D0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3A1ACF0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x3A1AD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerNodeInfo_TypeDefinitionIndex = 10363;

	struct alignas(8) LevelNavNodeInnerNodeInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNavNodeInnerNodeInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerNodeInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNavNodeInnerNodeInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerNodeInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelNavNodeInnerNodeInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInnerNodeInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNavNodeInnerNodeInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerNodeInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNavNodeInnerNodeInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerNodeInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_SET_ID_OFFSET))(this, a1);
		}

		/*
		::RPG::MVector3 get_Pos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_GET_POS_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Pos(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_SET_POS_OFFSET))(this, a1);
		}
		*/
	};
}
