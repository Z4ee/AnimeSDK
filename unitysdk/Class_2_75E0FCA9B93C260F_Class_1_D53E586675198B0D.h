#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralInputFieldPopWindowController_Result.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_75E0FCA9B93C260F_CLASS_1_D53E586675198B0D_METHOD_1_D0AB8FF9D95E75D9_OFFSET UNITYSDK_OFFSET(0x159895A0)
#define CLASS_2_75E0FCA9B93C260F_CLASS_1_D53E586675198B0D__CTOR_OFFSET UNITYSDK_OFFSET(0x15989590)

inline static constexpr unsigned int Class_2_75E0FCA9B93C260F_Class_1_D53E586675198B0D_TypeDefinitionIndex = 77615;

class Class_2_75E0FCA9B93C260F_Class_1_D53E586675198B0D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_165<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75E0FCA9B93C260F_CLASS_1_D53E586675198B0D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D0AB8FF9D95E75D9(::MoleMole::UIGeneralInputFieldPopWindowController_Result a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralInputFieldPopWindowController_Result, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_75E0FCA9B93C260F_CLASS_1_D53E586675198B0D_METHOD_1_D0AB8FF9D95E75D9_OFFSET))(this, a1, a2);
	}
};
