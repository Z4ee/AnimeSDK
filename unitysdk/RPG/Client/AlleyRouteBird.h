#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_ALLEYROUTEBIRD_BINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x90B9590)
#define RPG_CLIENT_ALLEYROUTEBIRD_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x90B9AE0)
#define RPG_CLIENT_ALLEYROUTEBIRD_FLY_OFFSET UNITYSDK_OFFSET(0x90B9860)
#define RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x90B98D0)
#define RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x90B9CB0)
#define RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0x90B97F0)
#define RPG_CLIENT_ALLEYROUTEBIRD_METHOD_5_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x90B9D90)
#define RPG_CLIENT_ALLEYROUTEBIRD_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x90B9650)
#define RPG_CLIENT_ALLEYROUTEBIRD_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x90B9760)
#define RPG_CLIENT_ALLEYROUTEBIRD_SPAWNED_OFFSET UNITYSDK_OFFSET(0x90B99B0)
#define RPG_CLIENT_ALLEYROUTEBIRD_UPDATE_OFFSET UNITYSDK_OFFSET(0x90B9C20)
#define RPG_CLIENT_ALLEYROUTEBIRD__CCTOR_OFFSET UNITYSDK_OFFSET(0x90B9E10)
#define RPG_CLIENT_ALLEYROUTEBIRD__CTOR_OFFSET UNITYSDK_OFFSET(0x90B9E00)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteBird_TypeDefinitionIndex = 50598;

	class AlleyRouteBird : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlleyRouteBird_TypeDefinitionIndex)->GetStaticField(0x107D0);
		}
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlleyRouteBird_TypeDefinitionIndex)->GetStaticField(0x107D4);
		}
		// static const ::System::Single Field_5_2; // 0x0
		::System::Boolean Field_5_3; // 0x18
		::System::Single Field_5_4; // 0x1C
		::System::Single Field_5_5; // 0x20
		::System::String* Field_5_6; // 0x28
		::UnityEngine::Animator* Field_5_7; // 0x30

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
