#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CreateAirline; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0E2AAD0F6FD5FD4A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179D90F0)
#define CLASS_3_0E2AAD0F6FD5FD4A__CTOR_OFFSET UNITYSDK_OFFSET(0x179D90C0)

inline static constexpr unsigned int Class_3_0E2AAD0F6FD5FD4A_TypeDefinitionIndex = 55458;

class Class_3_0E2AAD0F6FD5FD4A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateAirline*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateAirline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateAirline*))((::PBYTE)hIl2Cpp + CLASS_3_0E2AAD0F6FD5FD4A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E2AAD0F6FD5FD4A_ONTASKBEGIN_OFFSET))(this);
	}
};
