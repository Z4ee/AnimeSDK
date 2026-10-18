#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNPCBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C3F7A0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_CONNECTWITHSUBMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x3C3F7B0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x3C3F820)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D787480)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D7876C0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D787590)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1D787770)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_SET_CONNECTWITHSUBMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x3C3F7D0)
#define RPG_GAMECORE_LEVELNPCBAKEDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x3C3F830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCBakedInfo_TypeDefinitionIndex = 10715;

	struct alignas(8) LevelNPCBakedInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNPCBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNPCBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelNPCBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNPCBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNPCBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNPCBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		/*
		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> get_ConnectWithSubMissionIDList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_CONNECTWITHSUBMISSIONIDLIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_ConnectWithSubMissionIDList(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_SET_CONNECTWITHSUBMISSIONIDLIST_OFFSET))(this, a1);
		}
		*/

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCBAKEDINFO_SET_ID_OFFSET))(this, a1);
		}
	};
}
