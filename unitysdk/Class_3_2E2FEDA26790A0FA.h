#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RandomSelectMuseumStuff; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2E2FEDA26790A0FA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9AD6D0)
#define CLASS_3_2E2FEDA26790A0FA__CTOR_OFFSET UNITYSDK_OFFSET(0xA9AD6A0)

inline static constexpr unsigned int Class_3_2E2FEDA26790A0FA_TypeDefinitionIndex = 49715;

class Class_3_2E2FEDA26790A0FA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RandomSelectMuseumStuff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectMuseumStuff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectMuseumStuff*))((::PBYTE)hIl2Cpp + CLASS_3_2E2FEDA26790A0FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E2FEDA26790A0FA_ONTASKBEGIN_OFFSET))(this);
	}
};
