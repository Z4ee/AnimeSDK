#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxelEntranceConfig; }
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }

#define CLASS_1_5CCAB6CE7F543DEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1808B460)

inline static constexpr unsigned int Class_1_5CCAB6CE7F543DEB_TypeDefinitionIndex = 39059;

class Class_1_5CCAB6CE7F543DEB : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelPortalConfig* Field_1_0; // 0x10
	::RPG::GameCore::FourRotateVoxelEntranceConfig* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CCAB6CE7F543DEB__CTOR_OFFSET))(this);
	}
};
