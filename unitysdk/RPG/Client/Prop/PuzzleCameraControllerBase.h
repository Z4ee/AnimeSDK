#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1178D0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_ENTERCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xA118460)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_EXITCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xA118540)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xA118230)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_INIT_OFFSET UNITYSDK_OFFSET(0xA117A40)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_METHOD_5_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0xA116F70)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_METHOD_5_C1356D9974792827_OFFSET UNITYSDK_OFFSET(0xA117EF0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_TICK_OFFSET UNITYSDK_OFFSET(0xA1182F0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA118280)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleCameraControllerBase_TypeDefinitionIndex = 64342;

	class PuzzleCameraControllerBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x20
		::System::Single Field_5_2; // 0x24
		::System::Single Field_5_3; // 0x28
		::System::Single Field_5_4; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void EnterCameraMode(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_ENTERCAMERAMODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ExitCameraMode(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_EXITCAMERAMODE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_INIT_OFFSET))(this);
		}

		::System::Void ForceCameraPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_FORCECAMERAPOSITION_OFFSET))(this);
		}

		::System::Single Method_5_8C97CA3BAB7FB2D7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_METHOD_5_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_C1356D9974792827(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLERBASE_METHOD_5_C1356D9974792827_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
