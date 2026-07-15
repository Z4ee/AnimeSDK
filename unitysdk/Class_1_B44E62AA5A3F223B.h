#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_515;
class Class_0_16E4307DCC419505_538;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B44E62AA5A3F223B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x184638F0)
#define CLASS_1_B44E62AA5A3F223B_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18463860)
#define CLASS_1_B44E62AA5A3F223B__CTOR_OFFSET UNITYSDK_OFFSET(0x18463850)

inline static constexpr unsigned int Class_1_B44E62AA5A3F223B_TypeDefinitionIndex = 56438;

class Class_1_B44E62AA5A3F223B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_538* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_515* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_515* a1, ::Class_0_16E4307DCC419505_538* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_515*, ::Class_0_16E4307DCC419505_538*))((::PBYTE)hIl2Cpp + CLASS_1_B44E62AA5A3F223B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B44E62AA5A3F223B_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B44E62AA5A3F223B_EVALUATE_OFFSET))(this, a1, a2);
	}
};
