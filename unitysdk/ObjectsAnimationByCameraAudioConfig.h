#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class ObjectsAnimationByCamera_DriveAudioLayersForObject;
class ObjectsAnimationByCamera_TransformAudioConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBJECTSANIMATIONBYCAMERAAUDIOCONFIG_REFRESHEMITTERWORLDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x11CB4500)
#define OBJECTSANIMATIONBYCAMERAAUDIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB47F0)

inline static constexpr unsigned int ObjectsAnimationByCameraAudioConfig_TypeDefinitionIndex = 45789;

class ObjectsAnimationByCameraAudioConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::String* portalKey; // 0x18
	::System::Boolean portalEnabledOnEnter; // 0x20
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* transformAudioConfigs; // 0x28
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* driveAudioLayersByObject; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIOCONFIG__CTOR_OFFSET))(this);
	}

	::System::Void RefreshEmitterWorldPositions()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIOCONFIG_REFRESHEMITTERWORLDPOSITIONS_OFFSET))(this);
	}
};
