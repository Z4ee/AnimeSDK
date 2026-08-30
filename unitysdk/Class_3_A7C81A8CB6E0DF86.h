#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ActionCountDownPreview; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A7C81A8CB6E0DF86_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC438FF0)
#define CLASS_3_A7C81A8CB6E0DF86__CTOR_OFFSET UNITYSDK_OFFSET(0xC438FC0)

inline static constexpr unsigned int Class_3_A7C81A8CB6E0DF86_TypeDefinitionIndex = 55007;

class Class_3_A7C81A8CB6E0DF86 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActionCountDownPreview*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActionCountDownPreview* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActionCountDownPreview*))((::PBYTE)hIl2Cpp + CLASS_3_A7C81A8CB6E0DF86__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A7C81A8CB6E0DF86_ONTASKBEGIN_OFFSET))(this);
	}
};
