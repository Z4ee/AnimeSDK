#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_998D665050C3A198_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A7BE430)
#define CLASS_1_998D665050C3A198_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A7BE3A0)
#define CLASS_1_998D665050C3A198_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A7BE3E0)
#define CLASS_1_998D665050C3A198__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BE480)

inline static constexpr unsigned int Class_1_998D665050C3A198_TypeDefinitionIndex = 55027;

class Class_1_998D665050C3A198 : public ::System::Object
{
public:
	::System::String* GFNAPNFFGPJ; // 0x10
	::RPG::GameCore::AttackType NFMKOFNEKLA; // 0x18
	::RPG::GameCore::AttackType HILNFHCPEAD; // 0x1C

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
