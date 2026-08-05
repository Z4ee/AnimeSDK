#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_8.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
class Class_3_E82A8DEF8081DA8E;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDELEVATORSTAGECAMERASWITCH_GETAVAILABLEVIRTUALCAMERAKEY_OFFSET UNITYSDK_OFFSET(0x1A99CB40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDELEVATORSTAGECAMERASWITCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A99C540)
#define MOLEMOLE_FLOWCANVAS_NODES_LDELEVATORSTAGECAMERASWITCH_ISVIRTUALCAMERASAMEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A99D720)
#define MOLEMOLE_FLOWCANVAS_NODES_LDELEVATORSTAGECAMERASWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A99DAA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDElevatorStageCameraSwitch_TypeDefinitionIndex = 59135;

	class LDElevatorStageCameraSwitch : public ::FlowCanvas::Nodes::CallableFunctionNode_8<::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDELEVATORSTAGECAMERASWITCH__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean active, ::System::String* frontCameraKey1, ::System::String* frontCameraKey2, ::System::String* backCameraKey1, ::System::String* backCameraKey2, ::System::String* overrideCameraKey, ::MoleMole::Battle::Entity* elevatorEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDELEVATORSTAGECAMERASWITCH_INVOKE_OFFSET))(this, active, frontCameraKey1, frontCameraKey2, backCameraKey1, backCameraKey2, overrideCameraKey, elevatorEntity);
		}

		::System::String* GetAvailableVirtualCameraKey(::System::String* frontCameraKey1, ::System::String* frontCameraKey2, ::System::String* backCameraKey1, ::System::String* backCameraKey2, ::MoleMole::Battle::Entity* elevatorEntity)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDELEVATORSTAGECAMERASWITCH_GETAVAILABLEVIRTUALCAMERAKEY_OFFSET))(this, frontCameraKey1, frontCameraKey2, backCameraKey1, backCameraKey2, elevatorEntity);
		}

		::System::Boolean IsVirtualCameraSameDirection(::Class_3_E82A8DEF8081DA8E* behaviorDataComponent, ::Class_3_C93CC3D2C2AC4067* elevatorModelComponent, ::System::String* vcamKey, ::UnityEngine::Vector3 crossVec, ::System::Boolean mainCameraFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_E82A8DEF8081DA8E*, ::Class_3_C93CC3D2C2AC4067*, ::System::String*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDELEVATORSTAGECAMERASWITCH_ISVIRTUALCAMERASAMEDIRECTION_OFFSET))(this, behaviorDataComponent, elevatorModelComponent, vcamKey, crossVec, mainCameraFlag);
		}
	};
}
