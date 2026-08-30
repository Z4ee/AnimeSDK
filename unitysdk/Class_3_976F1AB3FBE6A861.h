#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropInitFastDeliverPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_976F1AB3FBE6A861_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7551D0)
#define CLASS_3_976F1AB3FBE6A861__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7551A0)

inline static constexpr unsigned int Class_3_976F1AB3FBE6A861_TypeDefinitionIndex = 58478;

class Class_3_976F1AB3FBE6A861 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropInitFastDeliverPuzzle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropInitFastDeliverPuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + CLASS_3_976F1AB3FBE6A861__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_976F1AB3FBE6A861_ONTASKBEGIN_OFFSET))(this);
	}
};
