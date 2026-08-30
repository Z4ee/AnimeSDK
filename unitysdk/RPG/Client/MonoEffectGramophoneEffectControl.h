#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x1167D680)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1167C720)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x1167C8B0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x1167CBE0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1167C660)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_E52129E82CD2D7F8_1_OFFSET UNITYSDK_OFFSET(0x1167CA70)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x1167D4C0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1167CDB0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1167CCA0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1167CE60)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1167D800)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectGramophoneEffectControl_TypeDefinitionIndex = 70698;

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
		::System::Boolean AGIGJNPNABJ; // 0x2E
		::Il2CppArray<::UnityEngine::Renderer*>* Renderer; // 0x30
		::UnityEngine::Renderer* LineRenderer; // 0x38
		::UnityEngine::Renderer* DotObject; // 0x40
		::UnityEngine::GameObject* DotController; // 0x48
		::UnityEngine::GameObject* DotRenderer; // 0x50
		::UnityEngine::GameObject* CenterEffect; // 0x58
		::UnityEngine::Vector3 DotScale; // 0x60
		::UnityEngine::Color DotColor1; // 0x6C
		::UnityEngine::Color DotColor2; // 0x7C
		::UnityEngine::Vector3 CCDMEIECEJB; // 0x8C
		::System::Single KGHOGPHCPFP; // 0x98
		::System::Single JJFMHMPFOKM; // 0x9C
		::System::Single EGAAMECAFLO; // 0xA0
		::System::Single FIJLEDEKBJP; // 0xA4
		::System::Single JPMHHNFDICD; // 0xA8
		::System::Single JCDMBONDDNM; // 0xAC
		::System::Single EBLKBOLCHHL; // 0xB0
		::System::Single JHEFPBPANBP; // 0xB4
		::System::Single KBKLAKLBHDJ; // 0xB8
		::System::Int32 LFMLFBDEPDJ; // 0xBC
		::UnityEngine::MaterialPropertyBlock* KHFINMBNGBE; // 0xC0
		::UnityEngine::MaterialPropertyBlock* INIOGBPCKEB; // 0xC8

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

		::System::Void Method_5_E52129E82CD2D7F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_E52129E82CD2D7F8_OFFSET))(this);
		}

		::System::Void Method_5_0D64F99BAAA7B5C4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_0D64F99BAAA7B5C4_OFFSET))(this, a1);
		}

		::System::Void Method_5_E52129E82CD2D7F8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_METHOD_5_E52129E82CD2D7F8_1_OFFSET))(this);
		}
	};
}
