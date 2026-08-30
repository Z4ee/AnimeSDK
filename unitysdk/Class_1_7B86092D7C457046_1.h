#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }

#define CLASS_1_7B86092D7C457046_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C613840)

inline static constexpr unsigned int Class_1_7B86092D7C457046_1_TypeDefinitionIndex = 41546;

class Class_1_7B86092D7C457046_1 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxel2DPlatformConfig* NHACCLJGECA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B86092D7C457046_1__CTOR_OFFSET))(this);
	}
};
