#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class SlideRopeCameraConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x19FEF8B0)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x19FF0160)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x19FEFAB0)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF0350)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF0270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSlideRopeCamera_TypeDefinitionIndex = 51926;

	class ConfigSlideRopeCamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SlideRopeCameraConfig*>** StaticGet__dicRuntimeSlideRopeCameraConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SlideRopeCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSlideRopeCamera_TypeDefinitionIndex)->GetStaticField(0x3E960);
		}
		// static const ::System::String* DEFAULT_KEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SlideRopeCameraConfig*>* DicSlideRopeCameraConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA__CCTOR_OFFSET))();
		}

		static ::MoleMole::Config::SlideRopeCameraConfig* GetConfig(::System::String* key)
		{
			return ((::MoleMole::Config::SlideRopeCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA_GETCONFIG_OFFSET))(key);
		}

		static ::System::Void ReloadFromFile(::System::Boolean isAsync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA_RELOADFROMFILE_OFFSET))(isAsync, complete);
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPECAMERA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}
	};
}
