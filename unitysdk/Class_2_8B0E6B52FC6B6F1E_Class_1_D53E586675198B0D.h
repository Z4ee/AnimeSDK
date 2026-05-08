#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralInputFieldPopWindowController_Result.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_8B0E6B52FC6B6F1E_CLASS_1_D53E586675198B0D_METHOD_1_D0AB8FF9D95E75D9_OFFSET UNITYSDK_OFFSET(0xE8BB140)
#define CLASS_2_8B0E6B52FC6B6F1E_CLASS_1_D53E586675198B0D__CTOR_OFFSET UNITYSDK_OFFSET(0xE8BB130)

inline static constexpr unsigned int Class_2_8B0E6B52FC6B6F1E_Class_1_D53E586675198B0D_TypeDefinitionIndex = 57006;

class Class_2_8B0E6B52FC6B6F1E_Class_1_D53E586675198B0D : public ::System::Object
{
public:
	::Class_0_16E4307DCC41950C_13<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B0E6B52FC6B6F1E_CLASS_1_D53E586675198B0D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D0AB8FF9D95E75D9(::MoleMole::UIGeneralInputFieldPopWindowController_Result a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralInputFieldPopWindowController_Result, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8B0E6B52FC6B6F1E_CLASS_1_D53E586675198B0D_METHOD_1_D0AB8FF9D95E75D9_OFFSET))(this, a1, a2);
	}
};
