#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnLockCamera; }

#define CLASS_3_C7C492BDD60692E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195C1DA0)
#define CLASS_3_C7C492BDD60692E1_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x195C1D90)
#define CLASS_3_C7C492BDD60692E1_METHOD_3_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x195C1E40)
#define CLASS_3_C7C492BDD60692E1_ONSKIP_OFFSET UNITYSDK_OFFSET(0x195C1DE0)
#define CLASS_3_C7C492BDD60692E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x195C1EE0)
#define CLASS_3_C7C492BDD60692E1__CTOR_OFFSET UNITYSDK_OFFSET(0x195C1D60)

inline static constexpr unsigned int Class_3_C7C492BDD60692E1_TypeDefinitionIndex = 53714;

class Class_3_C7C492BDD60692E1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UnLockCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnLockCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnLockCamera*))((::PBYTE)hIl2Cpp + CLASS_3_C7C492BDD60692E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C492BDD60692E1_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C492BDD60692E1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C492BDD60692E1_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C492BDD60692E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C492BDD60692E1_METHOD_3_7223CD34BEFCBF48_OFFSET))(this);
	}
};
