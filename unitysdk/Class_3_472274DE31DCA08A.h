#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryTransferToHeroRoom; }

#define CLASS_3_472274DE31DCA08A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7D91C0)
#define CLASS_3_472274DE31DCA08A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7D9200)
#define CLASS_3_472274DE31DCA08A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A7D9250)
#define CLASS_3_472274DE31DCA08A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D9190)

inline static constexpr unsigned int Class_3_472274DE31DCA08A_TypeDefinitionIndex = 58956;

class Class_3_472274DE31DCA08A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TryTransferToHeroRoom*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryTransferToHeroRoom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryTransferToHeroRoom*))((::PBYTE)hIl2Cpp + CLASS_3_472274DE31DCA08A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_472274DE31DCA08A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_472274DE31DCA08A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_472274DE31DCA08A_ONTASKRESET_OFFSET))(this);
	}
};
