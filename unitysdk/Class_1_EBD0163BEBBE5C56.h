#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AE183AB1ABCC95C3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimLeverSwitchConfig; }

#define CLASS_1_EBD0163BEBBE5C56_CLEAR_OFFSET UNITYSDK_OFFSET(0x16935640)
#define CLASS_1_EBD0163BEBBE5C56__CTOR_OFFSET UNITYSDK_OFFSET(0x169356A0)

inline static constexpr unsigned int Class_1_EBD0163BEBBE5C56_TypeDefinitionIndex = 33486;

class Class_1_EBD0163BEBBE5C56 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimLeverSwitchConfig* Field_1_0; // 0x10
	::Struct_2_AE183AB1ABCC95C3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBD0163BEBBE5C56__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBD0163BEBBE5C56_CLEAR_OFFSET))(this);
	}
};
