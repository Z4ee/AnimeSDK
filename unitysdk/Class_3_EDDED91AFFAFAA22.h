#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EndReShaSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EDDED91AFFAFAA22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x109CFB40)
#define CLASS_3_EDDED91AFFAFAA22__CTOR_OFFSET UNITYSDK_OFFSET(0x109CFB10)

inline static constexpr unsigned int Class_3_EDDED91AFFAFAA22_TypeDefinitionIndex = 42700;

class Class_3_EDDED91AFFAFAA22 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EndReShaSceneSelection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndReShaSceneSelection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndReShaSceneSelection*))((::PBYTE)hIl2Cpp + CLASS_3_EDDED91AFFAFAA22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDDED91AFFAFAA22_ONTASKBEGIN_OFFSET))(this);
	}
};
