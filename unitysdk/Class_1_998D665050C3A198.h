#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_998D665050C3A198_CLEAR_OFFSET UNITYSDK_OFFSET(0xB276340)
#define CLASS_1_998D665050C3A198_ONALLOC_OFFSET UNITYSDK_OFFSET(0xB2762B0)
#define CLASS_1_998D665050C3A198_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xB2762F0)
#define CLASS_1_998D665050C3A198__CTOR_OFFSET UNITYSDK_OFFSET(0xB276390)

inline static constexpr unsigned int Class_1_998D665050C3A198_TypeDefinitionIndex = 43878;

class Class_1_998D665050C3A198 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::RPG::GameCore::AttackType Field_1_1; // 0x18
	::RPG::GameCore::AttackType Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_998D665050C3A198__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_998D665050C3A198_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_998D665050C3A198_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_998D665050C3A198_CLEAR_OFFSET))(this);
	}
};
