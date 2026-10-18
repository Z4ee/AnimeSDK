#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_ALLEYROUTEBIRD_BINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xC66E8B0)
#define RPG_CLIENT_ALLEYROUTEBIRD_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xC66ED20)
#define RPG_CLIENT_ALLEYROUTEBIRD_FLY_OFFSET UNITYSDK_OFFSET(0xC66EB80)
#define RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0xC66EBF0)
#define RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xC66EE00)
#define RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0xC66EB10)
#define RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xC66EEE0)
#define RPG_CLIENT_ALLEYROUTEBIRD_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xC66E970)
#define RPG_CLIENT_ALLEYROUTEBIRD_SETCOLOR_OFFSET UNITYSDK_OFFSET(0xC66EA80)
#define RPG_CLIENT_ALLEYROUTEBIRD_SPAWNED_OFFSET UNITYSDK_OFFSET(0xC66ECD0)
#define RPG_CLIENT_ALLEYROUTEBIRD_UPDATE_OFFSET UNITYSDK_OFFSET(0xC66ED70)
#define RPG_CLIENT_ALLEYROUTEBIRD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC66EF60)
#define RPG_CLIENT_ALLEYROUTEBIRD__CTOR_OFFSET UNITYSDK_OFFSET(0xC66EF50)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteBird_TypeDefinitionIndex = 62291;

	class AlleyRouteBird : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_LNGDBLEKGHG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlleyRouteBird_TypeDefinitionIndex)->GetStaticField(0xFD10);
		}
		static ::System::Int32* StaticGet_NOFHFKNDBAO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlleyRouteBird_TypeDefinitionIndex)->GetStaticField(0xFD14);
		}
		// static const ::System::Single FLMBFHONNIM; // 0x0
		::System::Boolean IEPEOJKLING; // 0x18
		::System::Single PBLGHIGPEIP; // 0x1C
		::System::Single HBDJCFFDGDD; // 0x20
		::System::String* NHFPGLCLOMO; // 0x28
		::UnityEngine::Animator* APPGGMLEPLN; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD__CCTOR_OFFSET))();
		}

		::System::Void BindComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_BINDCOMPONENTS_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_SETCOLOR_OFFSET))(this, a1);
		}

		::System::Void Fly(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_FLY_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_DESPAWNED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_151E25A63D14DDB0_1_OFFSET))(this);
		}

		::System::Void Method_5_60DC879ACE99CF48(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_60DC879ACE99CF48_OFFSET))(this, a1);
		}

		::System::Void Method_5_CB613A5EF970C11B(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_CB613A5EF970C11B_OFFSET))(this, a1);
		}
	};
}
