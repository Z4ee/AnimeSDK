#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetFaceDirectionLocked; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7B38BC5B06B8CF85_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153CC3B0)
#define CLASS_3_7B38BC5B06B8CF85__CTOR_OFFSET UNITYSDK_OFFSET(0x153CC380)

inline static constexpr unsigned int Class_3_7B38BC5B06B8CF85_TypeDefinitionIndex = 55701;

class Class_3_7B38BC5B06B8CF85 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFaceDirectionLocked*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFaceDirectionLocked* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFaceDirectionLocked*))((::PBYTE)hIl2Cpp + CLASS_3_7B38BC5B06B8CF85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B38BC5B06B8CF85_ONTASKBEGIN_OFFSET))(this);
	}
};
