#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByEvolveBuild; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0FCB51AB7021564E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA59FB0)
#define CLASS_3_0FCB51AB7021564E__CTOR_OFFSET UNITYSDK_OFFSET(0xBA59ED0)

inline static constexpr unsigned int Class_3_0FCB51AB7021564E_TypeDefinitionIndex = 55624;

class Class_3_0FCB51AB7021564E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByEvolveBuild*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByEvolveBuild* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByEvolveBuild*))((::PBYTE)hIl2Cpp + CLASS_3_0FCB51AB7021564E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FCB51AB7021564E_ONTASKBEGIN_OFFSET))(this);
	}
};
