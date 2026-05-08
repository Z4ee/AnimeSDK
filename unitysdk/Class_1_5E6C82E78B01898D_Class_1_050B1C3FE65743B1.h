#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class VNoiseSettings; }

#define CLASS_1_5E6C82E78B01898D_CLASS_1_050B1C3FE65743B1_METHOD_1_063E5E5363509413_OFFSET UNITYSDK_OFFSET(0x11DDDB40)
#define CLASS_1_5E6C82E78B01898D_CLASS_1_050B1C3FE65743B1__CTOR_OFFSET UNITYSDK_OFFSET(0x11DDDB30)

inline static constexpr unsigned int Class_1_5E6C82E78B01898D_Class_1_050B1C3FE65743B1_TypeDefinitionIndex = 51989;

class Class_1_5E6C82E78B01898D_Class_1_050B1C3FE65743B1 : public ::System::Object
{
public:
	::MoleMole::Cameras::VNoiseSettings* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_CLASS_1_050B1C3FE65743B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_063E5E5363509413(::MoleMole::Cameras::VNoiseSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VNoiseSettings*))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_CLASS_1_050B1C3FE65743B1_METHOD_1_063E5E5363509413_OFFSET))(this, a1);
	}
};
