#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableCharacterAttachmentSolverPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0F8E2425CEA94754_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92703D0)
#define CLASS_3_0F8E2425CEA94754__CTOR_OFFSET UNITYSDK_OFFSET(0x92703A0)

inline static constexpr unsigned int Class_3_0F8E2425CEA94754_TypeDefinitionIndex = 48674;

class Class_3_0F8E2425CEA94754 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableCharacterAttachmentSolverPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint*))((::PBYTE)hIl2Cpp + CLASS_3_0F8E2425CEA94754__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F8E2425CEA94754_ONTASKBEGIN_OFFSET))(this);
	}
};
