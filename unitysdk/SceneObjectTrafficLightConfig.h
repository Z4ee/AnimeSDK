#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneObjectTrafficLightConfig_Car_Traffic;
class SceneObjectTrafficLightConfig_SideWalk_Traffic;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SCENEOBJECTTRAFFICLIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D4ED80)

inline static constexpr unsigned int SceneObjectTrafficLightConfig_TypeDefinitionIndex = 69038;

class SceneObjectTrafficLightConfig : public ::System::Object
{
public:
	::SceneObjectTrafficLightConfig_Car_Traffic* car_traffic; // 0x10
	::SceneObjectTrafficLightConfig_SideWalk_Traffic* sideWalk_Traffic; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* emptyWall; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTTRAFFICLIGHTCONFIG__CTOR_OFFSET))(this);
	}
};
