#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_553B45D240052294.h"

namespace RPG::GameCore { class DamagePerformFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_138F689C22C0D375_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97AAE50)
#define CLASS_4_138F689C22C0D375__CTOR_OFFSET UNITYSDK_OFFSET(0x97AAE20)
#define CLASS_4_138F689C22C0D375___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97AAEF0)

inline static constexpr unsigned int Class_4_138F689C22C0D375_TypeDefinitionIndex = 51391;

class Class_4_138F689C22C0D375 : public ::Class_3_553B45D240052294
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamagePerformFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamagePerformFinish*))((::PBYTE)hIl2Cpp + CLASS_4_138F689C22C0D375__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_138F689C22C0D375_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_138F689C22C0D375___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
