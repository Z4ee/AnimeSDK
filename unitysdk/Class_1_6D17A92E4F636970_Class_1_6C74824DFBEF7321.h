#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EA9A3C1106CBD311.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_3;
class Class_2_208CC9941471731A_602;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6D17A92E4F636970_CLASS_1_6C74824DFBEF7321_METHOD_1_128463083FED7D43_OFFSET UNITYSDK_OFFSET(0x12B9F690)
#define CLASS_1_6D17A92E4F636970_CLASS_1_6C74824DFBEF7321_METHOD_1_9CFA0D2D408155D9_OFFSET UNITYSDK_OFFSET(0x12B9F280)
#define CLASS_1_6D17A92E4F636970_CLASS_1_6C74824DFBEF7321__CTOR_OFFSET UNITYSDK_OFFSET(0x12B9F270)

inline static constexpr unsigned int Class_1_6D17A92E4F636970_Class_1_6C74824DFBEF7321_TypeDefinitionIndex = 82556;

class Class_1_6D17A92E4F636970_Class_1_6C74824DFBEF7321 : public ::System::Object
{
public:
	::System::Action* Field_1_4; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Action_1<::Class_1_83665B095F1535B5_3*>* Field_1_5; // 0x20
	::Struct_2_EA9A3C1106CBD311 Field_1_3; // 0x28
	::Class_2_208CC9941471731A_602* Field_1_2; // 0x80
	::System::Int32 Field_1_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_6C74824DFBEF7321__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9CFA0D2D408155D9(::MoleMole::UIGeneralTipsPopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_6C74824DFBEF7321_METHOD_1_9CFA0D2D408155D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_128463083FED7D43(::MoleMole::UIGeneralTipsPopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_CLASS_1_6C74824DFBEF7321_METHOD_1_128463083FED7D43_OFFSET))(this, a1);
	}
};
