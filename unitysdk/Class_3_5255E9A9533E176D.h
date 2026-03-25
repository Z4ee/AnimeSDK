#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearTalkUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5255E9A9533E176D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1145D6F0)
#define CLASS_3_5255E9A9533E176D__CTOR_OFFSET UNITYSDK_OFFSET(0x1145D6C0)

inline static constexpr unsigned int Class_3_5255E9A9533E176D_TypeDefinitionIndex = 46803;

class Class_3_5255E9A9533E176D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearTalkUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearTalkUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearTalkUI*))((::PBYTE)hIl2Cpp + CLASS_3_5255E9A9533E176D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5255E9A9533E176D_ONTASKBEGIN_OFFSET))(this);
	}
};
