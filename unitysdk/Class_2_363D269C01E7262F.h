#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_1_1C6D038ACA57B217;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByGridFightRoleTotalDamage; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_363D269C01E7262F_COMPARE_OFFSET UNITYSDK_OFFSET(0x142F3870)
#define CLASS_2_363D269C01E7262F_METHOD_2_3EAA64E506F9F311_OFFSET UNITYSDK_OFFSET(0x142F3770)
#define CLASS_2_363D269C01E7262F_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x142F34C0)
#define CLASS_2_363D269C01E7262F__CTOR_OFFSET UNITYSDK_OFFSET(0x142F34A0)

inline static constexpr unsigned int Class_2_363D269C01E7262F_TypeDefinitionIndex = 55303;

class Class_2_363D269C01E7262F : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1C6D038ACA57B217*>* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + CLASS_2_363D269C01E7262F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_363D269C01E7262F_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3EAA64E506F9F311(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_363D269C01E7262F_METHOD_2_3EAA64E506F9F311_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_363D269C01E7262F_COMPARE_OFFSET))(this, a1, a2);
	}
};
