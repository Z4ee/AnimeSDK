#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1170AD30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertySettings_TypeDefinitionIndex = 57776;

	class ConfigMaterialPropertySettings : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::MoleMole::Config::MatPropertySetting>* QuaConfigs; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::String*>* AvatarShaderReplaceConfig; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Material*>* AvatarShaderReplaceByMatConfig; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
