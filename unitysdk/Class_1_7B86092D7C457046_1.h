#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }

#define CLASS_1_7B86092D7C457046_1__CTOR_OFFSET UNITYSDK_OFFSET(0x169F2610)

inline static constexpr unsigned int Class_1_7B86092D7C457046_1_TypeDefinitionIndex = 33241;

class Class_1_7B86092D7C457046_1 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxel2DPlatformConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B86092D7C457046_1__CTOR_OFFSET))(this);
	}
};
