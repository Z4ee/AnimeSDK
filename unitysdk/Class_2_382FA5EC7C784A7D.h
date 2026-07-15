#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMoveFinish; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_382FA5EC7C784A7D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1620AED0)
#define CLASS_2_382FA5EC7C784A7D_METHOD_2_A43D587A89E24E29_OFFSET UNITYSDK_OFFSET(0x1620B370)
#define CLASS_2_382FA5EC7C784A7D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1620B0F0)
#define CLASS_2_382FA5EC7C784A7D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1620B020)
#define CLASS_2_382FA5EC7C784A7D_TICK_OFFSET UNITYSDK_OFFSET(0x1620B290)
#define CLASS_2_382FA5EC7C784A7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1620AE50)

inline static constexpr unsigned int Class_2_382FA5EC7C784A7D_TypeDefinitionIndex = 56281;

class Class_2_382FA5EC7C784A7D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::WaitPropCurveMoveFinish* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::String* Field_2_4; // 0x38
	::System::UInt32 Field_2_5; // 0x40
	::System::UInt32 Field_2_6; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropCurveMoveFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropCurveMoveFinish*))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A43D587A89E24E29(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_METHOD_2_A43D587A89E24E29_OFFSET))(this, a1);
	}
};
