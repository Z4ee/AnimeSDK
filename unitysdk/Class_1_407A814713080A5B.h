#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }

#define CLASS_1_407A814713080A5B_METHOD_1_105379C838F16E5E_OFFSET UNITYSDK_OFFSET(0x15DF9080)
#define CLASS_1_407A814713080A5B_METHOD_1_2C84E1A76074F485_OFFSET UNITYSDK_OFFSET(0x15DF91A0)
#define CLASS_1_407A814713080A5B_METHOD_1_3E81B089F141D6EC_OFFSET UNITYSDK_OFFSET(0x15DF90F0)

inline static constexpr unsigned int Class_1_407A814713080A5B_TypeDefinitionIndex = 71188;

class Class_1_407A814713080A5B : public ::System::Object
{
public:
	static ::System::Boolean Method_1_105379C838F16E5E(::Class_1_DDDB57AA67C3A9EA* a1, ::System::Nullable_1<::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::Class_1_DDDB57AA67C3A9EA*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_407A814713080A5B_METHOD_1_105379C838F16E5E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3E81B089F141D6EC(::Class_1_DDDB57AA67C3A9EA* a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Boolean(*)(::Class_1_DDDB57AA67C3A9EA*, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_407A814713080A5B_METHOD_1_3E81B089F141D6EC_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::ActionDelayChangeReason Method_1_2C84E1A76074F485(::RPG::GameCore::ActionDelayPreshowConfig* a1)
	{
		return ((::RPG::GameCore::ActionDelayChangeReason(*)(::RPG::GameCore::ActionDelayPreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_1_407A814713080A5B_METHOD_1_2C84E1A76074F485_OFFSET))(a1);
	}
};
