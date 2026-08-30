#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveSelfModifier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7669BA77C1B80F0A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19BD6510)
#define CLASS_3_7669BA77C1B80F0A__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD64E0)

inline static constexpr unsigned int Class_3_7669BA77C1B80F0A_TypeDefinitionIndex = 55512;

class Class_3_7669BA77C1B80F0A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveSelfModifier*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveSelfModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveSelfModifier*))((::PBYTE)hIl2Cpp + CLASS_3_7669BA77C1B80F0A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7669BA77C1B80F0A_ONTASKBEGIN_OFFSET))(this);
	}
};
