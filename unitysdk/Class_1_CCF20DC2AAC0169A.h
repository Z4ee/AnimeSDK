#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_CCF20DC2AAC0169A_GET_AREAPOSITION_OFFSET UNITYSDK_OFFSET(0x15559EE0)
#define CLASS_1_CCF20DC2AAC0169A_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x15559E80)
#define CLASS_1_CCF20DC2AAC0169A_GET_POSE_OFFSET UNITYSDK_OFFSET(0x15559EC0)
#define CLASS_1_CCF20DC2AAC0169A_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x15559EA0)
#define CLASS_1_CCF20DC2AAC0169A_SET_AREAPOSITION_OFFSET UNITYSDK_OFFSET(0x15559EF0)
#define CLASS_1_CCF20DC2AAC0169A_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x15559E90)
#define CLASS_1_CCF20DC2AAC0169A_SET_POSE_OFFSET UNITYSDK_OFFSET(0x15559ED0)
#define CLASS_1_CCF20DC2AAC0169A_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x15559EB0)
#define CLASS_1_CCF20DC2AAC0169A__CTOR_OFFSET UNITYSDK_OFFSET(0x15559F00)

inline static constexpr unsigned int Class_1_CCF20DC2AAC0169A_TypeDefinitionIndex = 62991;

class Class_1_CCF20DC2AAC0169A : public ::System::Object
{
public:
	::RPG::Client::TrainCakeCatchExhibitController_CatGroundType _Pose_k__BackingField; // 0x10
	::System::UInt32 _AreaPosition_k__BackingField; // 0x14
	::System::UInt32 _Slot_k__BackingField; // 0x18
	::RPG::GameCore::CakeValidAreaType _AreaType_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCF20DC2AAC0169A__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::CakeValidAreaType get_AreaType()
	{
		return ((::RPG::GameCore::CakeValidAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCF20DC2AAC0169A_GET_AREATYPE_OFFSET))(this);
	}

	::System::Void set_AreaType(::RPG::GameCore::CakeValidAreaType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType))((::PBYTE)hIl2Cpp + CLASS_1_CCF20DC2AAC0169A_SET_AREATYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Slot()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCF20DC2AAC0169A_GET_SLOT_OFFSET))(this);
	}

	::System::Void set_Slot(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCF20DC2AAC0169A_SET_SLOT_OFFSET))(this, a1);
	}

	::RPG::Client::TrainCakeCatchExhibitController_CatGroundType get_Pose()
	{
		return ((::RPG::Client::TrainCakeCatchExhibitController_CatGroundType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCF20DC2AAC0169A_GET_POSE_OFFSET))(this);
	}

	::System::Void set_Pose(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + CLASS_1_CCF20DC2AAC0169A_SET_POSE_OFFSET))(this, a1);
	}

	::System::UInt32 get_AreaPosition()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCF20DC2AAC0169A_GET_AREAPOSITION_OFFSET))(this);
	}

	::System::Void set_AreaPosition(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCF20DC2AAC0169A_SET_AREAPOSITION_OFFSET))(this, a1);
	}
};
