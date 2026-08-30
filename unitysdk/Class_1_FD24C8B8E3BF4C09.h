#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxelChestHintConfig; }

#define CLASS_1_FD24C8B8E3BF4C09__CTOR_OFFSET UNITYSDK_OFFSET(0x1C36B380)

inline static constexpr unsigned int Class_1_FD24C8B8E3BF4C09_TypeDefinitionIndex = 41602;

class Class_1_FD24C8B8E3BF4C09 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelChestHintConfig* DOCBCODGIEH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD24C8B8E3BF4C09__CTOR_OFFSET))(this);
	}
};
