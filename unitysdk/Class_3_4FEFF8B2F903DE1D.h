#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayerSelectMotionMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4FEFF8B2F903DE1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB324F0)
#define CLASS_3_4FEFF8B2F903DE1D__CTOR_OFFSET UNITYSDK_OFFSET(0xAB324C0)

inline static constexpr unsigned int Class_3_4FEFF8B2F903DE1D_TypeDefinitionIndex = 54488;

class Class_3_4FEFF8B2F903DE1D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayerSelectMotionMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerSelectMotionMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerSelectMotionMode*))((::PBYTE)hIl2Cpp + CLASS_3_4FEFF8B2F903DE1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FEFF8B2F903DE1D_ONTASKBEGIN_OFFSET))(this);
	}
};
