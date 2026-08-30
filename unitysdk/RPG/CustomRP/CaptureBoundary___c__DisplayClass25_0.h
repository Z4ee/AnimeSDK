#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace RPG::CustomRP { class CaptureBoundary; }
namespace RPG::CustomRP { class CaptureBoundary_FetchTextureDelegate; }
namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__0_OFFSET UNITYSDK_OFFSET(0x1C688070)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__1_OFFSET UNITYSDK_OFFSET(0x1C6880A0)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__2_OFFSET UNITYSDK_OFFSET(0x1C6880D0)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6875C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureBoundary___c__DisplayClass25_0_TypeDefinitionIndex = 36913;

	class CaptureBoundary___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::UnityEngine::Camera* camera; // 0x10
		::RPG::CustomRP::CaptureBoundary_FetchTextureDelegate* fd; // 0x18
		::RPG::CustomRP::CaptureBoundary* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _CaptureImpl_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__0_OFFSET))(this);
		}

		::System::Void _CaptureImpl_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__1_OFFSET))(this);
		}

		::System::Void _CaptureImpl_b__2(::Unity::Collections::NativeArray_1<::System::Byte>& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__2_OFFSET))(this, a1);
		}
	};
}
