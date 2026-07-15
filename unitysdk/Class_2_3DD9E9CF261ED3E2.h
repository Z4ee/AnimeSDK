#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetRemoveUnselectable; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3DD9E9CF261ED3E2_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x17A78750)
#define CLASS_2_3DD9E9CF261ED3E2__CTOR_OFFSET UNITYSDK_OFFSET(0x17A78730)

inline static constexpr unsigned int Class_2_3DD9E9CF261ED3E2_TypeDefinitionIndex = 56506;

class Class_2_3DD9E9CF261ED3E2 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetRemoveUnselectable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetRemoveUnselectable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + CLASS_2_3DD9E9CF261ED3E2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_3DD9E9CF261ED3E2_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
