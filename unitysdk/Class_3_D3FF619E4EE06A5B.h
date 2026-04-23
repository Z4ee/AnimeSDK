#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_4_9C54DFD9CF561B1B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D3FF619E4EE06A5B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4923F0)
#define CLASS_3_D3FF619E4EE06A5B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB492430)
#define CLASS_3_D3FF619E4EE06A5B__CTOR_OFFSET UNITYSDK_OFFSET(0xB4923C0)
#define CLASS_3_D3FF619E4EE06A5B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB492580)

inline static constexpr unsigned int Class_3_D3FF619E4EE06A5B_TypeDefinitionIndex = 49720;

class Class_3_D3FF619E4EE06A5B : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_9C54DFD9CF561B1B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_9C54DFD9CF561B1B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_9C54DFD9CF561B1B*))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
