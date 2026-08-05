#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class SlideRopeCameraLockConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x172AF350)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x172AFC00)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x172AF550)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x172AFDF0)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x172AFD10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSlideRopeLockCamera_TypeDefinitionIndex = 49396;

	class ConfigSlideRopeLockCamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SlideRopeCameraLockConfig*>** StaticGet__dicRuntimeCameraConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SlideRopeCameraLockConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSlideRopeLockCamera_TypeDefinitionIndex)->GetStaticField(0x3F6B0);
		}
		// static const ::System::String* DEFAULT_KEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SlideRopeCameraLockConfig*>* DicCameraConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA__CCTOR_OFFSET))();
		}

		static ::MoleMole::Config::SlideRopeCameraLockConfig* GetConfig(::System::String* key)
		{
			return ((::MoleMole::Config::SlideRopeCameraLockConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA_GETCONFIG_OFFSET))(key);
		}

		static ::System::Void ReloadFromFile(::System::Boolean isAsync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA_RELOADFROMFILE_OFFSET))(isAsync, complete);
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}
	};
}
