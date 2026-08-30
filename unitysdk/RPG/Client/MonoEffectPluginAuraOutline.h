#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_88EB724A07E2A9A9_OFFSET UNITYSDK_OFFSET(0xD782400)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0xD781FF0)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7825D0)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xD782500)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAuraOutline_TypeDefinitionIndex = 69901;

	class MonoEffectPluginAuraOutline : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CJNJFEIAECK()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xD9A0);
		}
		static ::System::Int32* StaticGet_IAOODBDDNJI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42B0);
		}
		static ::System::Int32* StaticGet_LGOPPJIALAK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42B4);
		}
		static ::System::Int32* StaticGet_BCPDFKGFOOF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42B8);
		}
		static ::System::Int32* StaticGet_DHHCNGLJLEN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42BC);
		}
		static ::System::Int32* StaticGet_NADJGIMJGIP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42C0);
		}
		static ::System::Int32* StaticGet_PIMBGNJOEPF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42C4);
		}
		static ::System::Int32* StaticGet_NFOELAMKEND()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42C8);
		}
		static ::System::Int32* StaticGet_EMBEMDDBENG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42CC);
		}
		static ::System::Int32* StaticGet_IGCLPGGJINP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42D0);
		}
		static ::System::Int32* StaticGet_KBGHONJEEAB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42D4);
		}
		static ::System::Int32* StaticGet_GKGDBANLPJD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42D8);
		}
		static ::System::Int32* StaticGet_BPLIPDPAGGD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x42DC);
		}
		::System::Single AuraScrPosScale; // 0x220
		::System::Single OutlineAuraWidth; // 0x224
		::System::Single OutlineAuraOffset; // 0x228
		::UnityEngine::Color AuraColor1; // 0x22C
		::UnityEngine::Color AuraColor2; // 0x23C
		::UnityEngine::Vector4 AuraNoise_ST; // 0x24C
		::UnityEngine::Vector4 DisStep; // 0x25C
		::UnityEngine::Vector4 Smooth; // 0x26C
		::UnityEngine::Vector4 AuraSpeed; // 0x27C
		::UnityEngine::Vector4 Aurafresnel; // 0x28C
		::System::Boolean PartsSelection; // 0x29C
		::System::Boolean HideCharaParts; // 0x29D
		::System::Boolean ShowID0; // 0x29E
		::System::Boolean ShowID1; // 0x29F
		::System::Boolean ShowID2; // 0x2A0
		::System::Boolean ShowID3; // 0x2A1
		::System::Boolean ShowID4; // 0x2A2
		::System::Boolean ShowID5; // 0x2A3
		::System::Boolean ShowID6; // 0x2A4
		::System::Boolean ShowID7; // 0x2A5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CCTOR_OFFSET))();
		}

		::System::Void Method_8_EE7339DA6ECF5F6D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_EE7339DA6ECF5F6D_OFFSET))(this);
		}

		::System::Int32 Method_8_88EB724A07E2A9A9(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_88EB724A07E2A9A9_OFFSET))(this, a1, a2, a3);
		}
	};
}
