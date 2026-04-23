#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMasterSelectView; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xADD2010)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___C__DISPLAYCLASS6_0___CREATEMASTERENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xADD27D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleMasterSelectView___c__DisplayClass6_0_TypeDefinitionIndex = 71877;

	class ChimeraDuelMainPuzzleMasterSelectView___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* anchor; // 0x10
		::RPG::Client::Prop::ChimeraDuelMainPuzzleMasterSelectView* __4__this; // 0x18
		::System::UInt32 groupID; // 0x20
		::System::UInt32 configID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateMasterEntity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___C__DISPLAYCLASS6_0___CREATEMASTERENTITY_B__0_OFFSET))(this);
		}
	};
}
