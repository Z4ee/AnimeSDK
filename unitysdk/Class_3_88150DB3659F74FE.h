#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPermanentEmotion; }

#define CLASS_3_88150DB3659F74FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12126470)
#define CLASS_3_88150DB3659F74FE__CTOR_OFFSET UNITYSDK_OFFSET(0x12126440)

inline static constexpr unsigned int Class_3_88150DB3659F74FE_TypeDefinitionIndex = 51558;

class Class_3_88150DB3659F74FE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerPermanentEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPermanentEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPermanentEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_88150DB3659F74FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_88150DB3659F74FE_ONTASKBEGIN_OFFSET))(this);
	}
};
