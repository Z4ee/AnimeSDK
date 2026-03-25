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

#define CLASS_2_A57F96D4E8D4CCCA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9EEEF00)
#define CLASS_2_A57F96D4E8D4CCCA_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x9EEEF20)
#define CLASS_2_A57F96D4E8D4CCCA_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x9EEF000)
#define CLASS_2_A57F96D4E8D4CCCA_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9EEF5A0)
#define CLASS_2_A57F96D4E8D4CCCA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9EEF540)
#define CLASS_2_A57F96D4E8D4CCCA_METHOD_2_6C7C1851390522A0_OFFSET UNITYSDK_OFFSET(0x9EEF210)
#define CLASS_2_A57F96D4E8D4CCCA_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x9EEF0B0)
#define CLASS_2_A57F96D4E8D4CCCA_METHOD_2_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x9EEF120)
#define CLASS_2_A57F96D4E8D4CCCA_METHOD_2_AD14E86637DD3086_OFFSET UNITYSDK_OFFSET(0x9EEEF30)
#define CLASS_2_A57F96D4E8D4CCCA_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x9EEF2B0)
#define CLASS_2_A57F96D4E8D4CCCA_METHOD_2_F0880AD023811E29_OFFSET UNITYSDK_OFFSET(0x9EEF600)
#define CLASS_2_A57F96D4E8D4CCCA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9EEEF10)
#define CLASS_2_A57F96D4E8D4CCCA__CTOR_OFFSET UNITYSDK_OFFSET(0x9EEF450)
#define CLASS_2_A57F96D4E8D4CCCA__ONBIND_OFFSET UNITYSDK_OFFSET(0x9EEED40)
#define CLASS_2_A57F96D4E8D4CCCA___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9EEF4E0)

inline static constexpr unsigned int Class_2_A57F96D4E8D4CCCA_TypeDefinitionIndex = 58830;

class Class_2_A57F96D4E8D4CCCA : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_0; // 0x68
	::UnityEngine::UI::Button* Field_2_2; // 0x70
	::System::UInt32 Field_2_6; // 0x78
	::System::Int32 _Index_k__BackingField; // 0x7C
	::RPG::Client::TextID Field_2_5; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_AD14E86637DD3086(::RPG::GameCore::SetBtnBattleHintInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetBtnBattleHintInfo*))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_METHOD_2_AD14E86637DD3086_OFFSET))(this, a1);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_9B92C44D5842AA8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_METHOD_2_9B92C44D5842AA8A_OFFSET))(this);
	}

	::System::Void Method_2_6C7C1851390522A0(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_METHOD_2_6C7C1851390522A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_METHOD_2_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_F0880AD023811E29(::InControl::InputDeviceClass P0)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_A57F96D4E8D4CCCA_METHOD_2_F0880AD023811E29_OFFSET))(this, P0);
	}
};
