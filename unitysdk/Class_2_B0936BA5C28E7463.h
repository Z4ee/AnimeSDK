#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class EndPropInteract; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B0936BA5C28E7463_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134D6DF0)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x134D7690)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_3CAD92CFB876DBF6_1_OFFSET UNITYSDK_OFFSET(0x134D7590)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x134D7490)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_7C798DF2D7BB7252_OFFSET UNITYSDK_OFFSET(0x134D71E0)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x134D6F60)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_D90E9AC48A125839_OFFSET UNITYSDK_OFFSET(0x134D70D0)
#define CLASS_2_B0936BA5C28E7463_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134D7220)
#define CLASS_2_B0936BA5C28E7463_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x134D7440)
#define CLASS_2_B0936BA5C28E7463_TICK_OFFSET UNITYSDK_OFFSET(0x134D6E60)
#define CLASS_2_B0936BA5C28E7463__CTOR_OFFSET UNITYSDK_OFFSET(0x134D6D90)

inline static constexpr unsigned int Class_2_B0936BA5C28E7463_TypeDefinitionIndex = 54314;

class Class_2_B0936BA5C28E7463 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::PropComponent* Field_2_1; // 0x20
	::RPG::GameCore::LevelGraph* Field_2_2; // 0x28
	::RPG::GameCore::EndPropInteract* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndPropInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndPropInteract*))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D90E9AC48A125839(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_METHOD_2_D90E9AC48A125839_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::TaskConfig* Method_2_7C798DF2D7BB7252()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_METHOD_2_7C798DF2D7BB7252_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_METHOD_2_3CAD92CFB876DBF6_1_OFFSET))(this);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}
};
