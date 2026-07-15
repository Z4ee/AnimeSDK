#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace RPG::CustomRP { class CaptureScene; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__0_OFFSET UNITYSDK_OFFSET(0x1781CAE0)
#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__1_OFFSET UNITYSDK_OFFSET(0x1781CCA0)
#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__2_OFFSET UNITYSDK_OFFSET(0x1781CDB0)
#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1781BF20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureScene___c__DisplayClass10_0_TypeDefinitionIndex = 36054;

	class CaptureScene___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* cameraTran; // 0x10
		::UnityEngine::Camera* camera; // 0x18
		::RPG::CustomRP::CaptureScene* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _Capture_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__0_OFFSET))(this);
		}

		::System::Void _Capture_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__1_OFFSET))(this);
		}

		::System::Void _Capture_b__2(::Unity::Collections::NativeArray_1<::System::Byte>& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__2_OFFSET))(this, a1);
		}
	};
}
