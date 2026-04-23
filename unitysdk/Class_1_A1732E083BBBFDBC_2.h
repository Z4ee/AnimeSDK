#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_472;
class Class_0_16E4307DCC419505_495;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A1732E083BBBFDBC_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1283F5E0)
#define CLASS_1_A1732E083BBBFDBC_2_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1283F550)
#define CLASS_1_A1732E083BBBFDBC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1283F540)

inline static constexpr unsigned int Class_1_A1732E083BBBFDBC_2_TypeDefinitionIndex = 54478;

class Class_1_A1732E083BBBFDBC_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_495* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_472* Field_1_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_472* a1, ::Class_0_16E4307DCC419505_495* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_472*, ::Class_0_16E4307DCC419505_495*))((::PBYTE)hIl2Cpp + CLASS_1_A1732E083BBBFDBC_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A1732E083BBBFDBC_2_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A1732E083BBBFDBC_2_EVALUATE_OFFSET))(this, a1, a2);
	}
};
