#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_389;
class Class_0_16E4307DCC419505_412;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A1732E083BBBFDBC_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11864E30)
#define CLASS_1_A1732E083BBBFDBC_1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x11864DA0)
#define CLASS_1_A1732E083BBBFDBC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11864D90)

inline static constexpr unsigned int Class_1_A1732E083BBBFDBC_1_TypeDefinitionIndex = 47739;

class Class_1_A1732E083BBBFDBC_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_412* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_389* Field_1_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_389* a1, ::Class_0_16E4307DCC419505_412* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_389*, ::Class_0_16E4307DCC419505_412*))((::PBYTE)hIl2Cpp + CLASS_1_A1732E083BBBFDBC_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A1732E083BBBFDBC_1_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A1732E083BBBFDBC_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};
