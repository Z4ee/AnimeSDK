#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4731938B2D368B8A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFIGENTITYJOYSTICKORDER_CHECKMATCH_OFFSET UNITYSDK_OFFSET(0x1644F8F0)
#define CONFIGENTITYJOYSTICKORDER_HANDLETARGETANGLE_OFFSET UNITYSDK_OFFSET(0x1644FC40)
#define CONFIGENTITYJOYSTICKORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1644FCC0)

inline static constexpr unsigned int ConfigEntityJoystickOrder_TypeDefinitionIndex = 79184;

class ConfigEntityJoystickOrder : public ::System::Object
{
public:
	::System::String* TriggerName; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* AngleList; // 0x18
	::System::Int32 CheckFrame; // 0x20
	::System::Int32 OneCheckFrameCount; // 0x24
	::System::Single AngleErrorRange; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGENTITYJOYSTICKORDER__CTOR_OFFSET))(this);
	}

	::System::Boolean CheckMatch(::Class_1_4731938B2D368B8A* toCheckOrders)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4731938B2D368B8A*))((::PBYTE)hIl2Cpp + CONFIGENTITYJOYSTICKORDER_CHECKMATCH_OFFSET))(this, toCheckOrders);
	}

	::System::Single HandleTargetAngle(::System::Single angle)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CONFIGENTITYJOYSTICKORDER_HANDLETARGETANGLE_OFFSET))(this, angle);
	}
};
