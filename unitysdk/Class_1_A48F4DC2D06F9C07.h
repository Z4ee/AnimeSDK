#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0347D6FA9C0B3D15.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPropSpawnerConfig; }

#define CLASS_1_A48F4DC2D06F9C07_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C849EB0)
#define CLASS_1_A48F4DC2D06F9C07__CTOR_OFFSET UNITYSDK_OFFSET(0x1C849F10)

inline static constexpr unsigned int Class_1_A48F4DC2D06F9C07_TypeDefinitionIndex = 43489;

class Class_1_A48F4DC2D06F9C07 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPropSpawnerConfig* EABKOHGCHFP; // 0x10
	::Struct_2_0347D6FA9C0B3D15 BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A48F4DC2D06F9C07__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A48F4DC2D06F9C07_CLEAR_OFFSET))(this);
	}
};
