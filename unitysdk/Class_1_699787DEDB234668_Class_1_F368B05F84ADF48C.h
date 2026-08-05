#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData_PanelSettle.h"
#include "unitysdk/System/Object.h"

class Class_2_7E982D325DFD55DA;

#define CLASS_1_699787DEDB234668_CLASS_1_F368B05F84ADF48C_METHOD_1_98D3DF1183E7BC24_OFFSET UNITYSDK_OFFSET(0xF0B3E60)
#define CLASS_1_699787DEDB234668_CLASS_1_F368B05F84ADF48C__CTOR_OFFSET UNITYSDK_OFFSET(0xF0B3E50)

inline static constexpr unsigned int Class_1_699787DEDB234668_Class_1_F368B05F84ADF48C_TypeDefinitionIndex = 47030;

class Class_1_699787DEDB234668_Class_1_F368B05F84ADF48C : public ::System::Object
{
public:
	::Class_2_7E982D325DFD55DA* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_F368B05F84ADF48C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_98D3DF1183E7BC24(::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_F368B05F84ADF48C_METHOD_1_98D3DF1183E7BC24_OFFSET))(this, a1);
	}
};
