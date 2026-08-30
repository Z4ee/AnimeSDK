#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopPermanentEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A6EFFD566A5A451C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CB7400)
#define CLASS_3_A6EFFD566A5A451C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB73D0)

inline static constexpr unsigned int Class_3_A6EFFD566A5A451C_TypeDefinitionIndex = 56090;

class Class_3_A6EFFD566A5A451C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopPermanentEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopPermanentEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopPermanentEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_A6EFFD566A5A451C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EFFD566A5A451C_ONTASKBEGIN_OFFSET))(this);
	}
};
