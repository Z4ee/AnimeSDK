#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_Move; }
namespace System { class Action; }

#define CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x130FE900)
#define CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2_METHOD_1_DFA777394FA7F30D_OFFSET UNITYSDK_OFFSET(0x130FEB00)
#define CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2__CTOR_OFFSET UNITYSDK_OFFSET(0x130FE8F0)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_Class_1_04FB3A56B8557CE2_TypeDefinitionIndex = 42429;

class Class_5_A6F8D19602712D95_Class_1_04FB3A56B8557CE2 : public ::System::Object
{
public:
	::Class_5_A6F8D19602712D95* Field_1_1; // 0x10
	::MoleMole::Config::ConfigHollowChessboard_Move* Field_1_0; // 0x18
	::System::Action* Field_1_3; // 0x20
	::System::Single Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFA777394FA7F30D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2_METHOD_1_DFA777394FA7F30D_OFFSET))(this);
	}
};
