#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_1_945C969C6B974032_CLEAR_OFFSET UNITYSDK_OFFSET(0x15872E20)
#define CLASS_1_945C969C6B974032__CTOR_OFFSET UNITYSDK_OFFSET(0x15872EA0)

inline static constexpr unsigned int Class_1_945C969C6B974032_TypeDefinitionIndex = 51072;

class Class_1_945C969C6B974032 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945C969C6B974032__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945C969C6B974032_CLEAR_OFFSET))(this);
	}
};
