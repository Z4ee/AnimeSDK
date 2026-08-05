#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FowardDir.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SCENEOBJECTAREACHECKPLAYANI__CTOR_OFFSET UNITYSDK_OFFSET(0x18C59340)

inline static constexpr unsigned int SceneObjectAreaCheckPlayAni_TypeDefinitionIndex = 46742;

class SceneObjectAreaCheckPlayAni : public ::System::Object
{
public:
	::System::String* EnterAnimatorTrigger; // 0x10
	::System::String* BackEnterAnimatorTrigger; // 0x18
	::FowardDir FixedFowardDir; // 0x20
	::System::Single OpenCD; // 0x24
	::System::Boolean IsOpenCheck; // 0x28
	::System::Boolean DefaultIsOpen; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTAREACHECKPLAYANI__CTOR_OFFSET))(this);
	}
};
