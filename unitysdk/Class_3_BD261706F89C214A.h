#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

class Class_0_16E4307DCC419505_514;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BD261706F89C214A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1064A930)
#define CLASS_3_BD261706F89C214A_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1064A790)
#define CLASS_3_BD261706F89C214A__CTOR_OFFSET UNITYSDK_OFFSET(0x1064A620)
#define CLASS_3_BD261706F89C214A___IFIXBASEPROXY_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1064AAD0)

inline static constexpr unsigned int Class_3_BD261706F89C214A_TypeDefinitionIndex = 55325;

class Class_3_BD261706F89C214A : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetSequence*>
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_514*>* Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TargetSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + CLASS_3_BD261706F89C214A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_BD261706F89C214A_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_BD261706F89C214A_EVALUATE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_BD261706F89C214A___IFIXBASEPROXY_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
