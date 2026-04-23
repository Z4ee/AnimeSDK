#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ReleaseCharacterHUDVisibleControl; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A76B9B87892FED82_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA07B0F0)
#define CLASS_3_A76B9B87892FED82__CTOR_OFFSET UNITYSDK_OFFSET(0xA07B0C0)

inline static constexpr unsigned int Class_3_A76B9B87892FED82_TypeDefinitionIndex = 50981;

class Class_3_A76B9B87892FED82 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ReleaseCharacterHUDVisibleControl*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseCharacterHUDVisibleControl*))((::PBYTE)hIl2Cpp + CLASS_3_A76B9B87892FED82__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A76B9B87892FED82_ONTASKBEGIN_OFFSET))(this);
	}
};
