#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSetHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1B8C028E490BCE09_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFD6E30)
#define CLASS_3_1B8C028E490BCE09__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD6E00)

inline static constexpr unsigned int Class_3_1B8C028E490BCE09_TypeDefinitionIndex = 58496;

class Class_3_1B8C028E490BCE09 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetHP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetHP*))((::PBYTE)hIl2Cpp + CLASS_3_1B8C028E490BCE09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1B8C028E490BCE09_ONTASKBEGIN_OFFSET))(this);
	}
};
