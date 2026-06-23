#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYERUI_GET_COLORLIST_OFFSET UNITYSDK_OFFSET(0x1AA56350)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYERUI_GET_GRADIENTCOLORLIST_OFFSET UNITYSDK_OFFSET(0x1AA56440)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA56700)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMultiplayerUI_TypeDefinitionIndex = 43944;

	class ConfigMultiplayerUI : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::Color Member_1_Color; // 0x58
		::UnityEngine::Color Member_2_Color; // 0x68
		::UnityEngine::Color Member_3_Color; // 0x78
		::UnityEngine::Color Member_GradientColor_Top_1; // 0x88
		::UnityEngine::Color Member_GradientColor_Bottom_1; // 0x98
		::UnityEngine::Color Member_GradientColor_Left_1; // 0xA8
		::UnityEngine::Color Member_GradientColor_Right_1; // 0xB8
		::UnityEngine::Color Member_GradientColor_Top_2; // 0xC8
		::UnityEngine::Color Member_GradientColor_Bottom_2; // 0xD8
		::UnityEngine::Color Member_GradientColor_Left_2; // 0xE8
		::UnityEngine::Color Member_GradientColor_Right_2; // 0xF8
		::UnityEngine::Color Member_GradientColor_Top_3; // 0x108
		::UnityEngine::Color Member_GradientColor_Bottom_3; // 0x118
		::UnityEngine::Color Member_GradientColor_Left_3; // 0x128
		::UnityEngine::Color Member_GradientColor_Right_3; // 0x138
		::System::Single DistanceToMemberShowGuidePoint; // 0x148
		::System::String* MultiPlayerBossSpecialUIPath; // 0x150
		::UnityEngine::Color ReviveProgressBarColor_Dying; // 0x158
		::UnityEngine::Color ReviveProgressBarColor_Reviving; // 0x168
		::UnityEngine::Color ReviveProgressBarColor_Dying_A; // 0x178
		::UnityEngine::Color ReviveProgressBarColor_Dying_B; // 0x188
		::UnityEngine::Color ReviveProgressBarColor_Dying_Pattern; // 0x198
		::UnityEngine::Color ReviveProgressBarColor_Aidinging_A; // 0x1A8
		::UnityEngine::Color ReviveProgressBarColor_Aidinging_B; // 0x1B8
		::UnityEngine::Color ReviveProgressBarColor_Aidinging_Pattern; // 0x1C8
		::System::Single MemberTickTime; // 0x1D8
		::System::Single UseEntityLocalPosDistance; // 0x1DC
		::System::Single MPMessageDisappearTime; // 0x1E0
		::UnityEngine::Color EmoticonWheelCDMaskColor; // 0x1E4
		::System::String* TeamReviveItemPath; // 0x1F8
		::System::String* TreasureItemPath; // 0x200
		::System::String* ClueItemPath; // 0x208
		::UnityEngine::Color GroupGoalFinishColor; // 0x210
		::UnityEngine::Color GroupGoalProgressingColor; // 0x220
		::System::Single AFKTickTime; // 0x230
		::System::Single CheckPlayerDisconnectedTime; // 0x234

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYERUI__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Color>* get_ColorList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYERUI_GET_COLORLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Color>*>* get_GradientColorList()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Color>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYERUI_GET_GRADIENTCOLORLIST_OFFSET))(this);
		}
	};
}
