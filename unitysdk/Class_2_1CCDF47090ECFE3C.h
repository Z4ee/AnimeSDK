#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByPropertyRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1CCDF47090ECFE3C_COMPARE_OFFSET UNITYSDK_OFFSET(0x92C1810)
#define CLASS_2_1CCDF47090ECFE3C_METHOD_2_DE322FF31F6C1854_OFFSET UNITYSDK_OFFSET(0x92C1980)
#define CLASS_2_1CCDF47090ECFE3C_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x92C1B30)
#define CLASS_2_1CCDF47090ECFE3C__CTOR_OFFSET UNITYSDK_OFFSET(0x92C17F0)

inline static constexpr unsigned int Class_2_1CCDF47090ECFE3C_TypeDefinitionIndex = 54565;

class Class_2_1CCDF47090ECFE3C : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByPropertyRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSortByPropertyRatio* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + CLASS_2_1CCDF47090ECFE3C__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1CCDF47090ECFE3C_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE322FF31F6C1854(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_1CCDF47090ECFE3C_METHOD_2_DE322FF31F6C1854_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_1CCDF47090ECFE3C_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
