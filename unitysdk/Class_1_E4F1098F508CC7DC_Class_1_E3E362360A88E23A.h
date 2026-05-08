#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralInputFieldPopWindowController_Result.h"
#include "unitysdk/System/Object.h"

class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;
namespace System { class String; }

#define CLASS_1_E4F1098F508CC7DC_CLASS_1_E3E362360A88E23A_METHOD_1_DA38997692B3B1DD_OFFSET UNITYSDK_OFFSET(0xEA72530)
#define CLASS_1_E4F1098F508CC7DC_CLASS_1_E3E362360A88E23A__CTOR_OFFSET UNITYSDK_OFFSET(0xEA72520)

inline static constexpr unsigned int Class_1_E4F1098F508CC7DC_Class_1_E3E362360A88E23A_TypeDefinitionIndex = 47132;

class Class_1_E4F1098F508CC7DC_Class_1_E3E362360A88E23A : public ::System::Object
{
public:
	::Class_2_DF2C726EEEEC912D* Field_1_0; // 0x10
	::Class_2_D02DABCF41CDA271* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4F1098F508CC7DC_CLASS_1_E3E362360A88E23A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DA38997692B3B1DD(::MoleMole::UIGeneralInputFieldPopWindowController_Result a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralInputFieldPopWindowController_Result, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4F1098F508CC7DC_CLASS_1_E3E362360A88E23A_METHOD_1_DA38997692B3B1DD_OFFSET))(this, a1, a2);
	}
};
