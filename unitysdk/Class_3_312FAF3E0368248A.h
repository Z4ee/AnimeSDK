#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class ShowRogueHandbookUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_312FAF3E0368248A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152DA6E0)
#define CLASS_3_312FAF3E0368248A__CTOR_OFFSET UNITYSDK_OFFSET(0x152DA630)

inline static constexpr unsigned int Class_3_312FAF3E0368248A_TypeDefinitionIndex = 56057;

class Class_3_312FAF3E0368248A : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::ShowRogueHandbookUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueHandbookUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueHandbookUI*))((::PBYTE)hIl2Cpp + CLASS_3_312FAF3E0368248A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_312FAF3E0368248A_ONTASKBEGIN_OFFSET))(this);
	}
};
