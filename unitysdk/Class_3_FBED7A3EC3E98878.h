#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WaveFloatingProxy;

#define CLASS_3_FBED7A3EC3E98878_METHOD_3_CD1693487E759624_OFFSET UNITYSDK_OFFSET(0x19130990)
#define CLASS_3_FBED7A3EC3E98878_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x19130830)
#define CLASS_3_FBED7A3EC3E98878__CTOR_OFFSET UNITYSDK_OFFSET(0x19130A80)

inline static constexpr unsigned int Class_3_FBED7A3EC3E98878_TypeDefinitionIndex = 47950;

class Class_3_FBED7A3EC3E98878 : public ::RPG::Client::TABehaviorBase
{
public:
	::WaveFloatingProxy* DILGJEAEKGL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBED7A3EC3E98878__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBED7A3EC3E98878_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_3_CD1693487E759624()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBED7A3EC3E98878_METHOD_3_CD1693487E759624_OFFSET))(this);
	}
};
