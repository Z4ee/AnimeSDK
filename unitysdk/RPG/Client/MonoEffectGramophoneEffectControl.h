#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9C7DEF0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9C7DBA0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x9C7DD30)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x9C7E910)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x9C7E060)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9C7DAE0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x9C7EAC0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9C7E220)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9C7E120)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9C7E2A0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9C7EC30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectGramophoneEffectControl_TypeDefinitionIndex = 57936;

	class MonoEffectGramophoneEffectControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single rhythmScale; // 0x18
		::System::Single roundTime; // 0x1C
		::System::Single turnOffTime; // 0x20
		::System::Single BeatsPerRound; // 0x24
		::System::Single RhythmPhase; // 0x28
		::System::Boolean turnOnEffect; // 0x2C
		::System::Boolean turnOffEffect; // 0x2D
		::System::Boolean Field_5_7; // 0x2E
		::Il2CppArray<::UnityEngine::Renderer*>* Renderer; // 0x30
		::UnityEngine::Renderer* LineRenderer; // 0x38
		::UnityEngine::Renderer* DotObject; // 0x40
		::UnityEngine::GameObject* DotController; // 0x48
		::UnityEngine::GameObject* DotRenderer; // 0x50
		::UnityEngine::GameObject* CenterEffect; // 0x58
		::UnityEngine::Vector3 DotScale; // 0x60
		::UnityEngine::Color DotColor1; // 0x6C
		::UnityEngine::Color DotColor2; // 0x7C
		::UnityEngine::Vector3 Field_5_17; // 0x8C
		::System::Single Field_5_18; // 0x98
		::System::Single Field_5_19; // 0x9C
		::System::Single Field_5_20; // 0xA0
		::System::Single Field_5_21; // 0xA4
		::System::Single Field_5_22; // 0xA8
		::System::Single Field_5_23; // 0xAC
		::System::Single Field_5_24; // 0xB0
		::System::Single Field_5_25; // 0xB4
		::System::Single Field_5_26; // 0xB8
		::System::Int32 Field_5_27; // 0xBC
		::UnityEngine::MaterialPropertyBlock* Field_5_28; // 0xC0
		::UnityEngine::MaterialPropertyBlock* Field_5_29; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_5_3CF43707BF2E9BBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_3CF43707BF2E9BBA_OFFSET))(this);
		}

		::System::Void Method_5_8F537CE539CF0103()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_8F537CE539CF0103_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_FCEF005F844F513C(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_FCEF005F844F513C_OFFSET))(this, a1);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_1290EA767C459179_OFFSET))(this);
		}
	};
}
