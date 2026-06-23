#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace System { class Action; }

#define CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016_METHOD_1_27529CEE7CCCE66A_OFFSET UNITYSDK_OFFSET(0x17017A20)
#define CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016_METHOD_1_DFA777394FA7F30D_OFFSET UNITYSDK_OFFSET(0x17017A10)
#define CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016__CTOR_OFFSET UNITYSDK_OFFSET(0x17017A00)

inline static constexpr unsigned int Class_1_0E110564A70AFE78_Class_1_67FAB5FCAADD3016_TypeDefinitionIndex = 79358;

class Class_1_0E110564A70AFE78_Class_1_67FAB5FCAADD3016 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* Field_1_1; // 0x18
	::System::Action* Field_1_3; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DFA777394FA7F30D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016_METHOD_1_DFA777394FA7F30D_OFFSET))(this);
	}

	::System::Void Method_1_27529CEE7CCCE66A(::MoleMole::MultipleVideoPlayerManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016_METHOD_1_27529CEE7CCCE66A_OFFSET))(this, a1);
	}
};
