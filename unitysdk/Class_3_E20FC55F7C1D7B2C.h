#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

class Class_0_16E4307DCC419505_412;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E20FC55F7C1D7B2C_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA701DA0)
#define CLASS_3_E20FC55F7C1D7B2C_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA701BF0)
#define CLASS_3_E20FC55F7C1D7B2C__CTOR_OFFSET UNITYSDK_OFFSET(0xA701A30)
#define CLASS_3_E20FC55F7C1D7B2C___IFIXBASEPROXY_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA701F50)

inline static constexpr unsigned int Class_3_E20FC55F7C1D7B2C_TypeDefinitionIndex = 47857;

class Class_3_E20FC55F7C1D7B2C : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetSequence*>
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_412*>* Field_3_1; // 0x18
	::System::Boolean Field_3_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TargetSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + CLASS_3_E20FC55F7C1D7B2C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_E20FC55F7C1D7B2C_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_E20FC55F7C1D7B2C_EVALUATE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Transform(::RPG::GameCore::TaskContext* P0, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_E20FC55F7C1D7B2C___IFIXBASEPROXY_TRANSFORM_OFFSET))(this, P0, P1);
	}
};
