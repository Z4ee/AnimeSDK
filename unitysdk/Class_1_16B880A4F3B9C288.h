#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B9E8C2EEAA5C96EC;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_16B880A4F3B9C288_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D6E510)
#define CLASS_1_16B880A4F3B9C288_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18D6E580)
#define CLASS_1_16B880A4F3B9C288_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18D6E610)
#define CLASS_1_16B880A4F3B9C288__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6E670)

inline static constexpr unsigned int Class_1_16B880A4F3B9C288_TypeDefinitionIndex = 40104;

class Class_1_16B880A4F3B9C288 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_1_0; // 0x10
	::RPG::GCFreeClosure::ClosureEvent_2<::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimLightningStateType> Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x28
	::RPG::GameCore::FiveDimLightningStateType Field_1_3; // 0x2C
	::System::Single Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x34
	::System::Single Field_1_6; // 0x40
	::UnityEngine::Vector3 Field_1_7; // 0x44
	::System::Boolean Field_1_8; // 0x50
	::UnityEngine::Vector3 Field_1_9; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16B880A4F3B9C288__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16B880A4F3B9C288_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16B880A4F3B9C288_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16B880A4F3B9C288_ONRECYCLE_OFFSET))(this);
	}
};
