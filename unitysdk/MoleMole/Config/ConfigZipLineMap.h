#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigZipLineMap_CStringConfigZipLineDic; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINEMAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x170B8770)
#define MOLEMOLE_CONFIG_CONFIGZIPLINEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x170B86B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLineMap_TypeDefinitionIndex = 78719;

	class ConfigZipLineMap : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::String** StaticGet_DEFAULT_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConfigZipLineMap_TypeDefinitionIndex)->GetStaticField(0x31270);
		}
		::MoleMole::Config::ConfigZipLineMap_CStringConfigZipLineDic* zipLineConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINEMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINEMAP__CCTOR_OFFSET))();
		}
	};
}
