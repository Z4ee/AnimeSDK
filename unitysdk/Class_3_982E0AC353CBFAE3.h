#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowCableUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_982E0AC353CBFAE3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA224860)
#define CLASS_3_982E0AC353CBFAE3__CTOR_OFFSET UNITYSDK_OFFSET(0xA224830)

inline static constexpr unsigned int Class_3_982E0AC353CBFAE3_TypeDefinitionIndex = 47311;

class Class_3_982E0AC353CBFAE3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowCableUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowCableUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowCableUI*))((::PBYTE)hIl2Cpp + CLASS_3_982E0AC353CBFAE3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_982E0AC353CBFAE3_ONTASKBEGIN_OFFSET))(this);
	}
};
