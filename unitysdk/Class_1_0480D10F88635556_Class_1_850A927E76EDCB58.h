#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

class Class_1_D9BAE726F869C3AC;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_0480D10F88635556_CLASS_1_850A927E76EDCB58__CTOR_OFFSET UNITYSDK_OFFSET(0x187A2130)

inline static constexpr unsigned int Class_1_0480D10F88635556_Class_1_850A927E76EDCB58_TypeDefinitionIndex = 72351;

class Class_1_0480D10F88635556_Class_1_850A927E76EDCB58 : public ::System::Object
{
public:
	::MoleMole::UIWindowController* Field_1_0; // 0x10
	::MoleMole::UIControllerContextBase* Field_1_2; // 0x18
	::System::Func_4<::Struct_2_575273D27F02957E, ::Class_1_D9BAE726F869C3AC*, ::MoleMole::UIControllerContextBase*, ::MoleMole::UIWindowController*>* Field_1_1; // 0x20
	::System::Func_3<::Enum_3_7A4252233BCEB3A9, ::MoleMole::UIControllerContextBase*, ::MoleMole::UIWindowController*>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0480D10F88635556_CLASS_1_850A927E76EDCB58__CTOR_OFFSET))(this);
	}
};
