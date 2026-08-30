#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Object.h"

class Class_1_B87B48EBDCE76E87;
class Class_1_F8E6AA28A352CA0E;
namespace RPG::GameCore { class LevelPedestrianV2SpawnGroupInfo; }

#define CLASS_1_E7D4F1B8FC35E82D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15811A30)
#define CLASS_1_E7D4F1B8FC35E82D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x15811B40)
#define CLASS_1_E7D4F1B8FC35E82D_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15811B20)
#define CLASS_1_E7D4F1B8FC35E82D_METHOD_1_19801CC907806D01_OFFSET UNITYSDK_OFFSET(0x15811970)
#define CLASS_1_E7D4F1B8FC35E82D_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x158119D0)
#define CLASS_1_E7D4F1B8FC35E82D_METHOD_1_C368152C9433FA58_OFFSET UNITYSDK_OFFSET(0x15811820)
#define CLASS_1_E7D4F1B8FC35E82D_METHOD_1_E30B7275395EF847_OFFSET UNITYSDK_OFFSET(0x15811A90)
#define CLASS_1_E7D4F1B8FC35E82D_SET_INFO_OFFSET UNITYSDK_OFFSET(0x15811B50)
#define CLASS_1_E7D4F1B8FC35E82D_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15811B30)
#define CLASS_1_E7D4F1B8FC35E82D__CTOR_OFFSET UNITYSDK_OFFSET(0x15811B60)

inline static constexpr unsigned int Class_1_E7D4F1B8FC35E82D_TypeDefinitionIndex = 69299;

class Class_1_E7D4F1B8FC35E82D : public ::System::Object
{
public:
	::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* _Info_k__BackingField; // 0x10
	::Class_1_F8E6AA28A352CA0E* _Instance_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7D4F1B8FC35E82D__CTOR_OFFSET))(this);
	}

	static ::Class_1_E7D4F1B8FC35E82D* Method_1_C368152C9433FA58(::Class_1_F8E6AA28A352CA0E* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* a2)
	{
		return ((::Class_1_E7D4F1B8FC35E82D*(*)(::Class_1_F8E6AA28A352CA0E*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E7D4F1B8FC35E82D_METHOD_1_C368152C9433FA58_OFFSET))(a1, a2);
	}

	::System::Void Method_1_19801CC907806D01(::Class_1_F8E6AA28A352CA0E* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8E6AA28A352CA0E*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E7D4F1B8FC35E82D_METHOD_1_19801CC907806D01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7D4F1B8FC35E82D_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7D4F1B8FC35E82D_DISPOSE_OFFSET))(this);
	}

	::Class_1_B87B48EBDCE76E87* Method_1_E30B7275395EF847(::Struct_2_085541A9CFF64383 a1, ::RPG::Client::EPedestrianV2MotionState a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Class_1_B87B48EBDCE76E87*(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::RPG::Client::EPedestrianV2MotionState, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7D4F1B8FC35E82D_METHOD_1_E30B7275395EF847_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_F8E6AA28A352CA0E* get_Instance()
	{
		return ((::Class_1_F8E6AA28A352CA0E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7D4F1B8FC35E82D_GET_INSTANCE_OFFSET))(this);
	}

	::System::Void set_Instance(::Class_1_F8E6AA28A352CA0E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8E6AA28A352CA0E*))((::PBYTE)hIl2Cpp + CLASS_1_E7D4F1B8FC35E82D_SET_INSTANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* get_Info()
	{
		return ((::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7D4F1B8FC35E82D_GET_INFO_OFFSET))(this);
	}

	::System::Void set_Info(::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E7D4F1B8FC35E82D_SET_INFO_OFFSET))(this, a1);
	}
};
