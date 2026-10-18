#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace SuperScrollView { class LoopListView2; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xD4E7A00)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xD4E8130)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0xD4E83F0)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xD4E78D0)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD4E7880)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xD4E8370)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xD4E8470)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xD4E84F0)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_START_OFFSET UNITYSDK_OFFSET(0xD4E77A0)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_UPDATE_OFFSET UNITYSDK_OFFSET(0xD4E7990)
#define RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0xD4E8510)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopListViewCircleSnapExtra_TypeDefinitionIndex = 69017;

	class LoopListViewCircleSnapExtra : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* HFDJDHLLNFA; // 0x18
		::System::Single MFNFNEMGFEO; // 0x20
		::System::Single OMCCLONEMAK; // 0x24
		::System::Single IBHGOKKLGLN; // 0x28
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

		::System::Void Method_5_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_2CBE0B79DD36047E_OFFSET))(this);
		}

		::System::Void Method_5_8F7825DAFFB9B517()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWCIRCLESNAPEXTRA_METHOD_5_8F7825DAFFB9B517_OFFSET))(this);
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
