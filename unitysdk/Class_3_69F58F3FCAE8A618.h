#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModelShake; }

#define CLASS_3_69F58F3FCAE8A618_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14151740)
#define CLASS_3_69F58F3FCAE8A618__CTOR_OFFSET UNITYSDK_OFFSET(0x14151710)

inline static constexpr unsigned int Class_3_69F58F3FCAE8A618_TypeDefinitionIndex = 52062;

class Class_3_69F58F3FCAE8A618 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerModelShake*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModelShake* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModelShake*))((::PBYTE)hIl2Cpp + CLASS_3_69F58F3FCAE8A618__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69F58F3FCAE8A618_ONTASKBEGIN_OFFSET))(this);
	}
};
