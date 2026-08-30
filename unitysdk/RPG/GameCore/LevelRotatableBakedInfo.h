#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x82F250)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C0BD70)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x125C0)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x860F00)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x860E40)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x12370)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x161E0)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_ROTATABLEREGIONLIST_OFFSET UNITYSDK_OFFSET(0x3C0BD80)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x6B82D0)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C1310E0)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DD56A60)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C1311E0)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1DD56BC0)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_SET_ROTATABLEREGIONLIST_OFFSET UNITYSDK_OFFSET(0x3C0BDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRotatableBakedInfo_TypeDefinitionIndex = 10709;

	struct alignas(8) LevelRotatableBakedInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelRotatableBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelRotatableBakedInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableBakedInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelRotatableBakedInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelRotatableBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelRotatableBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelRotatableBakedInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelRotatableBakedInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		/*
		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionBakedInfo> get_RotatableRegionList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionBakedInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_GET_ROTATABLEREGIONLIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_RotatableRegionList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionBakedInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelRotatableRegionBakedInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_SET_ROTATABLEREGIONLIST_OFFSET))(this, a1);
		}
		*/
	};
}
