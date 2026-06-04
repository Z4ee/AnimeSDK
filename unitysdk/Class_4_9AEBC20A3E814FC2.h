#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_61191923565A3FB2.h"

namespace RPG::GameCore { class SetAttachmentVisibilityForUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_9AEBC20A3E814FC2__CTOR_OFFSET UNITYSDK_OFFSET(0x144E0FC0)

inline static constexpr unsigned int Class_4_9AEBC20A3E814FC2_TypeDefinitionIndex = 52209;

class Class_4_9AEBC20A3E814FC2 : public ::Class_3_61191923565A3FB2
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAttachmentVisibilityForUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAttachmentVisibilityForUI*))((::PBYTE)hIl2Cpp + CLASS_4_9AEBC20A3E814FC2__CTOR_OFFSET))(this, a1, a2);
	}
};
