#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetNpcMonsterVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E84DCDE0F03E1C4B_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x14D005B0)
#define CLASS_3_E84DCDE0F03E1C4B_METHOD_3_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x14D00430)
#define CLASS_3_E84DCDE0F03E1C4B_ONSKIP_OFFSET UNITYSDK_OFFSET(0x14D005C0)
#define CLASS_3_E84DCDE0F03E1C4B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14D003E0)
#define CLASS_3_E84DCDE0F03E1C4B__CTOR_OFFSET UNITYSDK_OFFSET(0x14D003B0)

inline static constexpr unsigned int Class_3_E84DCDE0F03E1C4B_TypeDefinitionIndex = 55939;

class Class_3_E84DCDE0F03E1C4B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetNpcMonsterVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNpcMonsterVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNpcMonsterVisible*))((::PBYTE)hIl2Cpp + CLASS_3_E84DCDE0F03E1C4B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84DCDE0F03E1C4B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84DCDE0F03E1C4B_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84DCDE0F03E1C4B_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_3_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E84DCDE0F03E1C4B_METHOD_3_749948B663FCCCEF_OFFSET))(this);
	}
};
