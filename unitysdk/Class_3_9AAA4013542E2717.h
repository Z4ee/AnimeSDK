#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class InitGridFightStatisticsBinding; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9AAA4013542E2717_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11649840)
#define CLASS_3_9AAA4013542E2717_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11649720)
#define CLASS_3_9AAA4013542E2717__CTOR_OFFSET UNITYSDK_OFFSET(0x11649690)
#define CLASS_3_9AAA4013542E2717___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116498B0)

inline static constexpr unsigned int Class_3_9AAA4013542E2717_TypeDefinitionIndex = 44119;

class Class_3_9AAA4013542E2717 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InitGridFightStatisticsBinding*>
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitGridFightStatisticsBinding* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitGridFightStatisticsBinding*))((::PBYTE)hIl2Cpp + CLASS_3_9AAA4013542E2717__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AAA4013542E2717_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AAA4013542E2717_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AAA4013542E2717___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
