#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_477;
class Class_2_20EEA282526CCBDC;
namespace MoleMole { class ScrollViewItemWidgetController; }

#define CLASS_2_20EEA282526CCBDC_CLASS_1_028B7BEA92475AC3_METHOD_1_25A884AE2939A887_1_OFFSET UNITYSDK_OFFSET(0x13CE7FC0)
#define CLASS_2_20EEA282526CCBDC_CLASS_1_028B7BEA92475AC3_METHOD_1_25A884AE2939A887_OFFSET UNITYSDK_OFFSET(0x13CE7F40)
#define CLASS_2_20EEA282526CCBDC_CLASS_1_028B7BEA92475AC3__CTOR_OFFSET UNITYSDK_OFFSET(0x13CE7F30)

inline static constexpr unsigned int Class_2_20EEA282526CCBDC_Class_1_028B7BEA92475AC3_TypeDefinitionIndex = 42732;

class Class_2_20EEA282526CCBDC_Class_1_028B7BEA92475AC3 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_477* Field_1_1; // 0x10
	::Class_2_20EEA282526CCBDC* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20EEA282526CCBDC_CLASS_1_028B7BEA92475AC3__CTOR_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_1_25A884AE2939A887(::Struct_2_575273D27F02957E a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + CLASS_2_20EEA282526CCBDC_CLASS_1_028B7BEA92475AC3_METHOD_1_25A884AE2939A887_OFFSET))(this, a1);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_1_25A884AE2939A887_1(::Struct_2_575273D27F02957E a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + CLASS_2_20EEA282526CCBDC_CLASS_1_028B7BEA92475AC3_METHOD_1_25A884AE2939A887_1_OFFSET))(this, a1);
	}
};
