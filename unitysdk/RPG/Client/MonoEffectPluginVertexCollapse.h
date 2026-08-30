#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xD7CDE50)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_554208C84546EE8E_OFFSET UNITYSDK_OFFSET(0xD7CD3C0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xD7CD6C0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0xD7CD370)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD7CDE10)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xD7CDDA0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0xD7CD640)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7CDFA0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE__CTOR_OFFSET UNITYSDK_OFFSET(0xD7CDF50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginVertexCollapse_TypeDefinitionIndex = 69982;

	class MonoEffectPluginVertexCollapse : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		static ::System::Int32* StaticGet_CKCDNANPOLH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B00);
		}
		static ::System::Int32* StaticGet_EBMNHHLMBAO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B04);
		}
		static ::System::Int32* StaticGet_CEFHFLAELPM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B08);
		}
		static ::System::Int32* StaticGet_POFIFNFHOJL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B0C);
		}
		static ::System::Int32* StaticGet_MINBIGDKJLM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B10);
		}
		static ::System::Int32* StaticGet_PLGMEIIGODB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B14);
		}
		static ::System::Int32* StaticGet_APGBOCGHFEM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B18);
		}
		static ::System::Int32* StaticGet_HCHELLNOELG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B1C);
		}
		static ::System::Int32* StaticGet_OJOIHDCPFDJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B20);
		}
		static ::System::Int32* StaticGet_FFPFIACIHCO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B24);
		}
		static ::System::Int32* StaticGet_IEHLNCMDNEK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B28);
		}
		static ::System::Int32* StaticGet_OJGJABCDGOM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginVertexCollapse_TypeDefinitionIndex)->GetStaticField(0x7B2C);
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
		::Il2CppArray<::UnityEngine::Renderer*>* DCKEKFGKLAI; // 0x1E0

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

		::System::Void Method_8_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_8_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_8_9AB55F553C4AC6E8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_METHOD_8_9AB55F553C4AC6E8_OFFSET))(this);
		}
	};
}
