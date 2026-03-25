#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_79F61E3248BECD05.h"

namespace RPG::GameCore { class AdventureTriggerAttack; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_C56186E24A731AB4_METHOD_4_75067108A654CD0D_OFFSET UNITYSDK_OFFSET(0xE454880)
#define CLASS_4_C56186E24A731AB4__CTOR_OFFSET UNITYSDK_OFFSET(0xE454870)

inline static constexpr unsigned int Class_4_C56186E24A731AB4_TypeDefinitionIndex = 46716;

class Class_4_C56186E24A731AB4 : public ::Class_3_79F61E3248BECD05
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + CLASS_4_C56186E24A731AB4__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_4_75067108A654CD0D(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_4_C56186E24A731AB4_METHOD_4_75067108A654CD0D_OFFSET))(a1, a2, a3, a4, a5);
	}
};
