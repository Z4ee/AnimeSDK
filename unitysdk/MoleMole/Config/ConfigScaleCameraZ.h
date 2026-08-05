#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigScaleCameraZPattern; }

#define MOLEMOLE_CONFIG_CONFIGSCALECAMERAZ__CTOR_OFFSET UNITYSDK_OFFSET(0x1170B510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigScaleCameraZ_TypeDefinitionIndex = 72261;

	class ConfigScaleCameraZ : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::Config::ConfigScaleCameraZPattern*>* ScalePatterns; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSCALECAMERAZ__CTOR_OFFSET))(this);
		}
	};
}
