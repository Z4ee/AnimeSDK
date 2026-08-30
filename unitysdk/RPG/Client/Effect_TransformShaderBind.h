#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_EFFECT_TRANSFORMSHADERBIND_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCE226E0)
#define RPG_CLIENT_EFFECT_TRANSFORMSHADERBIND_UPDATE_OFFSET UNITYSDK_OFFSET(0xCE227B0)
#define RPG_CLIENT_EFFECT_TRANSFORMSHADERBIND__CTOR_OFFSET UNITYSDK_OFFSET(0xCE23120)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformShaderBind_TypeDefinitionIndex = 70535;

	class Effect_TransformShaderBind : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 NGFFJOCICJD; // 0x18
		::System::Boolean TranslationEnable; // 0x24
		::Il2CppArray<::System::String*>* TranslationBind; // 0x28
		::UnityEngine::Vector3 NCMEPPHLGEG; // 0x30
		::System::Boolean RotationEnable; // 0x3C
		::Il2CppArray<::System::String*>* RotationBind; // 0x40
		::UnityEngine::Vector3 PEHHBBNAMEH; // 0x48
		::System::Boolean ScaleEnable; // 0x54
		::Il2CppArray<::System::String*>* ScaleBind; // 0x58
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x60
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMSHADERBIND__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMSHADERBIND_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMSHADERBIND_UPDATE_OFFSET))(this);
		}
	};
}
