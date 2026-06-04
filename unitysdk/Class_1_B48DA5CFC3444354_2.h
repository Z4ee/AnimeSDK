#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_492;
class Class_0_16E4307DCC419505_514;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B48DA5CFC3444354_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC7297C0)
#define CLASS_1_B48DA5CFC3444354_2_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC729730)
#define CLASS_1_B48DA5CFC3444354_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC729720)

inline static constexpr unsigned int Class_1_B48DA5CFC3444354_2_TypeDefinitionIndex = 55205;

class Class_1_B48DA5CFC3444354_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_514* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_492* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_492* a1, ::Class_0_16E4307DCC419505_514* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_492*, ::Class_0_16E4307DCC419505_514*))((::PBYTE)hIl2Cpp + CLASS_1_B48DA5CFC3444354_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48DA5CFC3444354_2_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B48DA5CFC3444354_2_EVALUATE_OFFSET))(this, a1, a2);
	}
};
