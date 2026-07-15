#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HipplenGameCharacterAttachToMini; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DDBB2945AECBDE99_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15646080)
#define CLASS_3_DDBB2945AECBDE99__CTOR_OFFSET UNITYSDK_OFFSET(0x15646050)

inline static constexpr unsigned int Class_3_DDBB2945AECBDE99_TypeDefinitionIndex = 49894;

class Class_3_DDBB2945AECBDE99 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HipplenGameCharacterAttachToMini*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameCharacterAttachToMini* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameCharacterAttachToMini*))((::PBYTE)hIl2Cpp + CLASS_3_DDBB2945AECBDE99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDBB2945AECBDE99_ONTASKBEGIN_OFFSET))(this);
	}
};
