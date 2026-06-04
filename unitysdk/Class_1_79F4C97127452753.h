#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimCustomLoadConfig; }
namespace RPG::GameCore { class FiveDimEntityVarConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }

#define CLASS_1_79F4C97127452753_CLEAR_OFFSET UNITYSDK_OFFSET(0x18CE5230)
#define CLASS_1_79F4C97127452753_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18CE52B0)
#define CLASS_1_79F4C97127452753_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18CE5340)
#define CLASS_1_79F4C97127452753__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE5380)

inline static constexpr unsigned int Class_1_79F4C97127452753_TypeDefinitionIndex = 39948;

class Class_1_79F4C97127452753 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimCustomLoadConfig* Field_1_0; // 0x10
	::RPG::GameCore::LittleGameEntityConfig* Field_1_1; // 0x18
	::RPG::GameCore::FiveDimEntityVarConfig* Field_1_2; // 0x20
	::RPG::PoolList_1<::System::UInt32>* Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x34
	::System::Int32 Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x3C
	::System::Boolean Field_1_8; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F4C97127452753__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F4C97127452753_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F4C97127452753_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F4C97127452753_ONRECYCLE_OFFSET))(this);
	}
};
