#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8F837FD2455D931F__CTOR_OFFSET UNITYSDK_OFFSET(0x100ECDD0)

inline static constexpr unsigned int Class_1_8F837FD2455D931F_TypeDefinitionIndex = 53022;

class Class_1_8F837FD2455D931F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_3<::Enum_3_81A3942BCC6E42B5, ::MoleMole::UIControllerContextBase*, ::MoleMole::UIWindowController*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_3<::Enum_3_81A3942BCC6E42B5, ::MoleMole::UIControllerContextBase*, ::MoleMole::UIWindowController*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F837FD2455D931F__CTOR_OFFSET))(this);
	}
};
