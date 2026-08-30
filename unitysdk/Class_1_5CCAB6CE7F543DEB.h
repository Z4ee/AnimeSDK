#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxelEntranceConfig; }
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }

#define CLASS_1_5CCAB6CE7F543DEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C158F90)

inline static constexpr unsigned int Class_1_5CCAB6CE7F543DEB_TypeDefinitionIndex = 41588;

class Class_1_5CCAB6CE7F543DEB : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelEntranceConfig* GCJHABKBDME; // 0x10
	::RPG::GameCore::FourRotateVoxelPortalConfig* DOCBCODGIEH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CCAB6CE7F543DEB__CTOR_OFFSET))(this);
	}
};
