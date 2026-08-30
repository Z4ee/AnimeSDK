#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class OpenTarotBookletPageForCharater; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C0551D44188C7DBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1996B9F0)
#define CLASS_3_C0551D44188C7DBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1996B9C0)

inline static constexpr unsigned int Class_3_C0551D44188C7DBE_TypeDefinitionIndex = 53587;

class Class_3_C0551D44188C7DBE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::OpenTarotBookletPageForCharater*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTarotBookletPageForCharater* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTarotBookletPageForCharater*))((::PBYTE)hIl2Cpp + CLASS_3_C0551D44188C7DBE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0551D44188C7DBE_ONTASKBEGIN_OFFSET))(this);
	}
};
