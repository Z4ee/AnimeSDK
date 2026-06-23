#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EA9A3C1106CBD311.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_9;
class Class_2_208CC9941471731A_137;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_6C74824DFBEF7321_METHOD_1_128463083FED7D43_OFFSET UNITYSDK_OFFSET(0x13A68EE0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_6C74824DFBEF7321_METHOD_1_9CFA0D2D408155D9_OFFSET UNITYSDK_OFFSET(0x13A68AE0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_6C74824DFBEF7321__CTOR_OFFSET UNITYSDK_OFFSET(0x13A68AD0)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_6C74824DFBEF7321_TypeDefinitionIndex = 82222;

class Class_1_8B550A61FC9DDA82_Class_1_6C74824DFBEF7321 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Struct_2_EA9A3C1106CBD311 Field_1_3; // 0x18
	::Class_2_208CC9941471731A_137* Field_1_2; // 0x70
	::System::Action* Field_1_4; // 0x78
	::System::Action_1<::Class_1_83665B095F1535B5_9*>* Field_1_5; // 0x80
	::System::Int32 Field_1_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_6C74824DFBEF7321__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9CFA0D2D408155D9(::MoleMole::UIGeneralTipsPopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_6C74824DFBEF7321_METHOD_1_9CFA0D2D408155D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_128463083FED7D43(::MoleMole::UIGeneralTipsPopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_6C74824DFBEF7321_METHOD_1_128463083FED7D43_OFFSET))(this, a1);
	}
};
