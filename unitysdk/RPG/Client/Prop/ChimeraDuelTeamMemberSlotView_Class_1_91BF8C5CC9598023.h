#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_CLASS_1_91BF8C5CC9598023__CTOR_OFFSET UNITYSDK_OFFSET(0xA05C580)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelTeamMemberSlotView_Class_1_91BF8C5CC9598023_TypeDefinitionIndex = 63810;

	class ChimeraDuelTeamMemberSlotView_Class_1_91BF8C5CC9598023 : public ::System::Object
	{
	public:
		::System::Action* Field_1_3; // 0x10
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView* Field_1_0; // 0x18
		::UnityEngine::Quaternion Field_1_7; // 0x20
		::UnityEngine::Quaternion Field_1_5; // 0x30
		::UnityEngine::Vector3 Field_1_4; // 0x40
		::System::Boolean Field_1_1; // 0x4C
		::UnityEngine::Vector3 Field_1_6; // 0x50
		::System::Single Field_1_2; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_CLASS_1_91BF8C5CC9598023__CTOR_OFFSET))(this);
		}
	};
}
