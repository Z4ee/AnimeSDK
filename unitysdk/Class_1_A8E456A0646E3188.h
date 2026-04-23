#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAnimatorStateListenerConfig; }

#define CLASS_1_A8E456A0646E3188_CLEAR_OFFSET UNITYSDK_OFFSET(0x180A6E10)
#define CLASS_1_A8E456A0646E3188__CTOR_OFFSET UNITYSDK_OFFSET(0x180A6E60)

inline static constexpr unsigned int Class_1_A8E456A0646E3188_TypeDefinitionIndex = 39117;

class Class_1_A8E456A0646E3188 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimAnimatorStateListenerConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8E456A0646E3188__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8E456A0646E3188_CLEAR_OFFSET))(this);
	}
};
