#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_4_EC5C27B86F3A2D8A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D3FF619E4EE06A5B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3B3070)
#define CLASS_3_D3FF619E4EE06A5B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3B30B0)
#define CLASS_3_D3FF619E4EE06A5B__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B3040)
#define CLASS_3_D3FF619E4EE06A5B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3B3200)

inline static constexpr unsigned int Class_3_D3FF619E4EE06A5B_TypeDefinitionIndex = 50387;

class Class_3_D3FF619E4EE06A5B : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_EC5C27B86F3A2D8A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_EC5C27B86F3A2D8A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_EC5C27B86F3A2D8A*))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B__CTOR_OFFSET))(this, a1, a2);
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
