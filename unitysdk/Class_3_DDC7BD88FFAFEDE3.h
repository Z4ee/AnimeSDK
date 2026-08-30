#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HipplenGameTriggerEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DDC7BD88FFAFEDE3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE6F7E0)
#define CLASS_3_DDC7BD88FFAFEDE3__CTOR_OFFSET UNITYSDK_OFFSET(0xBE6F7B0)

inline static constexpr unsigned int Class_3_DDC7BD88FFAFEDE3_TypeDefinitionIndex = 52557;

class Class_3_DDC7BD88FFAFEDE3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HipplenGameTriggerEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameTriggerEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameTriggerEvent*))((::PBYTE)hIl2Cpp + CLASS_3_DDC7BD88FFAFEDE3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDC7BD88FFAFEDE3_ONTASKBEGIN_OFFSET))(this);
	}
};
