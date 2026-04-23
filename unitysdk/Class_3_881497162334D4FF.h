#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtFlagComponent_1.h"

#define CLASS_3_881497162334D4FF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBACE550)
#define CLASS_3_881497162334D4FF__CTOR_OFFSET UNITYSDK_OFFSET(0xBACE600)
#define CLASS_3_881497162334D4FF__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xBACE4A0)
#define CLASS_3_881497162334D4FF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBACE630)
#define CLASS_3_881497162334D4FF___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xBACE620)

inline static constexpr unsigned int Class_3_881497162334D4FF_TypeDefinitionIndex = 49811;

class Class_3_881497162334D4FF : public ::RPG::GameCore::RtFlagComponent_1<::RPG::GameCore::RtBehaviorFlag>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_881497162334D4FF__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_881497162334D4FF__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_881497162334D4FF_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_881497162334D4FF___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_881497162334D4FF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
