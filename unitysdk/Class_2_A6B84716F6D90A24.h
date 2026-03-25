#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_1_6D3A625BE1D0B270;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByGridFightRoleTotalDamage; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A6B84716F6D90A24_COMPARE_OFFSET UNITYSDK_OFFSET(0x8A8F720)
#define CLASS_2_A6B84716F6D90A24_METHOD_2_69696556CC7A23F2_OFFSET UNITYSDK_OFFSET(0x8A8F620)
#define CLASS_2_A6B84716F6D90A24_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x8A8F510)
#define CLASS_2_A6B84716F6D90A24__CTOR_OFFSET UNITYSDK_OFFSET(0x8A8F4F0)

inline static constexpr unsigned int Class_2_A6B84716F6D90A24_TypeDefinitionIndex = 47835;

class Class_2_A6B84716F6D90A24 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6D3A625BE1D0B270*>* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + CLASS_2_A6B84716F6D90A24__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A6B84716F6D90A24_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_69696556CC7A23F2(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_A6B84716F6D90A24_METHOD_2_69696556CC7A23F2_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A6B84716F6D90A24_COMPARE_OFFSET))(this, a1, a2);
	}
};
