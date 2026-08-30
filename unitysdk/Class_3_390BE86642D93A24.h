#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvCharacterSetMotionBlendTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_390BE86642D93A24_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C75590)
#define CLASS_3_390BE86642D93A24__CTOR_OFFSET UNITYSDK_OFFSET(0x15C75560)

inline static constexpr unsigned int Class_3_390BE86642D93A24_TypeDefinitionIndex = 52614;

class Class_3_390BE86642D93A24 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvCharacterSetMotionBlendTime*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCharacterSetMotionBlendTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCharacterSetMotionBlendTime*))((::PBYTE)hIl2Cpp + CLASS_3_390BE86642D93A24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_390BE86642D93A24_ONTASKBEGIN_OFFSET))(this);
	}
};
