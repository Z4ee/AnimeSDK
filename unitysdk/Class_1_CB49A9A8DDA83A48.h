#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/GateLinkInfoState.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_1_CB49A9A8DDA83A48__CTOR_OFFSET UNITYSDK_OFFSET(0x16925160)

inline static constexpr unsigned int Class_1_CB49A9A8DDA83A48_TypeDefinitionIndex = 78430;

class Class_1_CB49A9A8DDA83A48 : public ::System::Object
{
public:
	::UnityEngine::Animator* LIDKMNACABL; // 0x10
	::RPG::Client::OpenWorld::StreamingItemData* AJAKFOIKGFB; // 0x18
	::UnityEngine::Material* IHNGLPPJBOG; // 0x20
	::BansheeGz::BGSpline::Components::BGCcMath* PPLLBFCFOJP; // 0x28
	::UnityEngine::GameObject* ENOEPOFFCPP; // 0x30
	::System::Boolean BNCIEEMIJPD; // 0x38
	::RPG::Client::Prop::GateLinkInfoState DOOCLDPKGKM; // 0x3C
	::RPG::Client::Prop::GateLinkInfoState LKAJMOGMNPI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB49A9A8DDA83A48__CTOR_OFFSET))(this);
	}
};
