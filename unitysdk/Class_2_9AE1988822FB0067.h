#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_2_9AE1988822FB0067_CLEAR_OFFSET UNITYSDK_OFFSET(0x180DCC70)
#define CLASS_2_9AE1988822FB0067_ONALLOC_OFFSET UNITYSDK_OFFSET(0x180DCB80)
#define CLASS_2_9AE1988822FB0067__CTOR_OFFSET UNITYSDK_OFFSET(0x180DCD20)

inline static constexpr unsigned int Class_2_9AE1988822FB0067_TypeDefinitionIndex = 40935;

class Class_2_9AE1988822FB0067 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* Field_2_0; // 0x338
	::System::Boolean Field_2_1; // 0x340
	::System::Boolean Field_2_2; // 0x341
	::System::Int32 Field_2_3; // 0x344
	::System::Int32 Field_2_4; // 0x348
	::UnityEngine::Vector3 Field_2_5; // 0x34C
	::System::Boolean Field_2_6; // 0x358
	::System::Boolean Field_2_7; // 0x359
	::System::Boolean Field_2_8; // 0x35A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AE1988822FB0067__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AE1988822FB0067_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AE1988822FB0067_CLEAR_OFFSET))(this);
	}
};
