#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class ElfFarmGameplayManager; }
namespace RPG::GameCore { class ElfFarmGameplayInit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C7C62B192EA12F26_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123705E0)
#define CLASS_3_C7C62B192EA12F26_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12370640)
#define CLASS_3_C7C62B192EA12F26_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12370740)
#define CLASS_3_C7C62B192EA12F26__CTOR_OFFSET UNITYSDK_OFFSET(0x123705B0)
#define CLASS_3_C7C62B192EA12F26___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12370790)
#define CLASS_3_C7C62B192EA12F26___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x123707F0)

inline static constexpr unsigned int Class_3_C7C62B192EA12F26_TypeDefinitionIndex = 48670;

class Class_3_C7C62B192EA12F26 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ElfFarmGameplayInit*>
{
public:
	::RPG::GameCore::ElfFarmGameplayInit* Field_3_1; // 0x28
	::RPG::Client::ElfFarmGameplayManager* Field_3_0; // 0x30
	::RPG::GameCore::TaskContext* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfFarmGameplayInit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfFarmGameplayInit*))((::PBYTE)hIl2Cpp + CLASS_3_C7C62B192EA12F26__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C62B192EA12F26_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C62B192EA12F26_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C62B192EA12F26_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C62B192EA12F26___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C62B192EA12F26___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
