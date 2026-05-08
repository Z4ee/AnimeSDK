#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_E87F1D15F1D4AC72;
class Class_2_EA8F026699B496CE;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIRepelPrepGroupWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_31D5CB4A95FA6DEC_METHOD_2_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x112374D0)
#define CLASS_2_31D5CB4A95FA6DEC_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x112383E0)
#define CLASS_2_31D5CB4A95FA6DEC_METHOD_2_19D12BDB4574A166_OFFSET UNITYSDK_OFFSET(0x11237FB0)
#define CLASS_2_31D5CB4A95FA6DEC_METHOD_2_4E8D1141D67806DA_OFFSET UNITYSDK_OFFSET(0x112379C0)
#define CLASS_2_31D5CB4A95FA6DEC_METHOD_2_9292217C488E94FF_OFFSET UNITYSDK_OFFSET(0x112381F0)
#define CLASS_2_31D5CB4A95FA6DEC_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x11237620)
#define CLASS_2_31D5CB4A95FA6DEC_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11238120)
#define CLASS_2_31D5CB4A95FA6DEC_METHOD_2_E2CFE21492926DBB_OFFSET UNITYSDK_OFFSET(0x11236FE0)
#define CLASS_2_31D5CB4A95FA6DEC_METHOD_2_FCA9EB4F40EFF2CE_OFFSET UNITYSDK_OFFSET(0x11237670)
#define CLASS_2_31D5CB4A95FA6DEC__CTOR_OFFSET UNITYSDK_OFFSET(0x11237530)

inline static constexpr unsigned int Class_2_31D5CB4A95FA6DEC_TypeDefinitionIndex = 57445;

class Class_2_31D5CB4A95FA6DEC : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIRepelPrepGroupWidgetController*>* Field_2_1; // 0x50
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_5; // 0x58
	::MoleMole::UIActivityCompRewardBtnGroupWidgetController* Field_2_4; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_2; // 0x68
	::MoleMole::MonoGamepadCustomList* Field_2_6; // 0x70
	::MoleMole::UIRepelPrepGroupWidgetController* Field_2_3; // 0x78
	::System::Int32 Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D5CB4A95FA6DEC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E2CFE21492926DBB(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_31D5CB4A95FA6DEC_METHOD_2_E2CFE21492926DBB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_31D5CB4A95FA6DEC_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCA9EB4F40EFF2CE(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_31D5CB4A95FA6DEC_METHOD_2_FCA9EB4F40EFF2CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E8D1141D67806DA(::System::Collections::Generic::List_1<::Class_2_EA8F026699B496CE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_EA8F026699B496CE*>*))((::PBYTE)hIl2Cpp + CLASS_2_31D5CB4A95FA6DEC_METHOD_2_4E8D1141D67806DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_19D12BDB4574A166(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_31D5CB4A95FA6DEC_METHOD_2_19D12BDB4574A166_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D5CB4A95FA6DEC_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_9292217C488E94FF(::Class_2_EA8F026699B496CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_EA8F026699B496CE*))((::PBYTE)hIl2Cpp + CLASS_2_31D5CB4A95FA6DEC_METHOD_2_9292217C488E94FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D5CB4A95FA6DEC_METHOD_2_07BB45288DFF8852_OFFSET))(this);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D5CB4A95FA6DEC_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}
};
