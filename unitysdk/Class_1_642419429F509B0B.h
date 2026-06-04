#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_492;
class Class_0_16E4307DCC419505_514;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_642419429F509B0B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x135FE240)
#define CLASS_1_642419429F509B0B_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x135FE1B0)
#define CLASS_1_642419429F509B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x135FE1A0)

inline static constexpr unsigned int Class_1_642419429F509B0B_TypeDefinitionIndex = 55206;

class Class_1_642419429F509B0B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_492* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_514* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_492* a1, ::Class_0_16E4307DCC419505_514* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_492*, ::Class_0_16E4307DCC419505_514*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_642419429F509B0B_EVALUATE_OFFSET))(this, a1, a2);
	}
};
