#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class TargetSortByGridFightPower; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_81B079CB2F1251E1_COMPARE_OFFSET UNITYSDK_OFFSET(0x15286580)
#define CLASS_2_81B079CB2F1251E1_METHOD_2_DE832219644F71A6_OFFSET UNITYSDK_OFFSET(0x152861E0)
#define CLASS_2_81B079CB2F1251E1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x152862C0)
#define CLASS_2_81B079CB2F1251E1__CTOR_OFFSET UNITYSDK_OFFSET(0x152861C0)

inline static constexpr unsigned int Class_2_81B079CB2F1251E1_TypeDefinitionIndex = 56541;

class Class_2_81B079CB2F1251E1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByGridFightPower*>
{
public:
	::RPG::GameCore::GridFightManager* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortByGridFightPower* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + CLASS_2_81B079CB2F1251E1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE832219644F71A6(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_81B079CB2F1251E1_METHOD_2_DE832219644F71A6_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_81B079CB2F1251E1_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_81B079CB2F1251E1_COMPARE_OFFSET))(this, a1, a2);
	}
};
