#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_88EB724A07E2A9A9_OFFSET UNITYSDK_OFFSET(0x10CFF670)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE_METHOD_8_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0x10CFF260)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CFF840)
#define RPG_CLIENT_MONOEFFECTPLUGINAURAOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x10CFF770)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAuraOutline_TypeDefinitionIndex = 66799;

	class MonoEffectPluginAuraOutline : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_Field_8_0()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0x545D0);
		}
		static ::System::Int32* StaticGet_Field_8_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE710);
		}
		static ::System::Int32* StaticGet_Field_8_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE714);
		}
		static ::System::Int32* StaticGet_Field_8_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE718);
		}
		static ::System::Int32* StaticGet_Field_8_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE71C);
		}
		static ::System::Int32* StaticGet_Field_8_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE720);
		}
		static ::System::Int32* StaticGet_Field_8_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE724);
		}
		static ::System::Int32* StaticGet_Field_8_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE728);
		}
		static ::System::Int32* StaticGet_Field_8_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE72C);
		}
		static ::System::Int32* StaticGet_Field_8_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE730);
		}
		static ::System::Int32* StaticGet_Field_8_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE734);
		}
		static ::System::Int32* StaticGet_Field_8_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE738);
		}
		static ::System::Int32* StaticGet_Field_8_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAuraOutline_TypeDefinitionIndex)->GetStaticField(0xE73C);
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
