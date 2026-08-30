#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TakePhoto; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E6036AAB54708AB6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x192839D0)
#define CLASS_3_E6036AAB54708AB6__CTOR_OFFSET UNITYSDK_OFFSET(0x192839A0)

inline static constexpr unsigned int Class_3_E6036AAB54708AB6_TypeDefinitionIndex = 53584;

class Class_3_E6036AAB54708AB6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TakePhoto*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TakePhoto* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TakePhoto*))((::PBYTE)hIl2Cpp + CLASS_3_E6036AAB54708AB6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6036AAB54708AB6_ONTASKBEGIN_OFFSET))(this);
	}
};
