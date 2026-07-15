#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAdjoinEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CAA598ADC2F45623_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x17AAE6E0)
#define CLASS_2_CAA598ADC2F45623__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAE6C0)

inline static constexpr unsigned int Class_2_CAA598ADC2F45623_TypeDefinitionIndex = 56473;

class Class_2_CAA598ADC2F45623 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapAdjoinEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapAdjoinEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CAA598ADC2F45623__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_CAA598ADC2F45623_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
