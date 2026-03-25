#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }

#define CLASS_1_7B86092D7C457046__CTOR_OFFSET UNITYSDK_OFFSET(0x169F0620)

inline static constexpr unsigned int Class_1_7B86092D7C457046_TypeDefinitionIndex = 33275;

class Class_1_7B86092D7C457046 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxel2DPlatformConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B86092D7C457046__CTOR_OFFSET))(this);
	}
};
