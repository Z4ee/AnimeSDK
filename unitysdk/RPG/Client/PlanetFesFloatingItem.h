#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6CC143B9599F1FCA;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class QuadricBezier; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PLANETFESFLOATINGITEM_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C372860)
#define RPG_CLIENT_PLANETFESFLOATINGITEM_METHOD_5_2EA3D2C84685E32A_OFFSET UNITYSDK_OFFSET(0x1C372A60)
#define RPG_CLIENT_PLANETFESFLOATINGITEM_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1C3728A0)
#define RPG_CLIENT_PLANETFESFLOATINGITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C3727D0)
#define RPG_CLIENT_PLANETFESFLOATINGITEM_PLAY_OFFSET UNITYSDK_OFFSET(0x1C370CA0)
#define RPG_CLIENT_PLANETFESFLOATINGITEM_SETICON_OFFSET UNITYSDK_OFFSET(0x1C370B90)
#define RPG_CLIENT_PLANETFESFLOATINGITEM_SETNUMBER_OFFSET UNITYSDK_OFFSET(0x1C370C40)
#define RPG_CLIENT_PLANETFESFLOATINGITEM_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C372820)
#define RPG_CLIENT_PLANETFESFLOATINGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C372CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingItem_TypeDefinitionIndex = 66530;

	class PlanetFesFloatingItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x18
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x20
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x28
		::UnityEngine::Transform* CEEAKCACHGJ; // 0x30
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x38
		::RPG::Client::QuadricBezier* BKHMEKLPNHJ; // 0x40
		::Class_1_6CC143B9599F1FCA* DLALHGJDNNO; // 0x48
		::System::Single HBDJCFFDGDD; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGITEM__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGITEM_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGITEM_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGITEM_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetNumber(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGITEM_SETNUMBER_OFFSET))(this, a1);
		}

		::System::Void SetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGITEM_SETICON_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGITEM_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_5_2EA3D2C84685E32A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGITEM_METHOD_5_2EA3D2C84685E32A_OFFSET))(this, a1, a2);
		}
	};
}
