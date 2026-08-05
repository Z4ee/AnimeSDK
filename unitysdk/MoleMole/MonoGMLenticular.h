#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoSlider; }
namespace MiHoYo::SDK::HoYoUI { class HoYoToggle; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_MONOGMLENTICULAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x129B5220)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x129B93E0)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_1_OFFSET UNITYSDK_OFFSET(0x129B86A0)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_2_OFFSET UNITYSDK_OFFSET(0x129B8870)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_3_OFFSET UNITYSDK_OFFSET(0x129B8A90)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_4_OFFSET UNITYSDK_OFFSET(0x129B8C70)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_5_OFFSET UNITYSDK_OFFSET(0x129B8E50)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_6_OFFSET UNITYSDK_OFFSET(0x129B9030)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_7_OFFSET UNITYSDK_OFFSET(0x129B9210)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_8_OFFSET UNITYSDK_OFFSET(0x129B9410)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_9_OFFSET UNITYSDK_OFFSET(0x129B95E0)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x129B84C0)
#define MOLEMOLE_MONOGMLENTICULAR_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x129B8A50)
#define MOLEMOLE_MONOGMLENTICULAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x129B5FA0)
#define MOLEMOLE_MONOGMLENTICULAR_OPENGMLENTICULAR_OFFSET UNITYSDK_OFFSET(0x129B7710)
#define MOLEMOLE_MONOGMLENTICULAR_RESETDATA_OFFSET UNITYSDK_OFFSET(0x129B5FF0)
#define MOLEMOLE_MONOGMLENTICULAR_UPDATEFINALINPUTVIEW_OFFSET UNITYSDK_OFFSET(0x129B8020)
#define MOLEMOLE_MONOGMLENTICULAR_UPDATEGYROSCOPEVIEW_OFFSET UNITYSDK_OFFSET(0x129B7760)
#define MOLEMOLE_MONOGMLENTICULAR_UPDATESTICKVIEW_OFFSET UNITYSDK_OFFSET(0x129B7BD0)
#define MOLEMOLE_MONOGMLENTICULAR__CTOR_OFFSET UNITYSDK_OFFSET(0x129B8470)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGMLenticular_TypeDefinitionIndex = 67062;

	class MonoGMLenticular : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action** StaticGet_OpenGMLenticularAction()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MonoGMLenticular_TypeDefinitionIndex)->GetStaticField(0x4AE30);
		}
		::MiHoYo::SDK::HoYoUI::HoYoToggle* PcResetToggle; // 0x18
		::MiHoYo::SDK::HoYoUI::HoYoToggle* IsPcUseDrag; // 0x20
		::MiHoYo::SDK::HoYoUI::HoYoToggle* IsPcUseDampToggle; // 0x28
		::MiHoYo::SDK::HoYoUI::HoYoToggle* IsStickUseDampToggle; // 0x30
		::MiHoYo::SDK::HoYoUI::HoYoToggle* IsGyroscopeUseDampToggle; // 0x38
		::MiHoYo::SDK::HoYoUI::HoYoToggle* UseOldGyroscopeToggle; // 0x40
		::MiHoYo::SDK::HoYoUI::HoYoSlider* PcDragSpeed_X; // 0x48
		::MiHoYo::SDK::HoYoUI::HoYoSlider* PcDragSpeed_Y; // 0x50
		::MiHoYo::SDK::HoYoUI::HoYoSlider* ConsoleGyroscopeRate; // 0x58
		::MiHoYo::SDK::HoYoUI::HoYoSlider* MobileGyroscopeRate; // 0x60
		::MiHoYo::SDK::HoYoUI::HoYoSlider* StickMoveRate; // 0x68
		::MiHoYo::SDK::HoYoUI::HoYoSlider* GyroscopeSpeed; // 0x70
		::MiHoYo::SDK::HoYoUI::HoYoSlider* PCLerpTweenRate; // 0x78
		::MiHoYo::SDK::HoYoUI::HoYoSlider* GyroscopeIgnoreRate; // 0x80
		::UnityEngine::UI::Extension::UIButtonEx* CloseBtn; // 0x88
		::UnityEngine::UI::Extension::UIButtonEx* GyroscopeViewBtn; // 0x90
		::UnityEngine::GameObject* GyroscopeView; // 0x98
		::MiHoYo::SDK::HoYoUI::HoYoSlider* GyroscopeView_X; // 0xA0
		::MiHoYo::SDK::HoYoUI::HoYoSlider* GyroscopeView_Y; // 0xA8
		::MiHoYo::SDK::HoYoUI::HoYoSlider* StickView_X; // 0xB0
		::MiHoYo::SDK::HoYoUI::HoYoSlider* StickView_Y; // 0xB8
		::MiHoYo::SDK::HoYoUI::HoYoSlider* FinalInputView_X; // 0xC0
		::MiHoYo::SDK::HoYoUI::HoYoSlider* FinalInputView_Y; // 0xC8
		::MiHoYo::SDK::HoYoUI::HoYoSlider* DampRate; // 0xD0
		::MiHoYo::SDK::HoYoUI::HoYoSlider* PCDampRate; // 0xD8
		::UnityEngine::UI::Dropdown* GyroType; // 0xE0
		::UnityEngine::UI::Dropdown* StickType; // 0xE8
		::UnityEngine::UI::Dropdown* GyroStickMergeType; // 0xF0
		::UnityEngine::UI::Dropdown* CardClampType; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_ONENABLE_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_RESETDATA_OFFSET))(this);
		}

		static ::System::Void OpenGMLenticular()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_OPENGMLENTICULAR_OFFSET))();
		}

		::System::Void UpdateGyroscopeView(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_UPDATEGYROSCOPEVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateStickView(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_UPDATESTICKVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateFinalInputView(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_UPDATEFINALINPUTVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_A5ADA4706DA592FA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_OFFSET))(this, a1);
		}

		::System::Void Method_5_A5ADA4706DA592FA_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_A5ADA4706DA592FA_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A5ADA4706DA592FA_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_3_OFFSET))(this, a1);
		}

		::System::Void Method_5_A5ADA4706DA592FA_4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_4_OFFSET))(this, a1);
		}

		::System::Void Method_5_A5ADA4706DA592FA_5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_5_OFFSET))(this, a1);
		}

		::System::Void Method_5_A5ADA4706DA592FA_6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_6_OFFSET))(this, a1);
		}

		::System::Void Method_5_A5ADA4706DA592FA_7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_7_OFFSET))(this, a1);
		}

		::System::Void Method_5_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_5_A5ADA4706DA592FA_8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_8_OFFSET))(this, a1);
		}

		::System::Void Method_5_A5ADA4706DA592FA_9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGMLENTICULAR_METHOD_5_A5ADA4706DA592FA_9_OFFSET))(this, a1);
		}
	};
}
