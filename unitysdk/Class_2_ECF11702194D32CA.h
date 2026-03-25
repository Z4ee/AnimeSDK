#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFilterTargetType; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ECF11702194D32CA_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA1D28E0)
#define CLASS_2_ECF11702194D32CA__CTOR_OFFSET UNITYSDK_OFFSET(0xA1D28C0)

inline static constexpr unsigned int Class_2_ECF11702194D32CA_TypeDefinitionIndex = 47913;

class Class_2_ECF11702194D32CA : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetFilterTargetType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFilterTargetType* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + CLASS_2_ECF11702194D32CA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_ECF11702194D32CA_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
