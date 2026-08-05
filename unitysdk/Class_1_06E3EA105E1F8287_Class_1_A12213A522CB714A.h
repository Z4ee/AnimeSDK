#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20.h"
#include "unitysdk/System/Object.h"

class Class_3_472679C84451629A_19;
class Class_4_01F9221F8B6A9296;
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_06E3EA105E1F8287_CLASS_1_A12213A522CB714A_METHOD_1_576DAE11CC06CF1F_OFFSET UNITYSDK_OFFSET(0x134BF720)
#define CLASS_1_06E3EA105E1F8287_CLASS_1_A12213A522CB714A_METHOD_1_5B3ABFA9FB2A8AC4_OFFSET UNITYSDK_OFFSET(0x134BF790)
#define CLASS_1_06E3EA105E1F8287_CLASS_1_A12213A522CB714A__CTOR_OFFSET UNITYSDK_OFFSET(0x134BF710)

inline static constexpr unsigned int Class_1_06E3EA105E1F8287_Class_1_A12213A522CB714A_TypeDefinitionIndex = 73500;

class Class_1_06E3EA105E1F8287_Class_1_A12213A522CB714A : public ::System::Object
{
public:
	::Class_4_01F9221F8B6A9296* Field_1_2; // 0x10
	::System::Action_1<::MoleMole::UIWindowController*>* Field_1_6; // 0x18
	::System::Int32 Field_1_7; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E3EA105E1F8287_CLASS_1_A12213A522CB714A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_576DAE11CC06CF1F(::Class_3_472679C84451629A_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_19*))((::PBYTE)hIl2Cpp + CLASS_1_06E3EA105E1F8287_CLASS_1_A12213A522CB714A_METHOD_1_576DAE11CC06CF1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B3ABFA9FB2A8AC4(::Class_3_472679C84451629A_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_19*))((::PBYTE)hIl2Cpp + CLASS_1_06E3EA105E1F8287_CLASS_1_A12213A522CB714A_METHOD_1_5B3ABFA9FB2A8AC4_OFFSET))(this, a1);
	}
};
