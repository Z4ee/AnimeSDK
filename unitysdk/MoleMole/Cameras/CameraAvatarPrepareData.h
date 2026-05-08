#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_D976BC8B485169A1;
class Class_3_3A3A95CA33F5CFBC;
class Class_3_883E597458B91E77;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_E2819F45333A39BF;
class Class_3_F33F9DC5F4112336;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_METHOD_1_625FBF14AF26EF8B_OFFSET UNITYSDK_OFFSET(0xFAE6BD0)
#define MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFAE6B60)
#define MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFAE6B50)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraAvatarPrepareData_TypeDefinitionIndex = 80234;

	class CameraAvatarPrepareData : public ::System::Object
	{
	public:
		// static const ::System::Single AvatarHeight; // 0x0
		// static const ::System::String* POINT_CAMERABASE_ROOT; // 0x0
		// static const ::System::String* POINT_CAMERA_LOOK; // 0x0
		::MoleMole::Battle::Entity* AvatarEntity; // 0x10
		::Class_1_D976BC8B485169A1* ControlData; // 0x18
		::Class_3_F33F9DC5F4112336* AnimateComponent; // 0x20
		::UnityEngine::AnimatorStateInfo CurrentAnimState; // 0x28
		::Class_3_DFD5D1FDB9D2A4AC* ModelComponent; // 0x50
		::Class_3_3A3A95CA33F5CFBC* BaseDataComponent; // 0x58
		::Class_3_E2819F45333A39BF* BattleComponent; // 0x60
		::Class_3_883E597458B91E77* MovementComponent; // 0x68
		::UnityEngine::Rigidbody* Rigidbody; // 0x70
		::MoleMole::CharacterScriptConfig* ScriptConfig; // 0x78
		::UnityEngine::Transform* CameraBaseRootTrans; // 0x80
		::UnityEngine::Transform* CameraLookTrans; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_1_625FBF14AF26EF8B()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_METHOD_1_625FBF14AF26EF8B_OFFSET))(this);
		}
	};
}
