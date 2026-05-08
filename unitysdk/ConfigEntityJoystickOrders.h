#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

class ConfigEntityJoystickOrder;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CONFIGENTITYJOYSTICKORDERS__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB08B0)

inline static constexpr unsigned int ConfigEntityJoystickOrders_TypeDefinitionIndex = 50855;

class ConfigEntityJoystickOrders : public ::Foundation::MihoyoSerializedScriptableObject
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::ConfigEntityJoystickOrder*>* joystickOrders; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGENTITYJOYSTICKORDERS__CTOR_OFFSET))(this);
	}
};
