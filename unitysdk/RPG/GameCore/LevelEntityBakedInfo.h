#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7B0860)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A1A4B0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x7C5660)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8817F0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ARTREGIONIDLIST_OFFSET UNITYSDK_OFFSET(0x3A1A4C0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3A1A530)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x881730)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_NAVMAP_OFFSET UNITYSDK_OFFSET(0x3A1A590)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x3A1A600)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6E35A0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B0329F0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B032D40)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B032AE0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1B032DF0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_ARTREGIONIDLIST_OFFSET UNITYSDK_OFFSET(0x3A1A4E0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3A1A540)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_NAVMAP_OFFSET UNITYSDK_OFFSET(0x3A1A5B0)
#define RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0x3A1A610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityBakedInfo_TypeDefinitionIndex = 10354;

	struct alignas(8) LevelEntityBakedInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelEntityBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelEntityBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelEntityBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelEntityBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelEntityBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelEntityBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		/*
		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> get_ArtRegionIDList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ARTREGIONIDLIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_ArtRegionIDList(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_ARTREGIONIDLIST_OFFSET))(this, a1);
		}
		*/

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_ID_OFFSET))(this, a1);
		}

		/*
		::Struct_2_CC45B4503679E14E_48 get_NavMap()
		{
			return ((::Struct_2_CC45B4503679E14E_48(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_NAVMAP_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_NavMap(::Struct_2_CC45B4503679E14E_48 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_48))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_NAVMAP_OFFSET))(this, a1);
		}
		*/

		::System::UInt32 get_RegionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_GET_REGIONID_OFFSET))(this);
		}

		::System::Void set_RegionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBAKEDINFO_SET_REGIONID_OFFSET))(this, a1);
		}
	};
}
