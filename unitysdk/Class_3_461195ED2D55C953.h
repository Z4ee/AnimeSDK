#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNode_1.h"

namespace System { class Action; }

#define CLASS_3_461195ED2D55C953_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x91CC530)
#define CLASS_3_461195ED2D55C953__CTOR_OFFSET UNITYSDK_OFFSET(0x91CC590)
#define CLASS_3_461195ED2D55C953___IFIXBASEPROXY_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x91CC5B0)

inline static constexpr unsigned int Class_3_461195ED2D55C953_TypeDefinitionIndex = 56311;

class Class_3_461195ED2D55C953 : public ::RPG::Client::WorkNode_1<::System::Action*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_461195ED2D55C953__CTOR_OFFSET))(this);
	}

	::System::Void OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_461195ED2D55C953_ONSTARTLOADING_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_461195ED2D55C953___IFIXBASEPROXY_ONSTARTLOADING_OFFSET))(this);
	}
};
