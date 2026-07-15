#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvMonsterEx; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_ED2B03A4B1A87140_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14529530)
#define CLASS_3_ED2B03A4B1A87140_METHOD_3_0B702004D7433936_OFFSET UNITYSDK_OFFSET(0x145292E0)
#define CLASS_3_ED2B03A4B1A87140_METHOD_3_B7113EADBE88EFFF_OFFSET UNITYSDK_OFFSET(0x14529430)
#define CLASS_3_ED2B03A4B1A87140__CTOR_OFFSET UNITYSDK_OFFSET(0x14529270)

inline static constexpr unsigned int Class_3_ED2B03A4B1A87140_TypeDefinitionIndex = 56464;

class Class_3_ED2B03A4B1A87140 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvMonsterEx*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvMonsterEx* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + CLASS_3_ED2B03A4B1A87140__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_0B702004D7433936(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_ED2B03A4B1A87140_METHOD_3_0B702004D7433936_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_B7113EADBE88EFFF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_ED2B03A4B1A87140_METHOD_3_B7113EADBE88EFFF_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_ED2B03A4B1A87140_EVALUATE_OFFSET))(this, a1, a2);
	}
};
