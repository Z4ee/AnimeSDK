#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_Rotate; }
namespace System { class Action; }

#define CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12B3CDD0)
#define CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D_METHOD_1_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x12B3CDE0)
#define CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3CDC0)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_Class_1_00787B9DEF56C26D_TypeDefinitionIndex = 63081;

class Class_5_A6F8D19602712D95_Class_1_00787B9DEF56C26D : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::Class_5_A6F8D19602712D95* Field_1_7; // 0x18
	::MoleMole::Config::ConfigHollowChessboard_Rotate* Field_1_0; // 0x20
	::UnityEngine::Quaternion Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_1_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_00787B9DEF56C26D_METHOD_1_7998F8CA1E002410_OFFSET))(this, a1);
	}
};
