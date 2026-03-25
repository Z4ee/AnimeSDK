#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace SuperScrollView { class LoopListView2; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x9A6DEA0)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x9A6E9A0)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x9A6DD70)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9A6DD20)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x9A6E920)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x9A6EA20)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x9A6EAA0)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x9A6E660)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_START_OFFSET UNITYSDK_OFFSET(0x9A6DC40)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9A6DE30)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A6EAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopListViewCircleSnapExtra_TypeDefinitionIndex = 56379;

	class LoopListViewCircleSnapExtra : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x20
		::System::Single Field_5_2; // 0x24
		::System::Single Field_5_3; // 0x28
		::System::String* _CustomAnimationClipName; // 0x30
		::UnityEngine::RectTransform* _ViewPort; // 0x38
		::UnityEngine::Transform* _PCCenterOfCircle; // 0x40
		::System::Single _PCRadius; // 0x48
		::System::Single _PCShownCircleAngle; // 0x4C
		::UnityEngine::Transform* _MobileCenterOfCircle; // 0x50
		::System::Single _MobileRadius; // 0x58
		::System::Single _MobileShownCircleAngle; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_33E2FA8E6403B93D_OFFSET))(this);
		}

		::System::Void Method_5_F4DD08A31BA3F883()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_F4DD08A31BA3F883_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_C561FF611C07A44C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_C561FF611C07A44C_OFFSET))(this);
		}

		::System::Boolean Method_5_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_F0E307B84478A272_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_5_90EC931103FB6F31()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_90EC931103FB6F31_OFFSET))(this);
		}

		::System::Single Method_5_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::System::Single Method_5_D64FD9A228A1C4E0_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_D64FD9A228A1C4E0_1_OFFSET))(this);
		}
	};
}
