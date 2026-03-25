#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_88EB724A07E2A9A9_OFFSET UNITYSDK_OFFSET(0x9C96C10)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0x9C96820)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x9C97060)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C96DE0)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C96D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAuraOutline_TypeDefinitionIndex = 57211;

	class MonoEffectPluginAuraOutline : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_Field_8_32()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x35F40);
		}
		static ::System::Int32* StaticGet_Field_8_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D10);
		}
		static ::System::Int32* StaticGet_Field_8_29()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D14);
		}
		static ::System::Int32* StaticGet_Field_8_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D18);
		}
		static ::System::Int32* StaticGet_Field_8_28()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D1C);
		}
		static ::System::Int32* StaticGet_Field_8_30()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D20);
		}
		static ::System::Int32* StaticGet_Field_8_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D24);
		}
		static ::System::Int32* StaticGet_Field_8_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D28);
		}
		static ::System::Int32* StaticGet_Field_8_25()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D2C);
		}
		static ::System::Int32* StaticGet_Field_8_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D30);
		}
		static ::System::Int32* StaticGet_Field_8_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D34);
		}
		static ::System::Int32* StaticGet_Field_8_24()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D38);
		}
		static ::System::Int32* StaticGet_Field_8_31()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x10D3C);
		}
		::System::Single AuraScrPosScale; // 0x218
		::System::Single OutlineAuraWidth; // 0x21C
		::System::Single OutlineAuraOffset; // 0x220
		::UnityEngine::Color AuraColor1; // 0x224
		::UnityEngine::Color AuraColor2; // 0x234
		::UnityEngine::Vector4 AuraNoise_ST; // 0x244
		::UnityEngine::Vector4 DisStep; // 0x254
		::UnityEngine::Vector4 Smooth; // 0x264
		::UnityEngine::Vector4 AuraSpeed; // 0x274
		::UnityEngine::Vector4 Aurafresnel; // 0x284
		::System::Boolean PartsSelection; // 0x294
		::System::Boolean HideCharaParts; // 0x295
		::System::Boolean ShowID0; // 0x296
		::System::Boolean ShowID1; // 0x297
		::System::Boolean ShowID2; // 0x298
		::System::Boolean ShowID3; // 0x299
		::System::Boolean ShowID4; // 0x29A
		::System::Boolean ShowID5; // 0x29B
		::System::Boolean ShowID6; // 0x29C
		::System::Boolean ShowID7; // 0x29D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CCTOR_OFFSET))();
		}

		::System::Void Method_8_CC15D6CD4D3CC816()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_CC15D6CD4D3CC816_OFFSET))(this);
		}

		::System::Int32 Method_8_88EB724A07E2A9A9(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_88EB724A07E2A9A9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}
