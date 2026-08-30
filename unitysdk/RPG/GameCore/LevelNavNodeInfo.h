#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNAVNODEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x82F250)
#define RPG_GAMECORE_LEVELNAVNODEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B90830)
#define RPG_GAMECORE_LEVELNAVNODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x125C0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x860F00)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3B90840)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_INNERGRAPH_OFFSET UNITYSDK_OFFSET(0x3B908A0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x860E40)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x12370)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x161E0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x3B90910)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_TRANSITLIST_OFFSET UNITYSDK_OFFSET(0x3B90970)
#define RPG_GAMECORE_LEVELNAVNODEINFO_GET_VOLUMELIST_OFFSET UNITYSDK_OFFSET(0x3B909E0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6B82D0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C11FBB0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C11FF00)
#define RPG_GAMECORE_LEVELNAVNODEINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C11FCA0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1C11FFB0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3B90850)
#define RPG_GAMECORE_LEVELNAVNODEINFO_SET_INNERGRAPH_OFFSET UNITYSDK_OFFSET(0x3B908C0)
#define RPG_GAMECORE_LEVELNAVNODEINFO_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x3B90920)
#define RPG_GAMECORE_LEVELNAVNODEINFO_SET_TRANSITLIST_OFFSET UNITYSDK_OFFSET(0x3B90990)
#define RPG_GAMECORE_LEVELNAVNODEINFO_SET_VOLUMELIST_OFFSET UNITYSDK_OFFSET(0x3B909F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInfo_TypeDefinitionIndex = 10701;

	struct alignas(8) LevelNavNodeInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNavNodeInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNavNodeInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelNavNodeInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNavNodeInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNavNodeInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_SET_ID_OFFSET))(this, a1);
		}

		/*
		::RPG::GameCore::LevelNavNodeInnerGraphInfo get_InnerGraph()
		{
			return ((::RPG::GameCore::LevelNavNodeInnerGraphInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_INNERGRAPH_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InnerGraph(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInnerGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_SET_INNERGRAPH_OFFSET))(this, a1);
		}
		*/

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_SET_PRIORITY_OFFSET))(this, a1);
		}

		/*
		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeTransitInfo> get_TransitList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeTransitInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_TRANSITLIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TransitList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeTransitInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeTransitInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_SET_TRANSITLIST_OFFSET))(this, a1);
		}
		*/

		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* get_VolumeList()
		{
			return ((::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_GET_VOLUMELIST_OFFSET))(this);
		}

		::System::Void set_VolumeList(::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINFO_SET_VOLUMELIST_OFFSET))(this, a1);
		}
	};
}
