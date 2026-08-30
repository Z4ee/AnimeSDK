#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1342B57709FD7AC5;
class Class_2_B9E8C2EEAA5C96EC;
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B387A70)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_METHOD_6_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B387B60)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B3879D0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETENTITY_OFFSET UNITYSDK_OFFSET(0x1B387BF0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETSHOWDISTANCEANDUNITLENGTH_OFFSET UNITYSDK_OFFSET(0x1B388070)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_TICK_OFFSET UNITYSDK_OFFSET(0x1B387E50)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B388390)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B388350)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFiveDimBorderPlat_TypeDefinitionIndex = 69988;

	class MonoEffectPluginFiveDimBorderPlat : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		static ::System::String** StaticGet_JBGHEDIGMKN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginFiveDimBorderPlat_TypeDefinitionIndex)->GetStaticField(0x117F0);
		}
		static ::System::Int32* StaticGet_MNHCKOJILND()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginFiveDimBorderPlat_TypeDefinitionIndex)->GetStaticField(0x77D0);
		}
		::UnityEngine::GameObject* Border; // 0x28
		::System::Single BaseDensity; // 0x30
		::Class_2_B9E8C2EEAA5C96EC* KAKEIDJDNHJ; // 0x38
		::RPG::GameCore::FiveDimMoveBakedConfig* EKAALAGLBPC; // 0x40
		::System::Single PPBPOMMNICA; // 0x48
		::System::Single FGODFPJCNHG; // 0x4C
		::System::Single PDLKDJHEJIG; // 0x50
		::Class_1_1342B57709FD7AC5* DBCCOEFFKCM; // 0x58
		::System::Boolean DKMGKDEMNIL; // 0x60
		::UnityEngine::Vector3 AANPAEBECKM; // 0x64
		::System::Boolean KOKMFJFODLK; // 0x70
		::System::Int32 BGCMNPDHGNB; // 0x74
		::System::Int32 AHMNBDIMOCN; // 0x78

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

		::System::Void SetEntity(::Class_2_B9E8C2EEAA5C96EC* a1, ::RPG::GameCore::FiveDimMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::RPG::GameCore::FiveDimMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETENTITY_OFFSET))(this, a1, a2);
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
	};
}
