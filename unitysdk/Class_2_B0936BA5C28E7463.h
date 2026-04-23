#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class EndPropInteract; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B0936BA5C28E7463_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD34DDF0)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0xD34E470)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0xD34E550)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xD34E630)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_7C798DF2D7BB7252_OFFSET UNITYSDK_OFFSET(0xD34E1E0)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xD34DF60)
#define CLASS_2_B0936BA5C28E7463_METHOD_2_D90E9AC48A125839_OFFSET UNITYSDK_OFFSET(0xD34E0D0)
#define CLASS_2_B0936BA5C28E7463_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD34E220)
#define CLASS_2_B0936BA5C28E7463_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD34E420)
#define CLASS_2_B0936BA5C28E7463_TICK_OFFSET UNITYSDK_OFFSET(0xD34DE60)
#define CLASS_2_B0936BA5C28E7463__CTOR_OFFSET UNITYSDK_OFFSET(0xD34DD90)

inline static constexpr unsigned int Class_2_B0936BA5C28E7463_TypeDefinitionIndex = 53601;

class Class_2_B0936BA5C28E7463 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropComponent* Field_2_5; // 0x18
	::RPG::GameCore::EndPropInteract* Field_2_3; // 0x20
	::RPG::GameCore::LevelGraph* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_4; // 0x30
	::RPG::GameCore::GameEntity* Field_2_0; // 0x38
	::System::Boolean Field_2_1; // 0x40

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

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_B0936BA5C28E7463_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}
};
