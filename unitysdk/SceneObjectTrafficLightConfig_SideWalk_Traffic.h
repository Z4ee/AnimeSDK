#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TrafficLightType.h"
#include "unitysdk/System/Object.h"

class TrafficLightWallConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENEOBJECTTRAFFICLIGHTCONFIG_SIDEWALK_TRAFFIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC661F0)

inline static constexpr unsigned int SceneObjectTrafficLightConfig_SideWalk_Traffic_TypeDefinitionIndex = 67258;

class SceneObjectTrafficLightConfig_SideWalk_Traffic : public ::System::Object
{
public:
	::MoleMole::TrafficLightType type; // 0x10
	::System::String* redTextureSheetKey; // 0x18
	::System::String* greenTextureSheetKey; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* trafficControllPoint; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* trafficControllPointGroup; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* trafficControlPoint; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* trafficControlPointGroup; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* trafficControlPoint_switch; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* trafficControlGroup_switch; // 0x50
	::TrafficLightWallConfig* wallEffect; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTTRAFFICLIGHTCONFIG_SIDEWALK_TRAFFIC__CTOR_OFFSET))(this);
	}
};
