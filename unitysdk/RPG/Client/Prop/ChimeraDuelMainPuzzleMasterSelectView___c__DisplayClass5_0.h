#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMasterSelectView; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA052800)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___C__DISPLAYCLASS5_0___CREATEMASTERENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xA052EB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleMasterSelectView___c__DisplayClass5_0_TypeDefinitionIndex = 63830;

	class ChimeraDuelMainPuzzleMasterSelectView___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelMainPuzzleMasterSelectView* __4__this; // 0x10
		::UnityEngine::Transform* anchor; // 0x18
		::System::UInt32 groupID; // 0x20
		::System::UInt32 configID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateMasterEntity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___C__DISPLAYCLASS5_0___CREATEMASTERENTITY_B__0_OFFSET))(this);
		}
	};
}
