#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B78740)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B8AFE0)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F10A00)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2F3A950)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2F3A750)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_GET_POSELIST_OFFSET UNITYSDK_OFFSET(0x3B8AFF0)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x8EB60)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D1EEDF0)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D1EF030)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D1EEF00)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1D1EF0E0)
#define RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_SET_POSELIST_OFFSET UNITYSDK_OFFSET(0x3B8B010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRotatableRegionBakedInfo_TypeDefinitionIndex = 10710;

	struct alignas(8) LevelRotatableRegionBakedInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelRotatableRegionBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableRegionBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelRotatableRegionBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableRegionBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelRotatableRegionBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelRotatableRegionBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelRotatableRegionBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableRegionBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelRotatableRegionBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableRegionBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		/*
		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionPoseBakedInfo> get_PoseList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionPoseBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_GET_POSELIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_PoseList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionPoseBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionPoseBakedInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEREGIONBAKEDINFO_SET_POSELIST_OFFSET))(this, a1);
		}
		*/
	};
}
