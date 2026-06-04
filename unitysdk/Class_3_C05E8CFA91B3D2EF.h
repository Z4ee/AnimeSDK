#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAvatarDepart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C05E8CFA91B3D2EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144E9D90)
#define CLASS_3_C05E8CFA91B3D2EF__CTOR_OFFSET UNITYSDK_OFFSET(0x144E9D60)

inline static constexpr unsigned int Class_3_C05E8CFA91B3D2EF_TypeDefinitionIndex = 51701;

class Class_3_C05E8CFA91B3D2EF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAvatarDepart*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAvatarDepart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAvatarDepart*))((::PBYTE)hIl2Cpp + CLASS_3_C05E8CFA91B3D2EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C05E8CFA91B3D2EF_ONTASKBEGIN_OFFSET))(this);
	}
};
