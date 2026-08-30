#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByFormationIndex; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6DCD79AEABF41137_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA619A0)
#define CLASS_3_6DCD79AEABF41137__CTOR_OFFSET UNITYSDK_OFFSET(0xBA618C0)

inline static constexpr unsigned int Class_3_6DCD79AEABF41137_TypeDefinitionIndex = 55628;

class Class_3_6DCD79AEABF41137 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByFormationIndex*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByFormationIndex* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByFormationIndex*))((::PBYTE)hIl2Cpp + CLASS_3_6DCD79AEABF41137__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DCD79AEABF41137_ONTASKBEGIN_OFFSET))(this);
	}
};
