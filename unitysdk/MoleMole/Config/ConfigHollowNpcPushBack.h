#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AE1972D98541A9AF.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Vector2Int.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWNPCPUSHBACK_GETPUSHINTERVAL_OFFSET UNITYSDK_OFFSET(0x1170A2D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWNPCPUSHBACK_GETPUSHSTARTDELAY_OFFSET UNITYSDK_OFFSET(0x1170A270)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWNPCPUSHBACK_GETSPRINGPUSHTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x1170A330)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWNPCPUSHBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1170A3B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowNpcPushBack_TypeDefinitionIndex = 42923;

	class ConfigHollowNpcPushBack : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single SpringPushStartDelay; // 0x58
		::System::Single SpringPushInterval; // 0x5C
		::System::Single SpringPushLogicStateDuration; // 0x60
		::System::String* SpringPushUpTriggerKey; // 0x68
		::System::String* SpringPushDownTriggerKey; // 0x70
		::System::String* SpringPushLeftTriggerKey; // 0x78
		::System::String* SpringPushRightTriggerKey; // 0x80
		::System::Single ConveyerBeltPushStartDelay; // 0x88
		::System::Single ConveyerBeltPushInterval; // 0x8C
		::System::String* PlayerOverlapTextureSheetKey; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWNPCPUSHBACK__CTOR_OFFSET))(this);
		}

		::System::Single GetPushStartDelay(::Enum_3_AE1972D98541A9AF type)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_AE1972D98541A9AF))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWNPCPUSHBACK_GETPUSHSTARTDELAY_OFFSET))(this, type);
		}

		::System::Single GetPushInterval(::Enum_3_AE1972D98541A9AF type)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_AE1972D98541A9AF))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWNPCPUSHBACK_GETPUSHINTERVAL_OFFSET))(this, type);
		}

		::System::String* GetSpringPushTriggerKey(::MoleMole::Vector2Int dir)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWNPCPUSHBACK_GETSPRINGPUSHTRIGGERKEY_OFFSET))(this, dir);
		}
	};
}
