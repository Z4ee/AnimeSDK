#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class AdventureGameplayLock; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F02F2CBE74C5A0B1_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBCC8140)
#define CLASS_3_F02F2CBE74C5A0B1_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBCC8150)
#define CLASS_3_F02F2CBE74C5A0B1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCC7FE0)
#define CLASS_3_F02F2CBE74C5A0B1__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC7FB0)

inline static constexpr unsigned int Class_3_F02F2CBE74C5A0B1_TypeDefinitionIndex = 52996;

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
