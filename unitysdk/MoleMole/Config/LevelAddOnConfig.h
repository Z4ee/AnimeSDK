#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_LEVELADDONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x157CD920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelAddOnConfig_TypeDefinitionIndex = 61182;

	class LevelAddOnConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		// static const ::System::String* LEVEL_ADDON_CONFIG_PATH; // 0x0
		::System::Boolean Deprecated; // 0x58
		::Il2CppArray<::System::String*>* allGraphs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELADDONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
