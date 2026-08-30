#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DisableRogueTitanBless; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EBC9ADB9A0939E64_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF8F0A0)
#define CLASS_3_EBC9ADB9A0939E64__CTOR_OFFSET UNITYSDK_OFFSET(0xBF8F070)

inline static constexpr unsigned int Class_3_EBC9ADB9A0939E64_TypeDefinitionIndex = 55211;

class Class_3_EBC9ADB9A0939E64 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DisableRogueTitanBless*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableRogueTitanBless* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableRogueTitanBless*))((::PBYTE)hIl2Cpp + CLASS_3_EBC9ADB9A0939E64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBC9ADB9A0939E64_ONTASKBEGIN_OFFSET))(this);
	}
};
