#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_7385541CB3986347_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B16A860)
#define CLASS_2_7385541CB3986347_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1B16A700)
#define CLASS_2_7385541CB3986347__CTOR_OFFSET UNITYSDK_OFFSET(0x1B16A940)

inline static constexpr unsigned int Class_2_7385541CB3986347_TypeDefinitionIndex = 40934;

class Class_2_7385541CB3986347 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_2_0; // 0x338
	::RPG::PoolList_1<::System::Int32>* Field_2_1; // 0x340
	::System::Int32 Field_2_2; // 0x348
	::System::Int32 Field_2_3; // 0x34C
	::System::Int32 Field_2_4; // 0x350
	::System::Int32 Field_2_5; // 0x354
	::System::Boolean Field_2_6; // 0x358
	::System::Boolean Field_2_7; // 0x359
	::System::Boolean Field_2_8; // 0x35A
	::System::Single Field_2_9; // 0x35C
	::System::Int32 Field_2_10; // 0x360
	::RPG::GameCore::FiveDimOrthoDirection Field_2_11; // 0x364
	::UnityEngine::Vector3 Field_2_12; // 0x368
	::System::Boolean Field_2_13; // 0x374
	::System::Boolean Field_2_14; // 0x375
	::System::Single Field_2_15; // 0x378
	::UnityEngine::Vector3 Field_2_16; // 0x37C
	::System::Int32 Field_2_17; // 0x388
	::System::Int32 Field_2_18; // 0x38C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7385541CB3986347__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7385541CB3986347_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7385541CB3986347_CLEAR_OFFSET))(this);
	}
};
