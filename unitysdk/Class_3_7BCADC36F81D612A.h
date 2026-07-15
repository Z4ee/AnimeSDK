#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_3C72212260A8C076.h"

namespace RPG::GameCore { class AnimationMoveRange; }
namespace RPG::GameCore { class MoveToTargetPosition; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7BCADC36F81D612A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x171DBAF0)
#define CLASS_3_7BCADC36F81D612A__CTOR_OFFSET UNITYSDK_OFFSET(0x171DB950)

inline static constexpr unsigned int Class_3_7BCADC36F81D612A_TypeDefinitionIndex = 52730;

class Class_3_7BCADC36F81D612A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MoveToTargetPosition*>
{
public:
	::System::Collections::Generic::List_1<::Struct_2_3C72212260A8C076>* Field_3_0; // 0x28
	::Il2CppArray<::RPG::GameCore::AnimationMoveRange*>* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveToTargetPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveToTargetPosition*))((::PBYTE)hIl2Cpp + CLASS_3_7BCADC36F81D612A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BCADC36F81D612A_ONTASKBEGIN_OFFSET))(this);
	}
};
