#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MultiLightEffectMatBlockType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MultiLightEffectMaterialBlock_MBItem; }
namespace System { class Object; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_GET_EMISSIONSTRENGTH3_OFFSET UNITYSDK_OFFSET(0xC1B8320)
#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_LATETICK_OFFSET UNITYSDK_OFFSET(0xC1B70D0)
#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_METHOD_5_019EFE3898DA3E4C_OFFSET UNITYSDK_OFFSET(0xC1B7DF0)
#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_METHOD_5_828DF204BF1C89BB_OFFSET UNITYSDK_OFFSET(0xC1B6960)
#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_METHOD_5_ABB1ED6E5E3576C6_OFFSET UNITYSDK_OFFSET(0xC1B7390)
#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC1B82D0)
#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1B7040)
#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC1B6FB0)
#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_SET_EMISSIONSTRENGTH3_OFFSET UNITYSDK_OFFSET(0xC1B8330)
#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_START_OFFSET UNITYSDK_OFFSET(0xC1B66E0)
#define RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xC1B8340)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiLightEffectMaterialBlock_TypeDefinitionIndex = 66105;

	class MultiLightEffectMaterialBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::MultiLightEffectMaterialBlock_MBItem*>* MBTargets; // 0x18
		::System::Boolean KValueIsOn; // 0x20
		::RPG::Client::MultiLightEffectMatBlockType DataType; // 0x24
		::System::Boolean IsSixteenLight; // 0x28
		::System::Single EmissionTotalStrength; // 0x2C
		::System::Single EmissionStrength0; // 0x30
		::System::Single EmissionStrength1; // 0x34
		::System::Single EmissionStrength2; // 0x38
		::System::Single _EmissionStrength3; // 0x3C
		::System::Single EmissionStrength4; // 0x40
		::System::Single EmissionStrength5; // 0x44
		::System::Single EmissionStrength6; // 0x48
		::System::Single EmissionStrength7; // 0x4C
		::System::Single EmissionStrength8; // 0x50
		::System::Single EmissionStrength9; // 0x54
		::System::Single EmissionStrength10; // 0x58
		::System::Single EmissionStrength11; // 0x5C
		::System::Single EmissionStrength12; // 0x60
		::System::Single EmissionStrength13; // 0x64
		::System::Single EmissionStrength14; // 0x68
		::System::Single EmissionStrength15; // 0x6C
		::UnityEngine::Color EmissionColor0; // 0x70
		::UnityEngine::Color EmissionColor1; // 0x80
		::UnityEngine::Color EmissionColor2; // 0x90
		::UnityEngine::Color EmissionColor3; // 0xA0
		::UnityEngine::Color EmissionColor4; // 0xB0
		::UnityEngine::Color EmissionColor5; // 0xC0
		::UnityEngine::Color EmissionColor6; // 0xD0
		::UnityEngine::Color EmissionColor7; // 0xE0
		::UnityEngine::Color EmissionColor8; // 0xF0
		::UnityEngine::Color EmissionColor9; // 0x100
		::UnityEngine::Color EmissionColor10; // 0x110
		::UnityEngine::Color EmissionColor11; // 0x120
		::UnityEngine::Color EmissionColor12; // 0x130
		::UnityEngine::Color EmissionColor13; // 0x140
		::UnityEngine::Color EmissionColor14; // 0x150
		::UnityEngine::Color EmissionColor15; // 0x160
		::UnityEngine::Color ColorData; // 0x170
		::UnityEngine::Vector4 VectorData; // 0x180
		::UnityEngine::MaterialPropertyBlock* Field_5_39; // 0x190
		::System::Boolean Field_5_40; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_LATETICK_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_ONDESTROY_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_5_828DF204BF1C89BB(::UnityEngine::Material* a1, ::RPG::Client::MultiLightEffectMatBlockType a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::UnityEngine::Material*, ::RPG::Client::MultiLightEffectMatBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_METHOD_5_828DF204BF1C89BB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_ABB1ED6E5E3576C6(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_METHOD_5_ABB1ED6E5E3576C6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_019EFE3898DA3E4C(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::Il2CppArray<::System::Object*>* a3, ::RPG::Client::MultiLightEffectMatBlockType a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::RPG::Client::MultiLightEffectMatBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_METHOD_5_019EFE3898DA3E4C_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_EmissionStrength3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_GET_EMISSIONSTRENGTH3_OFFSET))(this);
		}

		::System::Void set_EmissionStrength3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTILIGHTEFFECTMATERIALBLOCK_SET_EMISSIONSTRENGTH3_OFFSET))(this, a1);
		}
	};
}
