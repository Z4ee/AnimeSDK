#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxelAnimalAttachBillboardConfig; }

#define CLASS_1_5D929842F2588AB5__CTOR_OFFSET UNITYSDK_OFFSET(0x18D300F0)

inline static constexpr unsigned int Class_1_5D929842F2588AB5_TypeDefinitionIndex = 39833;

class Class_1_5D929842F2588AB5 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelAnimalAttachBillboardConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D929842F2588AB5__CTOR_OFFSET))(this);
	}
};
