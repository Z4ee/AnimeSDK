#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_MoveXY; }
namespace System { class Action; }

#define CLASS_5_A6F8D19602712D95_CLASS_1_AF44072AA343919C_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x11BBBB90)
#define CLASS_5_A6F8D19602712D95_CLASS_1_AF44072AA343919C_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11BBBD90)
#define CLASS_5_A6F8D19602712D95_CLASS_1_AF44072AA343919C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BBBB80)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_Class_1_AF44072AA343919C_TypeDefinitionIndex = 63080;

class Class_5_A6F8D19602712D95_Class_1_AF44072AA343919C : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::MoleMole::Config::ConfigHollowChessboard_MoveXY* Field_1_0; // 0x18
	::Class_5_A6F8D19602712D95* Field_1_7; // 0x20
	::UnityEngine::Vector3 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_AF44072AA343919C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_AF44072AA343919C_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_AF44072AA343919C_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}
};
