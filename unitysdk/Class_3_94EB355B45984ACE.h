#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ElfRestaurantPauseGame; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_94EB355B45984ACE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x922C550)
#define CLASS_3_94EB355B45984ACE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x922C310)
#define CLASS_3_94EB355B45984ACE__CTOR_OFFSET UNITYSDK_OFFSET(0x922C2E0)
#define CLASS_3_94EB355B45984ACE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x922C700)

inline static constexpr unsigned int Class_3_94EB355B45984ACE_TypeDefinitionIndex = 48671;

class Class_3_94EB355B45984ACE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ElfRestaurantPauseGame*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfRestaurantPauseGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfRestaurantPauseGame*))((::PBYTE)hIl2Cpp + CLASS_3_94EB355B45984ACE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_94EB355B45984ACE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_94EB355B45984ACE_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_94EB355B45984ACE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
