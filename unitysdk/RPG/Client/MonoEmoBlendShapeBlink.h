#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_9EFBE27577E50792;
namespace RPG::Client { class EmoBlendShapeBlinkConfig; }
namespace RPG::Client { class EmoBlendShapeParamBase; }
namespace RPG::Client { class MonoEmoBlendShapeBlink_Class_1_C4D7FDF22DDB24EA; }
namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace RPG::Client { class MonoEmoNpcEyeController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0xA9AD7B0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CANOVERRIDEBLENDSHAPECONFIG_OFFSET UNITYSDK_OFFSET(0xA9AC5F0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CONSUMEBLENDSHAPEVALUEMAP_OFFSET UNITYSDK_OFFSET(0xA9ABBB0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xA9ABB90)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA9ABB30)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA9ABBA0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_LOCKEYE_OFFSET UNITYSDK_OFFSET(0xA9ABD20)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_METHOD_5_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0xA9AD5D0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_METHOD_5_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xA9AC180)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_METHOD_5_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xA9AD730)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_POPDISABLEBLINKREASON_OFFSET UNITYSDK_OFFSET(0xA9AC4A0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_PUSHDISABLEBLINKREASON_OFFSET UNITYSDK_OFFSET(0xA9AC3F0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_RESET_OFFSET UNITYSDK_OFFSET(0xA9ADA30)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_SETAUTOBLINKENABLED_OFFSET UNITYSDK_OFFSET(0xA9AC060)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_SETUPEYEMONO_OFFSET UNITYSDK_OFFSET(0xA9ABEB0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_TICK_OFFSET UNITYSDK_OFFSET(0xA9AC7F0)
#define RPG_CLIENT_MONOEMOBLENDSHAPEBLINK__CTOR_OFFSET UNITYSDK_OFFSET(0xA9ADAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoBlendShapeBlink_TypeDefinitionIndex = 65570;

	class MonoEmoBlendShapeBlink : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean enableAutoBlink; // 0x18
		::System::Single fadeInAutoBlinkTime; // 0x1C
		::System::Single fadeOutAutoBlinkTime; // 0x20
		::System::Single minBlinkGap; // 0x24
		::System::Single maxBlinkGap; // 0x28
		::System::Single blinkingDuration; // 0x2C
		::System::Single doubleBlinkProbability; // 0x30
		::System::Single autoBlinkWeight; // 0x34
		::Il2CppArray<::RPG::Client::EmoBlendShapeBlinkConfig*>* blinkClosePoseConfigs; // 0x38
		::Il2CppArray<::RPG::Client::EmoBlendShapeParamBase*>* autoBlinkPoseParams; // 0x40
		::RPG::Client::MonoEmoBlendShapesController* controller; // 0x48
		::System::Collections::Generic::HashSet_1<::System::String*>* Field_5_11; // 0x50
		::System::Single Field_5_12; // 0x58
		::Il2CppArray<::System::Single>* Field_5_13; // 0x60
		::Il2CppArray<::System::Single>* Field_5_14; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_5_15; // 0x70
		::System::Single Field_5_16; // 0x78
		::RPG::Client::MonoEmoNpcEyeController* Field_5_17; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::MonoEmoBlendShapeBlink_Class_1_C4D7FDF22DDB24EA*>* Field_5_18; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_ENABLED_OFFSET))(this);
		}

		::System::Boolean get_EnableAutoBlink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_ENABLEAUTOBLINK_OFFSET))(this);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void ConsumeBlendShapeValueMap(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CONSUMEBLENDSHAPEVALUEMAP_OFFSET))(this, a1);
		}

		::System::Void LockEye()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_LOCKEYE_OFFSET))(this);
		}

		::System::Void SetupEyeMono(::RPG::Client::MonoEmoNpcEyeController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoNpcEyeController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_SETUPEYEMONO_OFFSET))(this, a1);
		}

		::System::Void SetAutoBlinkEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_SETAUTOBLINKENABLED_OFFSET))(this, a1);
		}

		::System::Void PushDisableBlinkReason(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_PUSHDISABLEBLINKREASON_OFFSET))(this, a1);
		}

		::System::Void PopDisableBlinkReason(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_POPDISABLEBLINKREASON_OFFSET))(this, a1);
		}

		::System::Boolean CanOverrideBlendShapeConfig(::Class_1_9EFBE27577E50792* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9EFBE27577E50792*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_CANOVERRIDEBLENDSHAPECONFIG_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_METHOD_5_33E2FA8E6403B93D_OFFSET))(this);
		}

		::System::Void Method_5_11D5322717FDFD9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_METHOD_5_11D5322717FDFD9D_OFFSET))(this);
		}

		::System::Single Method_5_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_METHOD_5_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPEBLINK_RESET_OFFSET))(this);
		}
	};
}
