#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_MotionConfig; }
namespace RPG::Client::Prop { class ChimeraDuelShopChimeraInstanceView; }
namespace RPG::Client::Prop { class ChimeraDuelTeamMemberSlotView_Class_1_91BF8C5CC9598023; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_METHOD_5_0E077E62EF2EFC16_OFFSET UNITYSDK_OFFSET(0xC51EBE0)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_METHOD_5_5AFB73477BDE8482_OFFSET UNITYSDK_OFFSET(0xC51E600)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_METHOD_5_7619D212F4D762A1_OFFSET UNITYSDK_OFFSET(0xC51EC80)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_METHOD_5_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xC51E940)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_METHOD_5_B28695407764C700_OFFSET UNITYSDK_OFFSET(0xC51EA30)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xC51EC30)
#define RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xC51EF00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelTeamMemberSlotView_TypeDefinitionIndex = 72878;

	class ChimeraDuelTeamMemberSlotView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::ChimeraDuelTeamMemberSlotView_Class_1_91BF8C5CC9598023* Field_5_0; // 0x18
		::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_0E077E62EF2EFC16(::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_METHOD_5_0E077E62EF2EFC16_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_UPDATE_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView* Method_5_5AFB73477BDE8482()
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopChimeraInstanceView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_METHOD_5_5AFB73477BDE8482_OFFSET))(this);
		}

		::System::Void Method_5_B28695407764C700(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_METHOD_5_B28695407764C700_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_7619D212F4D762A1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_METHOD_5_7619D212F4D762A1_OFFSET))(this, a1);
		}

		::System::Void Method_5_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELTEAMMEMBERSLOTVIEW_METHOD_5_A1ADC999CFACEB89_OFFSET))(this);
		}
	};
}
