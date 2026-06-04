#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class SetBtnBattleHintInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_BA1B0419616F58E2_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x13B3AE30)
#define CLASS_2_BA1B0419616F58E2_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x13B3AE50)
#define CLASS_2_BA1B0419616F58E2_METHOD_2_2705868B3834B3D2_OFFSET UNITYSDK_OFFSET(0x13B3B200)
#define CLASS_2_BA1B0419616F58E2_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x13B3AF30)
#define CLASS_2_BA1B0419616F58E2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13B3B4B0)
#define CLASS_2_BA1B0419616F58E2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13B3B450)
#define CLASS_2_BA1B0419616F58E2_METHOD_2_6C7C1851390522A0_OFFSET UNITYSDK_OFFSET(0x13B3B160)
#define CLASS_2_BA1B0419616F58E2_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x13B3AFE0)
#define CLASS_2_BA1B0419616F58E2_METHOD_2_96901355422487A1_OFFSET UNITYSDK_OFFSET(0x13B3B510)
#define CLASS_2_BA1B0419616F58E2_METHOD_2_AD14E86637DD3086_OFFSET UNITYSDK_OFFSET(0x13B3AE60)
#define CLASS_2_BA1B0419616F58E2_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x13B3B050)
#define CLASS_2_BA1B0419616F58E2_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x13B3AE40)
#define CLASS_2_BA1B0419616F58E2__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3B360)
#define CLASS_2_BA1B0419616F58E2__ONBIND_OFFSET UNITYSDK_OFFSET(0x13B3AD40)
#define CLASS_2_BA1B0419616F58E2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13B3B3F0)

inline static constexpr unsigned int Class_2_BA1B0419616F58E2_TypeDefinitionIndex = 67134;

class Class_2_BA1B0419616F58E2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_1; // 0x60
	::UnityEngine::UI::Text* Field_2_2; // 0x68
	::UnityEngine::UI::Button* Field_2_3; // 0x70
	::RPG::Client::TextID Field_2_4; // 0x78
	::System::Int32 _Index_k__BackingField; // 0x88
	::System::UInt32 Field_2_6; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_AD14E86637DD3086(::RPG::GameCore::SetBtnBattleHintInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetBtnBattleHintInfo*))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_METHOD_2_AD14E86637DD3086_OFFSET))(this, a1);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_6C7C1851390522A0(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_METHOD_2_6C7C1851390522A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_2705868B3834B3D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_METHOD_2_2705868B3834B3D2_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_96901355422487A1(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_BA1B0419616F58E2_METHOD_2_96901355422487A1_OFFSET))(this, a1);
	}
};
