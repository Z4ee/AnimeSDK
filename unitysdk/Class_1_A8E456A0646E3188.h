#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAnimatorStateListenerConfig; }

#define CLASS_1_A8E456A0646E3188_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C51A0B0)
#define CLASS_1_A8E456A0646E3188__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51A100)

inline static constexpr unsigned int Class_1_A8E456A0646E3188_TypeDefinitionIndex = 41651;

class Class_1_A8E456A0646E3188 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimAnimatorStateListenerConfig* EABKOHGCHFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8E456A0646E3188__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8E456A0646E3188_CLEAR_OFFSET))(this);
	}
};
