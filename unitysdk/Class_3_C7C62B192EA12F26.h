#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class ElfFarmGameplayManager; }
namespace RPG::GameCore { class ElfFarmGameplayInit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C7C62B192EA12F26_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137AFE80)
#define CLASS_3_C7C62B192EA12F26_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x137AFEE0)
#define CLASS_3_C7C62B192EA12F26_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x137AFFE0)
#define CLASS_3_C7C62B192EA12F26__CTOR_OFFSET UNITYSDK_OFFSET(0x137AFE50)
#define CLASS_3_C7C62B192EA12F26___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137B0030)
#define CLASS_3_C7C62B192EA12F26___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x137B0090)

inline static constexpr unsigned int Class_3_C7C62B192EA12F26_TypeDefinitionIndex = 49335;

class Class_3_C7C62B192EA12F26 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ElfFarmGameplayInit*>
{
public:
	::RPG::GameCore::ElfFarmGameplayInit* Field_3_0; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30
	::RPG::Client::ElfFarmGameplayManager* Field_3_2; // 0x38

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
