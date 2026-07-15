#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FABRIK; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FABRIK_WEAPONCONTROL_OTHERHAND_METHOD_1_CD5C08A2521794A0_OFFSET UNITYSDK_OFFSET(0x196D4780)
#define RPG_CLIENT_FABRIK_WEAPONCONTROL_OTHERHAND__CTOR_OFFSET UNITYSDK_OFFSET(0x196D4880)

namespace RPG::Client
{
	inline static constexpr unsigned int FABRIK_WeaponControl_OtherHand_TypeDefinitionIndex = 65377;

	class FABRIK_WeaponControl_OtherHand : public ::System::Object
	{
	public:
		::RPG::Client::FABRIK* ik; // 0x10
		::UnityEngine::Transform* handPoint; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* handControlPoints; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_OTHERHAND__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_CD5C08A2521794A0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_WEAPONCONTROL_OTHERHAND_METHOD_1_CD5C08A2521794A0_OFFSET))(this);
		}
	};
}
