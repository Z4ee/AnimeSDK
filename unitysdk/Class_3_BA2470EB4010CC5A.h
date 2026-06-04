#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNode_1.h"

namespace System { class Action; }

#define CLASS_3_BA2470EB4010CC5A_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x13878180)
#define CLASS_3_BA2470EB4010CC5A__CTOR_OFFSET UNITYSDK_OFFSET(0x138781E0)
#define CLASS_3_BA2470EB4010CC5A___IFIXBASEPROXY_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x13878200)

inline static constexpr unsigned int Class_3_BA2470EB4010CC5A_TypeDefinitionIndex = 57073;

class Class_3_BA2470EB4010CC5A : public ::RPG::Client::WorkNode_1<::System::Action*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA2470EB4010CC5A__CTOR_OFFSET))(this);
	}

	::System::Void OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA2470EB4010CC5A_ONSTARTLOADING_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA2470EB4010CC5A___IFIXBASEPROXY_ONSTARTLOADING_OFFSET))(this);
	}
};
