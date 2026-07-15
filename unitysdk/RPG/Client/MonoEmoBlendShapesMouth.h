#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoMouthBakedBlendShapes_LipType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_9EFBE27577E50792;
namespace RPG::Client { class EmoBlendShapesConfig; }
namespace RPG::Client { class EmoBlendShapesConfig_BlendShapesMouthConfig; }
namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace RPGTools::Timeline::Emotion { class EmoMouthBakedBlendShapesData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_AWAKE_OFFSET UNITYSDK_OFFSET(0x18C30E70)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_ENABLEAUTOMOUTH_OFFSET UNITYSDK_OFFSET(0x18C2F270)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_MOUTHVALUEMAP_OFFSET UNITYSDK_OFFSET(0x18C2F260)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x18C2F250)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ISBLENDSHAPESOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18C2F7E0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_METHOD_5_2C77D2C943F8AD67_OFFSET UNITYSDK_OFFSET(0x18C2FEC0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_METHOD_5_4A00ED31522679A1_OFFSET UNITYSDK_OFFSET(0x18C2FF10)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_METHOD_5_861B4CC0CCE3011B_OFFSET UNITYSDK_OFFSET(0x18C30880)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ONAUDIOLANGUAGECHANGED_OFFSET UNITYSDK_OFFSET(0x18C2F2E0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C30EC0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_1_OFFSET UNITYSDK_OFFSET(0x18C2F430)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_2_OFFSET UNITYSDK_OFFSET(0x18C2F5F0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_OFFSET UNITYSDK_OFFSET(0x18C2F530)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_RESET_OFFSET UNITYSDK_OFFSET(0x18C309B0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_SETUPFRAMEDELTATIME_OFFSET UNITYSDK_OFFSET(0x18C2F780)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_STOP_OFFSET UNITYSDK_OFFSET(0x18C2F3C0)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_TICK_OFFSET UNITYSDK_OFFSET(0x18C2F850)
#define RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH__CTOR_OFFSET UNITYSDK_OFFSET(0x18C30F50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoBlendShapesMouth_TypeDefinitionIndex = 67945;

	class MonoEmoBlendShapesMouth : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_UseOldMethod()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEmoBlendShapesMouth_TypeDefinitionIndex)->GetStaticField(0xECF0);
		}
		::System::Single fadeInTime; // 0x18
		::System::Single fadeOutTime; // 0x1C
		::RPG::Client::MonoEmoBlendShapesController* Field_5_3; // 0x20
		::RPG::Client::EmoBlendShapesConfig* Field_5_4; // 0x28
		::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapesData* Field_5_5; // 0x30
		::System::Single Field_5_6; // 0x38
		::System::Single Field_5_7; // 0x3C
		::System::Single Field_5_8; // 0x40
		::System::Single Field_5_9; // 0x44
		::System::Single Field_5_10; // 0x48
		::Il2CppArray<::System::String*>* Field_5_11; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_5_12; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_5_13; // 0x60
		::System::String* Field_5_14; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH__CTOR_OFFSET))(this);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_WEIGHT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* get_MouthValueMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_MOUTHVALUEMAP_OFFSET))(this);
		}

		::System::Boolean get_EnableAutoMouth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_GET_ENABLEAUTOMOUTH_OFFSET))(this);
		}

		::System::Void OnAudioLanguageChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ONAUDIOLANGUAGECHANGED_OFFSET))(this);
		}

		::System::Void Play(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play_1(::System::String* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play_2(::System::String* a1, ::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapesData* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapesData*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_PLAY_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_STOP_OFFSET))(this);
		}

		::System::Void SetupFrameDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_SETUPFRAMEDELTATIME_OFFSET))(this, a1);
		}

		::System::Boolean IsBlendShapesOverride(::Class_1_9EFBE27577E50792* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9EFBE27577E50792*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ISBLENDSHAPESOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_2C77D2C943F8AD67(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_METHOD_5_2C77D2C943F8AD67_OFFSET))(this, a1);
		}

		::System::Void Method_5_4A00ED31522679A1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_METHOD_5_4A00ED31522679A1_OFFSET))(this, a1);
		}

		::RPG::Client::EmoBlendShapesConfig_BlendShapesMouthConfig* Method_5_861B4CC0CCE3011B(::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType a1)
		{
			return ((::RPG::Client::EmoBlendShapesConfig_BlendShapesMouthConfig*(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_METHOD_5_861B4CC0CCE3011B_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_RESET_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOBLENDSHAPESMOUTH_ONDESTROY_OFFSET))(this);
		}
	};
}
