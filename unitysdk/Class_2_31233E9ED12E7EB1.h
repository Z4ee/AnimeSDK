#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSummoner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_31233E9ED12E7EB1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x12B2D2F0)
#define CLASS_2_31233E9ED12E7EB1__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2D2D0)

inline static constexpr unsigned int Class_2_31233E9ED12E7EB1_TypeDefinitionIndex = 54645;

class Class_2_31233E9ED12E7EB1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSummoner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSummoner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + CLASS_2_31233E9ED12E7EB1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_31233E9ED12E7EB1_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
