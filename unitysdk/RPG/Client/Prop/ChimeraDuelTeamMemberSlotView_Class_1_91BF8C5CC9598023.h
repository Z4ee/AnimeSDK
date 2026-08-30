#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_CLASS_1_91BF8C5CC9598023__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E6DC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelTeamMemberSlotView_Class_1_91BF8C5CC9598023_TypeDefinitionIndex = 77889;

	class ChimeraDuelTeamMemberSlotView_Class_1_91BF8C5CC9598023 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView* FMJPMFEDIJL; // 0x10
		::System::Action* MGJLINFADJK; // 0x18
		::UnityEngine::Vector3 OAKCBDDKNKL; // 0x20
		::UnityEngine::Quaternion IBAPNDLNFMO; // 0x2C
		::UnityEngine::Quaternion HDEPGDKCFJK; // 0x3C
		::System::Single GAFENHHEBPG; // 0x4C
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x50
		::System::Boolean CAGCHKJHMPD; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_CLASS_1_91BF8C5CC9598023__CTOR_OFFSET))(this);
		}
	};
}
