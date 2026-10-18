#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetUltraSkillAssetPreload; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_01DBDE2AF88A3F73_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC75DFD0)
#define CLASS_3_01DBDE2AF88A3F73_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC75E010)
#define CLASS_3_01DBDE2AF88A3F73__CTOR_OFFSET UNITYSDK_OFFSET(0xC75DFA0)

inline static constexpr unsigned int Class_3_01DBDE2AF88A3F73_TypeDefinitionIndex = 55584;

class Class_3_01DBDE2AF88A3F73 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetUltraSkillAssetPreload*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUltraSkillAssetPreload* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUltraSkillAssetPreload*))((::PBYTE)hIl2Cpp + CLASS_3_01DBDE2AF88A3F73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01DBDE2AF88A3F73_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01DBDE2AF88A3F73_ONTASKBEGIN_OFFSET))(this);
	}
};
