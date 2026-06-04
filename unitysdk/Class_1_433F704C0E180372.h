#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimStatisticPlayerActionType.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_433F704C0E180372_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C003E0)
#define CLASS_1_433F704C0E180372_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18C00440)
#define CLASS_1_433F704C0E180372_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18C00490)
#define CLASS_1_433F704C0E180372__CTOR_OFFSET UNITYSDK_OFFSET(0x18C004D0)

inline static constexpr unsigned int Class_1_433F704C0E180372_TypeDefinitionIndex = 40150;

class Class_1_433F704C0E180372 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType, ::System::UInt32>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_433F704C0E180372__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_433F704C0E180372_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_433F704C0E180372_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_433F704C0E180372_ONRECYCLE_OFFSET))(this);
	}
};
