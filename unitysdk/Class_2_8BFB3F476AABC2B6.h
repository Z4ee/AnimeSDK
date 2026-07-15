#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSummonedMinions; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8BFB3F476AABC2B6_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x14B9B890)
#define CLASS_2_8BFB3F476AABC2B6__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9B870)

inline static constexpr unsigned int Class_2_8BFB3F476AABC2B6_TypeDefinitionIndex = 56611;

class Class_2_8BFB3F476AABC2B6 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSummonedMinions*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSummonedMinions* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + CLASS_2_8BFB3F476AABC2B6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_8BFB3F476AABC2B6_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
