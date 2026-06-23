#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER_ANIMSINGLELEVELDATA_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x17210A40)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER_ANIMSINGLELEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17210AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogPopWindowController_AnimSingleLevelData_TypeDefinitionIndex = 77737;

	class UIHollowCollectRewardDialogPopWindowController_AnimSingleLevelData : public ::System::Object
	{
	public:
		::System::Int32 m_rightNum; // 0x10
		::System::Int32 m_leftNum; // 0x14
		::System::Int32 m_rewardNum; // 0x18

		::System::Void _ctor(::System::Int32 leftNum, ::System::Int32 rightNum, ::System::Int32 rewardNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER_ANIMSINGLELEVELDATA__CTOR_OFFSET))(this, leftNum, rightNum, rewardNum);
		}

		::System::Single get_Ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER_ANIMSINGLELEVELDATA_GET_RATIO_OFFSET))(this);
		}
	};
}
