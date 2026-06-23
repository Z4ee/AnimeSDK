#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"

class Class_2_1A39E1B51756BF41;
namespace MoleMole { class UIKeyBindingContext; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_6A97131EF0C46C32_OFFSET UNITYSDK_OFFSET(0x154F4790)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_7543C0FD37466B05_OFFSET UNITYSDK_OFFSET(0x154F4950)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x154F3D70)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_84B92802FDAFF6C8_1_OFFSET UNITYSDK_OFFSET(0x154F3E40)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x154F4300)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_859C6F275AA877D1_OFFSET UNITYSDK_OFFSET(0x154F4530)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x154F3D20)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_B5E63D8490540221_OFFSET UNITYSDK_OFFSET(0x154F4070)
#define CLASS_1_00CE3360E2CE5BB6_METHOD_1_F1455941B8C64246_OFFSET UNITYSDK_OFFSET(0x154F3B70)
#define CLASS_1_00CE3360E2CE5BB6__CTOR_OFFSET UNITYSDK_OFFSET(0x154F3B30)

inline static constexpr unsigned int Class_1_00CE3360E2CE5BB6_TypeDefinitionIndex = 39866;

class Class_1_00CE3360E2CE5BB6 : public ::System::Object
{
public:
	::Class_2_1A39E1B51756BF41* Field_1_5; // 0x10
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_6; // 0x18
	::Class_2_1A39E1B51756BF41* Field_1_4; // 0x20
	::MoleMole::UIKeyBindingContext* Field_1_0; // 0x28
	::MoleMole::LogicButtonInputType Field_1_3; // 0x30
	::System::Boolean Field_1_7; // 0x34
	::System::Int32 Field_1_8; // 0x38
	::Enum_3_A019F766F8C74696 Field_1_1; // 0x3C
	::Enum_3_54486B88E1863A04 Field_1_2; // 0x40

	::System::Void _ctor(::MoleMole::UIKeyBindingContext* a1, ::MoleMole::LogicButtonInputType a2, ::Class_2_1A39E1B51756BF41* a3, ::Class_2_1A39E1B51756BF41* a4, ::UnityEngine::UI::Extension::UILocalizationText* a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIKeyBindingContext*, ::MoleMole::LogicButtonInputType, ::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F1455941B8C64246(::UnityEngine::InputSystem::Key a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_F1455941B8C64246_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Int32 Method_1_B5E63D8490540221()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_B5E63D8490540221_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_84B92802FDAFF6C8_1_OFFSET))(this);
	}

	::System::Void Method_1_859C6F275AA877D1(::UnityEngine::InputSystem::LowLevel::GamepadButton a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::GamepadButton))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_859C6F275AA877D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6A97131EF0C46C32(::UnityEngine::InputSystem::LowLevel::MouseButton a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::MouseButton))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_6A97131EF0C46C32_OFFSET))(this, a1);
	}

	::MoleMole::LogicButtonInputType Method_1_7543C0FD37466B05()
	{
		return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00CE3360E2CE5BB6_METHOD_1_7543C0FD37466B05_OFFSET))(this);
	}
};
