#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetCharacterCustomTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AEAF7BA8D25F8773_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F89760)
#define CLASS_3_AEAF7BA8D25F8773__CTOR_OFFSET UNITYSDK_OFFSET(0x16F89730)

inline static constexpr unsigned int Class_3_AEAF7BA8D25F8773_TypeDefinitionIndex = 52814;

class Class_3_AEAF7BA8D25F8773 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetCharacterCustomTeamFormation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetCharacterCustomTeamFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_3_AEAF7BA8D25F8773__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEAF7BA8D25F8773_ONTASKBEGIN_OFFSET))(this);
	}
};
