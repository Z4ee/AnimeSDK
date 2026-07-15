#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class AdventureGameplayLock; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F02F2CBE74C5A0B1_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x13A45870)
#define CLASS_3_F02F2CBE74C5A0B1_ONSKIP_OFFSET UNITYSDK_OFFSET(0x13A45880)
#define CLASS_3_F02F2CBE74C5A0B1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A45710)
#define CLASS_3_F02F2CBE74C5A0B1__CTOR_OFFSET UNITYSDK_OFFSET(0x13A456E0)

inline static constexpr unsigned int Class_3_F02F2CBE74C5A0B1_TypeDefinitionIndex = 50333;

class Class_3_F02F2CBE74C5A0B1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::AdventureGameplayLock*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::AdventureGameplayLock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::AdventureGameplayLock*))((::PBYTE)hIl2Cpp + CLASS_3_F02F2CBE74C5A0B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F02F2CBE74C5A0B1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F02F2CBE74C5A0B1_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F02F2CBE74C5A0B1_ONSKIP_OFFSET))(this);
	}
};
