#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_Move; }
namespace System { class Action; }

#define CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x174CAAA0)
#define CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x174CAA90)
#define CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2__CTOR_OFFSET UNITYSDK_OFFSET(0x174CAA80)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_Class_1_04FB3A56B8557CE2_TypeDefinitionIndex = 63076;

class Class_5_A6F8D19602712D95_Class_1_04FB3A56B8557CE2 : public ::System::Object
{
public:
	::Class_5_A6F8D19602712D95* Field_1_7; // 0x10
	::System::Action* Field_1_5; // 0x18
	::MoleMole::Config::ConfigHollowChessboard_Move* Field_1_0; // 0x20
	::System::Single Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_04FB3A56B8557CE2_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
	}
};
