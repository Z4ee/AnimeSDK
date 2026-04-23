#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvTrackNpcLockAlert; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5C4461B5B8810FC5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118D1040)
#define CLASS_3_5C4461B5B8810FC5__CTOR_OFFSET UNITYSDK_OFFSET(0x118D1010)

inline static constexpr unsigned int Class_3_5C4461B5B8810FC5_TypeDefinitionIndex = 48486;

class Class_3_5C4461B5B8810FC5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvTrackNpcLockAlert*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTrackNpcLockAlert* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTrackNpcLockAlert*))((::PBYTE)hIl2Cpp + CLASS_3_5C4461B5B8810FC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C4461B5B8810FC5_ONTASKBEGIN_OFFSET))(this);
	}
};
