#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6E311A017753F787.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimSpikeConfig; }

#define CLASS_1_F8DD202AA81EAB8E__CTOR_OFFSET UNITYSDK_OFFSET(0x17F99B10)

inline static constexpr unsigned int Class_1_F8DD202AA81EAB8E_TypeDefinitionIndex = 39290;

class Class_1_F8DD202AA81EAB8E : public ::System::Object
{
public:
	::Struct_2_6E311A017753F787 Field_1_1; // 0x10
	::RPG::GameCore::FiveDimSpikeConfig* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8DD202AA81EAB8E__CTOR_OFFSET))(this);
	}
};
