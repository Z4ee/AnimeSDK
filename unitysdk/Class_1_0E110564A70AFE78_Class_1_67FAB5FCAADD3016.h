#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace System { class Action; }

#define CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016_METHOD_1_27529CEE7CCCE66A_OFFSET UNITYSDK_OFFSET(0x15769DB0)
#define CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x15769DA0)
#define CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016__CTOR_OFFSET UNITYSDK_OFFSET(0x15769D90)

inline static constexpr unsigned int Class_1_0E110564A70AFE78_Class_1_67FAB5FCAADD3016_TypeDefinitionIndex = 42194;

class Class_1_0E110564A70AFE78_Class_1_67FAB5FCAADD3016 : public ::System::Object
{
public:
	::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* Field_1_0; // 0x10
	::System::Action* Field_1_7; // 0x18
	::System::Action* Field_1_6; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_1_27529CEE7CCCE66A(::MoleMole::MultipleVideoPlayerManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + CLASS_1_0E110564A70AFE78_CLASS_1_67FAB5FCAADD3016_METHOD_1_27529CEE7CCCE66A_OFFSET))(this, a1);
	}
};
