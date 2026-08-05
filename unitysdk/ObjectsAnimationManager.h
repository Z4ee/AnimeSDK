#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1A07023AFF917E15.h"
#include "unitysdk/MoleMole/NapLevel_MonoSceneAnimationHandler.h"

class ObjectsAnimationByCameraWithKey;
namespace MoleMole { class SceneObjectCaptureMono; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBJECTSANIMATIONMANAGER_FINDTARGETBYKEY_OFFSET UNITYSDK_OFFSET(0x1214D030)
#define OBJECTSANIMATIONMANAGER_ONSCENEANIMATIONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1214D730)
#define OBJECTSANIMATIONMANAGER_ONSCENEANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0x1214CDD0)
#define OBJECTSANIMATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1214D8B0)
#define OBJECTSANIMATIONMANAGER___BASE_ONSCENEANIMATIONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1214D990)
#define OBJECTSANIMATIONMANAGER___BASE_ONSCENEANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0x1214DA20)

inline static constexpr unsigned int ObjectsAnimationManager_TypeDefinitionIndex = 84611;

class ObjectsAnimationManager : public ::MoleMole::NapLevel_MonoSceneAnimationHandler
{
public:
	::MoleMole::SceneObjectCaptureMono* _capture; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::ObjectsAnimationByCameraWithKey*>* _cache; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONMANAGER__CTOR_OFFSET))(this);
	}

	::Enum_3_1A07023AFF917E15 OnSceneAnimationPlay(::System::String* sceneDynamicKey, ::System::Int32 animationStartFrame, ::System::Int32 animationStopFrame, ::System::Boolean isLoop, ::System::Boolean isResume)
	{
		return ((::Enum_3_1A07023AFF917E15(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONMANAGER_ONSCENEANIMATIONPLAY_OFFSET))(this, sceneDynamicKey, animationStartFrame, animationStopFrame, isLoop, isResume);
	}

	::Enum_3_1A07023AFF917E15 OnSceneAnimationInterrupt(::System::String* sceneDynamicKey)
	{
		return ((::Enum_3_1A07023AFF917E15(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONMANAGER_ONSCENEANIMATIONINTERRUPT_OFFSET))(this, sceneDynamicKey);
	}

	::ObjectsAnimationByCameraWithKey* FindTargetByKey(::System::String* key)
	{
		return ((::ObjectsAnimationByCameraWithKey*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONMANAGER_FINDTARGETBYKEY_OFFSET))(this, key);
	}

	::Enum_3_1A07023AFF917E15 __base_OnSceneAnimationInterrupt(::System::String* P0)
	{
		return ((::Enum_3_1A07023AFF917E15(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONMANAGER___BASE_ONSCENEANIMATIONINTERRUPT_OFFSET))(this, P0);
	}

	::Enum_3_1A07023AFF917E15 __base_OnSceneAnimationPlay(::System::String* P0, ::System::Int32 P1, ::System::Int32 P2, ::System::Boolean P3, ::System::Boolean P4)
	{
		return ((::Enum_3_1A07023AFF917E15(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONMANAGER___BASE_ONSCENEANIMATIONPLAY_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
