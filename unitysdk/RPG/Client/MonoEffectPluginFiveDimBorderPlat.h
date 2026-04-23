#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9CBC71DC5240DC00;
class Class_2_9DD8A46984F1AFFD;
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA991CA0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_METHOD_6_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA991D90)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA991C00)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETENTITY_OFFSET UNITYSDK_OFFSET(0xA991E20)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETSHOWDISTANCEANDUNITLENGTH_OFFSET UNITYSDK_OFFSET(0xA9922B0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_TICK_OFFSET UNITYSDK_OFFSET(0xA992080)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA992590)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT__CTOR_OFFSET UNITYSDK_OFFSET(0xA992550)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA9925D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFiveDimBorderPlat_TypeDefinitionIndex = 64551;

	class MonoEffectPluginFiveDimBorderPlat : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		static ::System::String** StaticGet_Field_6_13()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginFiveDimBorderPlat_TypeDefinitionIndex)->GetStaticField(0x3D100);
		}
		static ::System::Int32* StaticGet_Field_6_14()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginFiveDimBorderPlat_TypeDefinitionIndex)->GetStaticField(0xD8F0);
		}
		::UnityEngine::GameObject* Border; // 0x28
		::System::Single BaseDensity; // 0x30
		::Class_2_9DD8A46984F1AFFD* Field_6_2; // 0x38
		::RPG::GameCore::FiveDimMoveBakedConfig* Field_6_3; // 0x40
		::System::Single Field_6_4; // 0x48
		::System::Single Field_6_5; // 0x4C
		::System::Single Field_6_6; // 0x50
		::Class_1_9CBC71DC5240DC00* Field_6_7; // 0x58
		::System::Boolean Field_6_8; // 0x60
		::UnityEngine::Vector3 Field_6_9; // 0x64
		::System::Boolean Field_6_10; // 0x70
		::System::Int32 Field_6_11; // 0x74
		::System::Int32 Field_6_12; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT__CCTOR_OFFSET))();
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void SetEntity(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_6_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_METHOD_6_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void SetShowDistanceAndUnitLength(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETSHOWDISTANCEANDUNITLENGTH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
