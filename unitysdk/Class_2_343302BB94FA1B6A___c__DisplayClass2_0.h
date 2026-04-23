#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_343302BB94FA1B6A;
class Class_3_C1B871875244D398;
namespace RPG::GameCore { class LevelGraphComponent; }

#define CLASS_2_343302BB94FA1B6A___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x95F9BA0)
#define CLASS_2_343302BB94FA1B6A___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x95FA9F0)

inline static constexpr unsigned int Class_2_343302BB94FA1B6A___c__DisplayClass2_0_TypeDefinitionIndex = 54089;

class Class_2_343302BB94FA1B6A___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_2_343302BB94FA1B6A* __4__this; // 0x10
	::Class_3_C1B871875244D398* dataCom; // 0x18
	::RPG::GameCore::LevelGraphComponent* levelGraphCom; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_343302BB94FA1B6A___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
