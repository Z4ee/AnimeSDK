#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtFlagComponent_1.h"

#define CLASS_3_6974676991F6AE7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2A3210)
#define CLASS_3_6974676991F6AE7F__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A32C0)
#define CLASS_3_6974676991F6AE7F__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB2A3160)
#define CLASS_3_6974676991F6AE7F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2A32F0)
#define CLASS_3_6974676991F6AE7F___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB2A32E0)

inline static constexpr unsigned int Class_3_6974676991F6AE7F_TypeDefinitionIndex = 50478;

class Class_3_6974676991F6AE7F : public ::RPG::GameCore::RtFlagComponent_1<::RPG::GameCore::RtBehaviorFlag>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6974676991F6AE7F__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6974676991F6AE7F__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6974676991F6AE7F_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6974676991F6AE7F___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6974676991F6AE7F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
