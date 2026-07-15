#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6CC143B9599F1FCA;
namespace RPG::Client { class LocalizedText; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PLANETFESANIMEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A0EBC80)
#define RPG_CLIENT_PLANETFESANIMEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1A0EBCC0)
#define RPG_CLIENT_PLANETFESANIMEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0EBBF0)
#define RPG_CLIENT_PLANETFESANIMEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1A0EBF10)
#define RPG_CLIENT_PLANETFESANIMEFFECT_SETICON_OFFSET UNITYSDK_OFFSET(0x1A0EBE60)
#define RPG_CLIENT_PLANETFESANIMEFFECT_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x1A0EBDF0)
#define RPG_CLIENT_PLANETFESANIMEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1A0EBC40)
#define RPG_CLIENT_PLANETFESANIMEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0EC060)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAnimEffect_TypeDefinitionIndex = 63517;

	class PlanetFesAnimEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Field_5_0; // 0x18
		::UnityEngine::UI::Image* Field_5_1; // 0x20
		::RPG::Client::LocalizedText* Field_5_2; // 0x28
		::Class_1_6CC143B9599F1FCA* Field_5_3; // 0x30

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
