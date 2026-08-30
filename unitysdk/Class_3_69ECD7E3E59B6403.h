#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvRemoveAIHangUpInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_69ECD7E3E59B6403_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E0BA80)
#define CLASS_3_69ECD7E3E59B6403__CTOR_OFFSET UNITYSDK_OFFSET(0x17E0BA50)

inline static constexpr unsigned int Class_3_69ECD7E3E59B6403_TypeDefinitionIndex = 52755;

class Class_3_69ECD7E3E59B6403 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvRemoveAIHangUpInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRemoveAIHangUpInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRemoveAIHangUpInfo*))((::PBYTE)hIl2Cpp + CLASS_3_69ECD7E3E59B6403__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69ECD7E3E59B6403_ONTASKBEGIN_OFFSET))(this);
	}
};
