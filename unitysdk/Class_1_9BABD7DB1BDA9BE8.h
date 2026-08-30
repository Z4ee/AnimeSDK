#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AE183AB1ABCC95C3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimLeverSwitchConfig; }

#define CLASS_1_9BABD7DB1BDA9BE8_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4A2E80)
#define CLASS_1_9BABD7DB1BDA9BE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A2F00)

inline static constexpr unsigned int Class_1_9BABD7DB1BDA9BE8_TypeDefinitionIndex = 41820;

class Class_1_9BABD7DB1BDA9BE8 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimLeverSwitchConfig* EABKOHGCHFP; // 0x10
	::Struct_2_AE183AB1ABCC95C3 BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BABD7DB1BDA9BE8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BABD7DB1BDA9BE8_CLEAR_OFFSET))(this);
	}
};
