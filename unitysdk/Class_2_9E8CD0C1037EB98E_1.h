#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9E8CD0C1037EB98E_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B108FC0)
#define CLASS_2_9E8CD0C1037EB98E_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1B108F20)
#define CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1090B0)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_1_TypeDefinitionIndex = 40931;

class Class_2_9E8CD0C1037EB98E_1 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_2_0; // 0x338
	::System::Single Field_2_1; // 0x340
	::System::Boolean Field_2_2; // 0x344
	::System::Boolean Field_2_3; // 0x345
	::System::Boolean Field_2_4; // 0x346
	::System::Boolean Field_2_5; // 0x347
	::System::Boolean Field_2_6; // 0x348
	::System::Boolean Field_2_7; // 0x349
	::System::Boolean Field_2_8; // 0x34A
	::System::Boolean Field_2_9; // 0x34B
	::UnityEngine::Vector3 Field_2_10; // 0x34C
	::System::Int32 Field_2_11; // 0x358
	::UnityEngine::Vector3 Field_2_12; // 0x35C
	::System::Boolean Field_2_13; // 0x368
	::System::Boolean Field_2_14; // 0x369
	::UnityEngine::Vector3 Field_2_15; // 0x36C
	::System::Single Field_2_16; // 0x378

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1_CLEAR_OFFSET))(this);
	}
};
