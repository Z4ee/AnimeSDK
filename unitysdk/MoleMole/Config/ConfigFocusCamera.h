#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Battle/FocusCameraTargetActivePolicy.h"

namespace MoleMole::Config { class ConfigFocusCameraEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLEAN_OFFSET UNITYSDK_OFFSET(0x1230B7D0)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1230B520)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1230B820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFocusCamera_TypeDefinitionIndex = 49503;

	class ConfigFocusCamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::MoleMole::Config::ConfigFocusCamera** StaticGet__config()
		{
			return (::MoleMole::Config::ConfigFocusCamera**)Il2CppClass::FromTypeDefinitionIndex(ConfigFocusCamera_TypeDefinitionIndex)->GetStaticField(0x3C3D0);
		}
		// static const ::System::String* Path; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFocusCameraEntry*>* focusCameraConfigMap; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::FocusCameraTargetActivePolicy, ::MoleMole::Config::ConfigFocusCameraEntry*>* typedFocusCameraConfigMap; // 0x60
		::MoleMole::Config::ConfigFocusCameraEntry* defaultFocusCameraEntry; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigFocusCamera* get_Instance()
		{
			return ((::MoleMole::Config::ConfigFocusCamera*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void Clean()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLEAN_OFFSET))();
		}
	};
}
