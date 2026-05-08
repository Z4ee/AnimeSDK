#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS_KEYVALUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xF979CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraLockTargetDatas_KeyValueInfo_TypeDefinitionIndex = 55661;

	class ConfigCameraLockTargetDatas_KeyValueInfo : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::System::String* valueType; // 0x18
		::System::String* valueInst; // 0x20

		::System::Void _ctor(::System::String* _keyInst, ::System::String* _valueType, ::System::String* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS_KEYVALUEINFO__CTOR_OFFSET))(this, _keyInst, _valueType, _valueInst);
		}
	};
}
