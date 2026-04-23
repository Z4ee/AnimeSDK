#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockPhotoIdentifyHint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A0E00D7A103D4DA4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96114C0)
#define CLASS_3_A0E00D7A103D4DA4__CTOR_OFFSET UNITYSDK_OFFSET(0x9611490)

inline static constexpr unsigned int Class_3_A0E00D7A103D4DA4_TypeDefinitionIndex = 48863;

class Class_3_A0E00D7A103D4DA4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockPhotoIdentifyHint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockPhotoIdentifyHint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockPhotoIdentifyHint*))((::PBYTE)hIl2Cpp + CLASS_3_A0E00D7A103D4DA4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0E00D7A103D4DA4_ONTASKBEGIN_OFFSET))(this);
	}
};
