#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_5DA2E7556103D5A3_111;
class Class_2_104EA16A1BE40F83;
class Class_2_10C1E1662BD0781C_2_Class_1_025C70E19F82BF2F_2;
class Class_2_1824EF69C8E376A3;
class Class_2_1A39E1B51756BF41;
class Class_2_214A08D8A91F32A6;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
class Class_2_F8EB4D9464ADCCA1;
class Class_3_3D3D5AB52AC6095A;
class UIWidgetGroup;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_0002FD427F9DA06E_OFFSET UNITYSDK_OFFSET(0x188CBC40)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x188CADA0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_10CE3AEE57BD55F1_OFFSET UNITYSDK_OFFSET(0x188C94C0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_1734DB95D619A946_OFFSET UNITYSDK_OFFSET(0x188C9B90)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_19E90D38E6EEDFBF_OFFSET UNITYSDK_OFFSET(0x188C92A0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_235955235A779D88_OFFSET UNITYSDK_OFFSET(0x188CC0A0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x188CA530)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_46E9DDDC2521D6C4_OFFSET UNITYSDK_OFFSET(0x188CBE30)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x188CAE50)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x188CC7F0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x188CA920)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_7F62DEBE566C05B0_OFFSET UNITYSDK_OFFSET(0x188C9980)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x188CC560)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x188C9080)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_8D248181D7FE6805_OFFSET UNITYSDK_OFFSET(0x188CBA50)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_925EA3B2013DFD65_OFFSET UNITYSDK_OFFSET(0x188CA040)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x188C9D20)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_9D93784F2D1F2752_OFFSET UNITYSDK_OFFSET(0x188C7830)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x188C9C30)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x188CAEB0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_ADE7EC82E13C7741_OFFSET UNITYSDK_OFFSET(0x188C9130)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_AFAA3CCA4A0E4337_OFFSET UNITYSDK_OFFSET(0x188CB020)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x188CA210)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_C65450796561054F_OFFSET UNITYSDK_OFFSET(0x188CB1C0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x188C9FC0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_D20FD81754C01453_OFFSET UNITYSDK_OFFSET(0x188CA4B0)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_EA149D03B07F4731_OFFSET UNITYSDK_OFFSET(0x188CC350)
#define CLASS_2_9FCC85CCFECD4422_2_METHOD_2_F9DD5BEBBFAE60E4_OFFSET UNITYSDK_OFFSET(0x188C9900)
#define CLASS_2_9FCC85CCFECD4422_2__CTOR_OFFSET UNITYSDK_OFFSET(0x188C8DE0)

inline static constexpr unsigned int Class_2_9FCC85CCFECD4422_2_TypeDefinitionIndex = 82939;

class Class_2_9FCC85CCFECD4422_2 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	// static const ::System::Int32 Field_2_0 = 0xFFFFFC18; // 0x0
	::UIWidgetGroup* Field_2_36; // 0x50
	::Class_2_104EA16A1BE40F83* Field_2_40; // 0x58
	::UnityEngine::GameObject* Field_2_20; // 0x60
	::UnityEngine::GameObject* Field_2_18; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_43; // 0x70
	::Class_2_1A39E1B51756BF41* Field_2_19; // 0x78
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x80
	::Class_2_B4378B46E0020E85* Field_2_28; // 0x88
	::System::Collections::Generic::List_1<::Class_2_10C1E1662BD0781C_2_Class_1_025C70E19F82BF2F_2*>* Field_2_37; // 0x90
	::Class_3_3D3D5AB52AC6095A* Field_2_39; // 0x98
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_2_42; // 0xA8
	::UnityEngine::RectTransform* Field_2_8; // 0xB0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0xB8
	::UnityEngine::GameObject* Field_2_24; // 0xC0
	::UnityEngine::GameObject* Field_2_32; // 0xC8
	::Class_2_B4378B46E0020E85* Field_2_4; // 0xD0
	::UnityEngine::GameObject* Field_2_7; // 0xD8
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0xE0
	::UnityEngine::GameObject* Field_2_23; // 0xE8
	::UnityEngine::GameObject* Field_2_34; // 0xF0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_31; // 0xF8
	::Class_2_214A08D8A91F32A6* Field_2_35; // 0x100
	::MoleMole::MonoGamepadCustomList* Field_2_25; // 0x108
	::Class_2_1A39E1B51756BF41* Field_2_17; // 0x110
	::Il2CppArray<::Class_2_1824EF69C8E376A3*>* Field_2_41; // 0x118
	::UnityEngine::GameObject* Field_2_22; // 0x120
	::Class_2_1A39E1B51756BF41* Field_2_29; // 0x128
	::UnityEngine::GameObject* Field_2_13; // 0x130
	::Class_2_1A39E1B51756BF41* Field_2_16; // 0x138
	::Class_2_1A39E1B51756BF41* Field_2_14; // 0x140
	::MoleMole::MonoGamepadSelectable* Field_2_27; // 0x148
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x150
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_30; // 0x158
	::UnityEngine::GameObject* Field_2_33; // 0x160
	::UnityEngine::GameObject* Field_2_21; // 0x168
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x170
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0x178
	::Class_2_B4378B46E0020E85* Field_2_26; // 0x180
	::Class_2_1A39E1B51756BF41* Field_2_12; // 0x188
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x190
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x198
	::System::Int32 Field_2_38; // 0x1A0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D93784F2D1F2752(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_9D93784F2D1F2752_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_814B2B0F621DA493()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_814B2B0F621DA493_OFFSET))(this);
	}

	::System::Void Method_2_ADE7EC82E13C7741(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_ADE7EC82E13C7741_OFFSET))(this, a1);
	}

	::System::Void Method_2_19E90D38E6EEDFBF(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_19E90D38E6EEDFBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_10CE3AEE57BD55F1(::Class_3_3D3D5AB52AC6095A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3D3D5AB52AC6095A*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_10CE3AEE57BD55F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_CFE6FB160FFF5938_OFFSET))(this);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_2_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_48CDCE8C38EFF7E6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_7F62DEBE566C05B0(::Class_1_5DA2E7556103D5A3_111* a1, ::Class_2_F8EB4D9464ADCCA1* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_111*, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_7F62DEBE566C05B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_AFAA3CCA4A0E4337(::Class_3_3D3D5AB52AC6095A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3D3D5AB52AC6095A*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_AFAA3CCA4A0E4337_OFFSET))(this, a1);
	}

	::System::Void Method_2_C65450796561054F(::System::Int32 a1, ::Class_3_3D3D5AB52AC6095A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_3D3D5AB52AC6095A*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_C65450796561054F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D248181D7FE6805(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_8D248181D7FE6805_OFFSET))(this, a1);
	}

	::System::Void Method_2_1734DB95D619A946(::Class_2_1A39E1B51756BF41* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_1734DB95D619A946_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D20FD81754C01453()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_D20FD81754C01453_OFFSET))(this);
	}

	::System::Void Method_2_46E9DDDC2521D6C4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_46E9DDDC2521D6C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_925EA3B2013DFD65(::Class_3_3D3D5AB52AC6095A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3D3D5AB52AC6095A*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_925EA3B2013DFD65_OFFSET))(this, a1);
	}

	::System::Void Method_2_235955235A779D88(::Class_2_10C1E1662BD0781C_2_Class_1_025C70E19F82BF2F_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_10C1E1662BD0781C_2_Class_1_025C70E19F82BF2F_2*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_235955235A779D88_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA149D03B07F4731(::Class_2_10C1E1662BD0781C_2_Class_1_025C70E19F82BF2F_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_10C1E1662BD0781C_2_Class_1_025C70E19F82BF2F_2*))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_EA149D03B07F4731_OFFSET))(this, a1);
	}

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_0002FD427F9DA06E(::Class_2_1A39E1B51756BF41* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_0002FD427F9DA06E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F9DD5BEBBFAE60E4(::Class_2_1A39E1B51756BF41* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_F9DD5BEBBFAE60E4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9FCC85CCFECD4422_2_METHOD_2_68805403250CC013_OFFSET))(this);
	}
};
