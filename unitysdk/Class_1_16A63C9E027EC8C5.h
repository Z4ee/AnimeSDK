#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LightbarPresetEntry.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_16A63C9E027EC8C5_METHOD_1_B82315A5767A1BDC_OFFSET UNITYSDK_OFFSET(0x1A567950)
#define CLASS_1_16A63C9E027EC8C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A567930)

inline static constexpr unsigned int Class_1_16A63C9E027EC8C5_TypeDefinitionIndex = 86668;

class Class_1_16A63C9E027EC8C5 : public ::System::Object
{
public:
	::System::Single Field_1_4; // 0x10
	::System::Single Field_1_7; // 0x14
	::System::Single Field_1_5; // 0x18
	::System::Single Field_1_1; // 0x1C
	::System::Single Field_1_0; // 0x20
	::System::Single Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16A63C9E027EC8C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B82315A5767A1BDC(::MoleMole::LightbarPresetEntry a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LightbarPresetEntry))((::PBYTE)hIl2Cpp + CLASS_1_16A63C9E027EC8C5_METHOD_1_B82315A5767A1BDC_OFFSET))(this, a1);
	}
};
