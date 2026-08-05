#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoOverlaySpaceSceneObjectProxy_TargetState_TypeDefinitionIndex = 27560;

enum class MonoOverlaySpaceSceneObjectProxy_TargetState : ::System::Int32
{
	NormalState = 2,
	UnVisibleFromMirrorSpace = 1,
	VisibleFromMirrorSpace = 0,
};
