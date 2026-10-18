#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtFlagComponent_1.h"

#define CLASS_3_6974676991F6AE7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4B2C70)
#define CLASS_3_6974676991F6AE7F__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B2D20)
#define CLASS_3_6974676991F6AE7F__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xC4B2BC0)

inline static constexpr unsigned int Class_3_6974676991F6AE7F_TypeDefinitionIndex = 54030;

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
};
