#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableFreelookCameraDragMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C36B7CE4B70A0051_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14690010)
#define CLASS_3_C36B7CE4B70A0051__CTOR_OFFSET UNITYSDK_OFFSET(0x1468FFE0)

inline static constexpr unsigned int Class_3_C36B7CE4B70A0051_TypeDefinitionIndex = 55527;

class Class_3_C36B7CE4B70A0051 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableFreelookCameraDragMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableFreelookCameraDragMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableFreelookCameraDragMode*))((::PBYTE)hIl2Cpp + CLASS_3_C36B7CE4B70A0051__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C36B7CE4B70A0051_ONTASKBEGIN_OFFSET))(this);
	}
};
