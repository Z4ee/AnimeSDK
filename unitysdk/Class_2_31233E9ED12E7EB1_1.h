#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapCreator; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_31233E9ED12E7EB1_1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB225E20)
#define CLASS_2_31233E9ED12E7EB1_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB225E00)

inline static constexpr unsigned int Class_2_31233E9ED12E7EB1_1_TypeDefinitionIndex = 54646;

class Class_2_31233E9ED12E7EB1_1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapCreator*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapCreator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + CLASS_2_31233E9ED12E7EB1_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_31233E9ED12E7EB1_1_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
