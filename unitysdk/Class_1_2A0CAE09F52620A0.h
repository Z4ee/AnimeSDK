#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_2A0CAE09F52620A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17DC6810)
#define CLASS_1_2A0CAE09F52620A0_METHOD_1_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x17DC6B40)
#define CLASS_1_2A0CAE09F52620A0_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x17DC6870)
#define CLASS_1_2A0CAE09F52620A0_METHOD_1_B38322BD4F004DDB_OFFSET UNITYSDK_OFFSET(0x17DC69A0)
#define CLASS_1_2A0CAE09F52620A0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC6800)

inline static constexpr unsigned int Class_1_2A0CAE09F52620A0_TypeDefinitionIndex = 60931;

class Class_1_2A0CAE09F52620A0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* DEDGHKACMMG; // 0x10
	::Class_3_07C3C4D2990C49EE* MPKAFEJFNKN; // 0x18
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x20
	::System::Boolean MHEAIOMEGCA; // 0x28

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2A0CAE09F52620A0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A0CAE09F52620A0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B38322BD4F004DDB(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_2A0CAE09F52620A0_METHOD_1_B38322BD4F004DDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A0CAE09F52620A0_METHOD_1_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_1_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_2A0CAE09F52620A0_METHOD_1_0EF345F8F1CF4181_OFFSET))(this, a1);
	}
};
