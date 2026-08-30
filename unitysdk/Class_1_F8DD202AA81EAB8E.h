#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC27E6E9012E854.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimSpikeConfig; }

#define CLASS_1_F8DD202AA81EAB8E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AA9F0)

inline static constexpr unsigned int Class_1_F8DD202AA81EAB8E_TypeDefinitionIndex = 41829;

class Class_1_F8DD202AA81EAB8E : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimSpikeConfig* EABKOHGCHFP; // 0x10
	::Struct_2_BAC27E6E9012E854 BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8DD202AA81EAB8E__CTOR_OFFSET))(this);
	}
};
