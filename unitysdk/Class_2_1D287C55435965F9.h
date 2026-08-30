#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetReverse; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1D287C55435965F9_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x186E7A00)
#define CLASS_2_1D287C55435965F9__CTOR_OFFSET UNITYSDK_OFFSET(0x16043580)

inline static constexpr unsigned int Class_2_1D287C55435965F9_TypeDefinitionIndex = 59353;

class Class_2_1D287C55435965F9 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetReverse*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetReverse* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + CLASS_2_1D287C55435965F9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_1D287C55435965F9_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
