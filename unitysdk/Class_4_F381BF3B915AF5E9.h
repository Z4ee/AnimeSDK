#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_97A40722E5999741.h"

namespace RPG::GameCore { class AdventureTriggerAttack; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_F381BF3B915AF5E9_METHOD_4_786BED8BB6F7F2E6_OFFSET UNITYSDK_OFFSET(0x17A31220)
#define CLASS_4_F381BF3B915AF5E9__CTOR_OFFSET UNITYSDK_OFFSET(0x17A31210)

inline static constexpr unsigned int Class_4_F381BF3B915AF5E9_TypeDefinitionIndex = 58085;

class Class_4_F381BF3B915AF5E9 : public ::Class_3_97A40722E5999741
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + CLASS_4_F381BF3B915AF5E9__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_4_786BED8BB6F7F2E6(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_4_F381BF3B915AF5E9_METHOD_4_786BED8BB6F7F2E6_OFFSET))(a1, a2, a3, a4, a5);
	}
};
