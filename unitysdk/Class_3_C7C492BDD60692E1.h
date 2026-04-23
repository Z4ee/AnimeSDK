#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnLockCamera; }

#define CLASS_3_C7C492BDD60692E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129E6400)
#define CLASS_3_C7C492BDD60692E1_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x129E63F0)
#define CLASS_3_C7C492BDD60692E1_METHOD_3_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x129E64A0)
#define CLASS_3_C7C492BDD60692E1_ONSKIP_OFFSET UNITYSDK_OFFSET(0x129E6440)
#define CLASS_3_C7C492BDD60692E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x129E6540)
#define CLASS_3_C7C492BDD60692E1__CTOR_OFFSET UNITYSDK_OFFSET(0x129E63C0)
#define CLASS_3_C7C492BDD60692E1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129E6590)

inline static constexpr unsigned int Class_3_C7C492BDD60692E1_TypeDefinitionIndex = 49286;

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

	::System::Void Method_3_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C492BDD60692E1_METHOD_3_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7C492BDD60692E1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
