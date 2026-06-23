#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_Rotate; }
namespace System { class Action; }

#define CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D_METHOD_1_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x147AE6F0)
#define CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D_METHOD_1_DFA777394FA7F30D_OFFSET UNITYSDK_OFFSET(0x147AE960)
#define CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D__CTOR_OFFSET UNITYSDK_OFFSET(0x147A5C20)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_Class_1_00787B9DEF56C26D_TypeDefinitionIndex = 42425;

class Class_5_A6F8D19602712D95_Class_1_00787B9DEF56C26D : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHollowChessboard_Rotate* Field_1_0; // 0x10
	::Class_5_A6F8D19602712D95* Field_1_1; // 0x18
	::System::Action* Field_1_3; // 0x20
	::UnityEngine::Quaternion Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D_METHOD_1_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFA777394FA7F30D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D_METHOD_1_DFA777394FA7F30D_OFFSET))(this);
	}
};
