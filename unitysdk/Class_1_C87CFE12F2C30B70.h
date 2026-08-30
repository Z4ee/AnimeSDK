#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelCameraDirectionMask.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C87CFE12F2C30B70__CTOR_OFFSET UNITYSDK_OFFSET(0x1C133FB0)

inline static constexpr unsigned int Class_1_C87CFE12F2C30B70_TypeDefinitionIndex = 41567;

class Class_1_C87CFE12F2C30B70 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelCameraDirectionMask CFFABBFHHMJ; // 0x10
	::System::Boolean NIOHOMDPPKA; // 0x14
	::RPG::GameCore::FourRotateVoxelCameraDirectionMask IPMHGBLDCHO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C87CFE12F2C30B70__CTOR_OFFSET))(this);
	}
};
