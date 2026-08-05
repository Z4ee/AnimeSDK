#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_548BC150801F9181;
class Class_3_707412604A129938;
class Class_3_883E597458B91E77;
class Class_3_C93CC3D2C2AC4067;
class Class_3_E2819F45333A39BF;
class Class_3_F33F9DC5F4112336;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_METHOD_1_A7957CDB95DAF72B_OFFSET UNITYSDK_OFFSET(0xF11FC00)
#define MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF11FC80)
#define MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF11FBF0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraAvatarPrepareData_TypeDefinitionIndex = 64019;

	class CameraAvatarPrepareData : public ::System::Object
	{
	public:
		// static const ::System::Single AvatarHeight; // 0x0
		// static const ::System::String* POINT_CAMERABASE_ROOT; // 0x0
		// static const ::System::String* POINT_CAMERA_LOOK; // 0x0
		::MoleMole::Battle::Entity* AvatarEntity; // 0x10
		::Class_1_548BC150801F9181* ControlData; // 0x18
		::Class_3_F33F9DC5F4112336* AnimateComponent; // 0x20
		::UnityEngine::AnimatorStateInfo CurrentAnimState; // 0x28
		::Class_3_C93CC3D2C2AC4067* ModelComponent; // 0x50
		::Class_3_707412604A129938* BaseDataComponent; // 0x58
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

		::System::Boolean Method_1_A7957CDB95DAF72B()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_METHOD_1_A7957CDB95DAF72B_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
