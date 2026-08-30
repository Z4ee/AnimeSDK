#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0347D6FA9C0B3D15.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPropSpawnerConfig; }

#define CLASS_1_A48F4DC2D06F9C07_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C132AD0)
#define CLASS_1_A48F4DC2D06F9C07__CTOR_OFFSET UNITYSDK_OFFSET(0x1C132B30)

inline static constexpr unsigned int Class_1_A48F4DC2D06F9C07_TypeDefinitionIndex = 41847;

class Class_1_A48F4DC2D06F9C07 : public ::System::Object
{
public:
	::Struct_2_0347D6FA9C0B3D15 BPAPBAFOMCH; // 0x10
	::RPG::GameCore::FiveDimPropSpawnerConfig* EABKOHGCHFP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A48F4DC2D06F9C07__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A48F4DC2D06F9C07_CLEAR_OFFSET))(this);
	}
};
