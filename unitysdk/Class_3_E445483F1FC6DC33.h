#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CameraFollowEntityTimeScale; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E445483F1FC6DC33_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B5B650)
#define CLASS_3_E445483F1FC6DC33__CTOR_OFFSET UNITYSDK_OFFSET(0x8B5B620)

inline static constexpr unsigned int Class_3_E445483F1FC6DC33_TypeDefinitionIndex = 43946;

class Class_3_E445483F1FC6DC33 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CameraFollowEntityTimeScale*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CameraFollowEntityTimeScale* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CameraFollowEntityTimeScale*))((::PBYTE)hIl2Cpp + CLASS_3_E445483F1FC6DC33__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E445483F1FC6DC33_ONTASKBEGIN_OFFSET))(this);
	}
};
