#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x82F250)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B902E0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x125C0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x860F00)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_GROUPLIST_OFFSET UNITYSDK_OFFSET(0x3B902F0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3B90360)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x860E40)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_NAVMESHLARGEMONSTER_OFFSET UNITYSDK_OFFSET(0x3B903C0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x12370)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x161E0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_SUBMAPENTITYLIST_OFFSET UNITYSDK_OFFSET(0x3B90430)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6B82D0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C10FEE0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C110230)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C10FFD0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1C1102E0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_GROUPLIST_OFFSET UNITYSDK_OFFSET(0x3B90310)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3B90370)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_NAVMESHLARGEMONSTER_OFFSET UNITYSDK_OFFSET(0x3B903E0)
#define RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_SUBMAPENTITYLIST_OFFSET UNITYSDK_OFFSET(0x3B90450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionBakedInfo_TypeDefinitionIndex = 10694;

	struct alignas(8) LevelDimensionBakedInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelDimensionBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelDimensionBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelDimensionBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelDimensionBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelDimensionBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelDimensionBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelDimensionBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelDimensionBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelDimensionBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelDimensionBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		/*
		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::Struct_2_CC45B4503679E14E_48> get_GroupList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::Struct_2_CC45B4503679E14E_48>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_GROUPLIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_GroupList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::Struct_2_CC45B4503679E14E_48> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::Struct_2_CC45B4503679E14E_48>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_GROUPLIST_OFFSET))(this, a1);
		}
		*/

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_ID_OFFSET))(this, a1);
		}

		/*
		::Struct_2_CC45B4503679E14E_6 get_NavMeshLargeMonster()
		{
			return ((::Struct_2_CC45B4503679E14E_6(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_NAVMESHLARGEMONSTER_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_NavMeshLargeMonster(::Struct_2_CC45B4503679E14E_6 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_NAVMESHLARGEMONSTER_OFFSET))(this, a1);
		}
		*/

		/*
		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelSubmapEntityBakedInfo> get_SubmapEntityList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelSubmapEntityBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_GET_SUBMAPENTITYLIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_SubmapEntityList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelSubmapEntityBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelSubmapEntityBakedInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONBAKEDINFO_SET_SUBMAPENTITYLIST_OFFSET))(this, a1);
		}
		*/
	};
}
