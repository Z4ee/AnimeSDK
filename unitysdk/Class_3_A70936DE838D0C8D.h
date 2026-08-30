#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowRubbingUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A70936DE838D0C8D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B4C650)
#define CLASS_3_A70936DE838D0C8D__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4C620)

inline static constexpr unsigned int Class_3_A70936DE838D0C8D_TypeDefinitionIndex = 53542;

class Class_3_A70936DE838D0C8D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowRubbingUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRubbingUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRubbingUI*))((::PBYTE)hIl2Cpp + CLASS_3_A70936DE838D0C8D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A70936DE838D0C8D_ONTASKBEGIN_OFFSET))(this);
	}
};
