#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_1_945C969C6B974032_CLEAR_OFFSET UNITYSDK_OFFSET(0x16928D60)
#define CLASS_1_945C969C6B974032__CTOR_OFFSET UNITYSDK_OFFSET(0x16928DE0)

inline static constexpr unsigned int Class_1_945C969C6B974032_TypeDefinitionIndex = 53756;

class Class_1_945C969C6B974032 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::UInt32>* FKLAGBKACGL; // 0x10
	::System::Single MOPNIDBBGHD; // 0x18
	::UnityEngine::Vector3 LJDCABIODKA; // 0x1C
	::System::Single HAOCLKBECLH; // 0x28
	::System::Boolean DAPNIBBNGPK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945C969C6B974032__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945C969C6B974032_CLEAR_OFFSET))(this);
	}
};
