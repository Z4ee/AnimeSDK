#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_OffsetType.h"
#include "unitysdk/RPG/Client/Effect_Transform_PauseReason.h"
#include "unitysdk/RPG/Client/Effect_Transform_RotateType.h"
#include "unitysdk/RPG/Client/FloatAxis.h"
#include "unitysdk/RPG/Client/RotateAxis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_TRANSFORM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1512FDF0)
#define RPG_CLIENT_EFFECT_TRANSFORM_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1512FF50)
#define RPG_CLIENT_EFFECT_TRANSFORM_FORCEINITAXIS_OFFSET UNITYSDK_OFFSET(0x151308B0)
#define RPG_CLIENT_EFFECT_TRANSFORM_INITIAL_OFFSET UNITYSDK_OFFSET(0x1512FE90)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x151315C0)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_148427E1422FAA45_OFFSET UNITYSDK_OFFSET(0x15132180)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_1DDD10252C795DC3_OFFSET UNITYSDK_OFFSET(0x15130F60)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_3F9269A3073770D4_OFFSET UNITYSDK_OFFSET(0x1512FFA0)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x15131280)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x151305B0)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_4EEE40ADEE0A6577_OFFSET UNITYSDK_OFFSET(0x15130C40)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x15131EA0)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x15130B90)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15131050)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x151321D0)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x15131350)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_C12F95298348D268_OFFSET UNITYSDK_OFFSET(0x151313B0)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x15131BA0)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15130B80)
#define RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x15130FE0)
#define RPG_CLIENT_EFFECT_TRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15132270)
#define RPG_CLIENT_EFFECT_TRANSFORM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15130690)
#define RPG_CLIENT_EFFECT_TRANSFORM_PAUSE_OFFSET UNITYSDK_OFFSET(0x15130900)
#define RPG_CLIENT_EFFECT_TRANSFORM_SETCURRENTPOS_OFFSET UNITYSDK_OFFSET(0x151307C0)
#define RPG_CLIENT_EFFECT_TRANSFORM_SETINITIALPOS_OFFSET UNITYSDK_OFFSET(0x15130720)
#define RPG_CLIENT_EFFECT_TRANSFORM_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1512FF10)
#define RPG_CLIENT_EFFECT_TRANSFORM_TICK_OFFSET UNITYSDK_OFFSET(0x15130970)
#define RPG_CLIENT_EFFECT_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x15132300)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_Transform_TypeDefinitionIndex = 67409;

	class Effect_Transform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::RPG::Client::Effect_Transform_OffsetType TransOffsetType; // 0x1C
		::System::Boolean UseLocalTransform; // 0x20
		::System::Boolean FloatObjectSpace; // 0x21
		::RPG::Client::FloatAxis FloAxis; // 0x24
		::System::Single FloatFrequency; // 0x28
		::System::Single FloatDistance; // 0x2C
		::System::Single OffsetNoise3DSpeed; // 0x30
		::System::Single RandomMove3DBoxSize; // 0x34
		::RPG::Client::Effect_Transform_RotateType TransRotateType; // 0x38
		::System::Boolean UseLoopRotate; // 0x3C
		::System::Boolean RotateObjectSpace; // 0x3D
		::System::Boolean IsTimeSetAngle; // 0x3E
		::RPG::Client::RotateAxis RotAxis; // 0x40
		::System::Single RotateSpeed; // 0x44
		::System::Single RotateFrequency; // 0x48
		::System::Single RotateNoise3DSpeed; // 0x4C
		::System::Single _WobbyScale; // 0x50
		::UnityEngine::Vector3 WobblyCenterOffset; // 0x54
		::System::Single SwingAngle; // 0x60
		::System::Single SwingFrequency; // 0x64
		::System::Boolean DontTickWhileUIOpen; // 0x68
		::System::Boolean IsUpateInEditorMode; // 0x69
		::System::Single RandomTimeOffsetRange; // 0x6C
		::UnityEngine::Vector3 Field_5_24; // 0x70
		::UnityEngine::Vector3 Field_5_25; // 0x7C
		::UnityEngine::Vector3 Field_5_26; // 0x88
		::UnityEngine::Quaternion Field_5_27; // 0x94
		::UnityEngine::Vector3 Field_5_28; // 0xA4
		::System::Single Field_5_29; // 0xB0
		::System::Single Field_5_30; // 0xB4
		::System::Boolean Field_5_31; // 0xB8
		::UnityEngine::Vector3 Field_5_32; // 0xBC
		::UnityEngine::Vector3 Field_5_33; // 0xC8
		::System::Single Field_5_34; // 0xD4
		::UnityEngine::Transform* Field_5_35; // 0xD8
		::UnityEngine::Transform* Field_5_36; // 0xE0
		::System::Boolean Field_5_37; // 0xE8
		::UnityEngine::Quaternion Field_5_38; // 0xEC
		::System::Int32 Field_5_39; // 0xFC
		::RPG::GameCore::GameEntity* Field_5_40; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_AWAKE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_DESPAWNED_OFFSET))(this);
		}

		::System::Void Initial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_INITIAL_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_ONENABLE_OFFSET))(this);
		}

		::System::Void SetInitialPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_SETINITIALPOS_OFFSET))(this, a1);
		}

		::System::Void SetCurrentPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_SETCURRENTPOS_OFFSET))(this, a1);
		}

		::System::Void ForceInitAxis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_FORCEINITAXIS_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean a1, ::RPG::Client::Effect_Transform_PauseReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::Effect_Transform_PauseReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_PAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_3F9269A3073770D4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_3F9269A3073770D4_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_4EEE40ADEE0A6577()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_4EEE40ADEE0A6577_OFFSET))(this);
		}

		::System::Void Method_5_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_5_1DDD10252C795DC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_1DDD10252C795DC3_OFFSET))(this);
		}

		::System::Void Method_5_0A0A8830B02C5A4B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_0A0A8830B02C5A4B_OFFSET))(this);
		}

		::System::Void Method_5_C561FF611C07A44C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_C561FF611C07A44C_OFFSET))(this);
		}

		::System::Void Method_5_54757B8B62FBF467()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_54757B8B62FBF467_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_C12F95298348D268(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_C12F95298348D268_OFFSET))(this, a1);
		}

		::System::Void Method_5_148427E1422FAA45(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_148427E1422FAA45_OFFSET))(this, a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_7744894CEC41BF06_OFFSET))(this);
		}

		::System::Single Method_5_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORM_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
