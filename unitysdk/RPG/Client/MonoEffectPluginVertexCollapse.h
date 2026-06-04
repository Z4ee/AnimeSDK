#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xC0F3330)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xC0F30F0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_554208C84546EE8E_OFFSET UNITYSDK_OFFSET(0xC0F2660)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xC0F33A0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xC0F2960)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0xC0F2610)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC0F30B0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xC0F3040)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0xC0F28E0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xC0F3320)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0F3210)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F31C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginVertexCollapse_TypeDefinitionIndex = 65466;

	class MonoEffectPluginVertexCollapse : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		static ::System::Int32* StaticGet_Field_8_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135B0);
		}
		static ::System::Int32* StaticGet_Field_8_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135B4);
		}
		static ::System::Int32* StaticGet_Field_8_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135B8);
		}
		static ::System::Int32* StaticGet_Field_8_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135BC);
		}
		static ::System::Int32* StaticGet_Field_8_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135C0);
		}
		static ::System::Int32* StaticGet_Field_8_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135C4);
		}
		static ::System::Int32* StaticGet_Field_8_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135C8);
		}
		static ::System::Int32* StaticGet_Field_8_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135CC);
		}
		static ::System::Int32* StaticGet_Field_8_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135D0);
		}
		static ::System::Int32* StaticGet_Field_8_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135D4);
		}
		static ::System::Int32* StaticGet_Field_8_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135D8);
		}
		static ::System::Int32* StaticGet_Field_8_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x135DC);
		}
		::UnityEngine::Color Color; // 0x170
		::UnityEngine::Texture2D* ColorRamp; // 0x180
		::System::Single HueShift; // 0x188
		::System::Single Saturation; // 0x18C
		::System::Single Brightness; // 0x190
		::System::Single Contrast; // 0x194
		::UnityEngine::Transform* CollapsePoint; // 0x198
		::UnityEngine::Vector3 CollapsePointOffset; // 0x1A0
		::UnityEngine::Texture2D* CollapseNoise; // 0x1B0
		::UnityEngine::Vector2 CollapseNoiseTurbulence; // 0x1B8
		::System::Single CollapseNoiseIntensity; // 0x1C0
		::System::Single CollapseRatio; // 0x1C4
		::UnityEngine::Vector2 CollapseRatioRange; // 0x1C8
		::System::Single CollapseSpeed; // 0x1D0
		::System::Single CollapseTrace; // 0x1D4
		::System::Boolean CalculateBoundsCenter; // 0x1D8
		::Il2CppArray<::UnityEngine::Renderer*>* Field_8_28; // 0x1E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CCTOR_OFFSET))();
		}

		::System::Void Method_8_C5F2E178DAEB1793()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_C5F2E178DAEB1793_OFFSET))(this);
		}

		::System::Void Method_8_F0F8DE036FE283F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F0F8DE036FE283F6_OFFSET))(this);
		}

		::System::Void Method_8_D3129FE8DF635B48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_D3129FE8DF635B48_OFFSET))(this);
		}

		::System::Void Method_8_554208C84546EE8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_554208C84546EE8E_OFFSET))(this);
		}

		::System::Void Method_8_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_8_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_8_9AB55F553C4AC6E8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_9AB55F553C4AC6E8_OFFSET))(this);
		}

		::System::Void Method_8_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_8_17BD30EFE8176014()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_17BD30EFE8176014_OFFSET))(this);
		}

		::System::Void Method_8_7033EFB970A18315()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_7033EFB970A18315_OFFSET))(this);
		}
	};
}
