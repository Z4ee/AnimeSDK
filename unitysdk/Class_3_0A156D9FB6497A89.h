#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_3C72212260A8C076.h"

namespace RPG::GameCore { class AnimationMoveRange; }
namespace RPG::GameCore { class MoveToTargetPosition; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0A156D9FB6497A89_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19FD8910)
#define CLASS_3_0A156D9FB6497A89__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD87C0)

inline static constexpr unsigned int Class_3_0A156D9FB6497A89_TypeDefinitionIndex = 55430;

class Class_3_0A156D9FB6497A89 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MoveToTargetPosition*>
{
public:
	::System::Collections::Generic::List_1<::Struct_2_3C72212260A8C076>* LOGMLFEHDGO; // 0x28
	::Il2CppArray<::RPG::GameCore::AnimationMoveRange*>* KPENGHPHMFF; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveToTargetPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveToTargetPosition*))((::PBYTE)hIl2Cpp + CLASS_3_0A156D9FB6497A89__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A156D9FB6497A89_ONTASKBEGIN_OFFSET))(this);
	}
};
