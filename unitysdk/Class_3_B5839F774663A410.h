#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBossHPStanceChangeType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B5839F774663A410_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12850410)
#define CLASS_3_B5839F774663A410__CTOR_OFFSET UNITYSDK_OFFSET(0x128503E0)

inline static constexpr unsigned int Class_3_B5839F774663A410_TypeDefinitionIndex = 55558;

class Class_3_B5839F774663A410 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBossHPStanceChangeType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBossHPStanceChangeType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBossHPStanceChangeType*))((::PBYTE)hIl2Cpp + CLASS_3_B5839F774663A410__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5839F774663A410_ONTASKBEGIN_OFFSET))(this);
	}
};
