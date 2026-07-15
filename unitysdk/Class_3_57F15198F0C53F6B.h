#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertAction; }
namespace System { class String; }

#define CLASS_3_57F15198F0C53F6B_METHOD_3_042D304441765048_OFFSET UNITYSDK_OFFSET(0x15F5FFD0)
#define CLASS_3_57F15198F0C53F6B_METHOD_3_E81FC461A5E4FAA2_OFFSET UNITYSDK_OFFSET(0x15F5FE90)
#define CLASS_3_57F15198F0C53F6B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F5FAB0)
#define CLASS_3_57F15198F0C53F6B__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5FA80)

inline static constexpr unsigned int Class_3_57F15198F0C53F6B_TypeDefinitionIndex = 53252;

class Class_3_57F15198F0C53F6B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TurnInsertAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TurnInsertAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TurnInsertAction*))((::PBYTE)hIl2Cpp + CLASS_3_57F15198F0C53F6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57F15198F0C53F6B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_042D304441765048(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_57F15198F0C53F6B_METHOD_3_042D304441765048_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::String*>* Method_3_E81FC461A5E4FAA2()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57F15198F0C53F6B_METHOD_3_E81FC461A5E4FAA2_OFFSET))(this);
	}
};
