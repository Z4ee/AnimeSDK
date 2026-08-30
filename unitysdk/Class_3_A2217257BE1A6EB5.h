#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopAnimatorLayerEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A2217257BE1A6EB5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160FD4E0)
#define CLASS_3_A2217257BE1A6EB5__CTOR_OFFSET UNITYSDK_OFFSET(0x160FD4B0)

inline static constexpr unsigned int Class_3_A2217257BE1A6EB5_TypeDefinitionIndex = 56088;

class Class_3_A2217257BE1A6EB5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopAnimatorLayerEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopAnimatorLayerEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopAnimatorLayerEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_A2217257BE1A6EB5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A2217257BE1A6EB5_ONTASKBEGIN_OFFSET))(this);
	}
};
