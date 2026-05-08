#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

class Class_1_D9BAE726F869C3AC;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_3F685D49AB0566A9_CLASS_1_850A927E76EDCB58__CTOR_OFFSET UNITYSDK_OFFSET(0x11F28D30)

inline static constexpr unsigned int Class_1_3F685D49AB0566A9_Class_1_850A927E76EDCB58_TypeDefinitionIndex = 73557;

class Class_1_3F685D49AB0566A9_Class_1_850A927E76EDCB58 : public ::System::Object
{
public:
	::System::Func_3<::Enum_3_81A3942BCC6E42B5, ::MoleMole::UIControllerContextBase*, ::MoleMole::UIWindowController*>* Field_1_3; // 0x10
	::MoleMole::UIControllerContextBase* Field_1_2; // 0x18
	::System::Func_4<::Struct_2_575273D27F02957E, ::Class_1_D9BAE726F869C3AC*, ::MoleMole::UIControllerContextBase*, ::MoleMole::UIWindowController*>* Field_1_1; // 0x20
	::MoleMole::UIWindowController* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F685D49AB0566A9_CLASS_1_850A927E76EDCB58__CTOR_OFFSET))(this);
	}
};
