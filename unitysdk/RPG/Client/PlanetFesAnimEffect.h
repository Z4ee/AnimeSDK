#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2201B1A0B73C7EF3;
namespace RPG::Client { class LocalizedText; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PLANETFESANIMEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDB6E690)
#define RPG_CLIENT_PLANETFESANIMEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xDB6E6D0)
#define RPG_CLIENT_PLANETFESANIMEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDB6E600)
#define RPG_CLIENT_PLANETFESANIMEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xDB6E920)
#define RPG_CLIENT_PLANETFESANIMEFFECT_SETICON_OFFSET UNITYSDK_OFFSET(0xDB6E870)
#define RPG_CLIENT_PLANETFESANIMEFFECT_SETNUMBER_OFFSET UNITYSDK_OFFSET(0xDB6E800)
#define RPG_CLIENT_PLANETFESANIMEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDB6E650)
#define RPG_CLIENT_PLANETFESANIMEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xDB6EA70)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAnimEffect_TypeDefinitionIndex = 66470;

	class PlanetFesAnimEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x18
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x20
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x28
		::Class_1_2201B1A0B73C7EF3* DLALHGJDNNO; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESANIMEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESANIMEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESANIMEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESANIMEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESANIMEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetNumber(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESANIMEFFECT_SETNUMBER_OFFSET))(this, a1);
		}

		::System::Void SetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESANIMEFFECT_SETICON_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESANIMEFFECT_PLAY_OFFSET))(this, a1, a2);
		}
	};
}
