#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_1824EF69C8E376A3;
class Class_2_1A39E1B51756BF41;
class Class_2_214A08D8A91F32A6;
class Class_2_4DA7BFFCF976F7D7;
class Class_2_9CB9A850F023C008_1_PanelData;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
class Class_2_FDFE69FE7B72463B;
class Class_3_3D3D5AB52AC6095A;
class Class_3_DA14B6788FB0E99C;
class MonoUITableScrollV2;
class UIWidgetGroup;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_1_BDE51D5357874CAD;
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_9CB9A850F023C008_1_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x12556FD0)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x12558950)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_0BF7DDED16A5BE07_OFFSET UNITYSDK_OFFSET(0x12553A80)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0x12556440)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_1B1602B46CB3FF5C_OFFSET UNITYSDK_OFFSET(0x12557F40)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_1B8D18C749B98596_OFFSET UNITYSDK_OFFSET(0x125575D0)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_1E99C879178FD180_OFFSET UNITYSDK_OFFSET(0x12556C20)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_292435743009A063_OFFSET UNITYSDK_OFFSET(0x12556D90)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_303D4700A8627BD6_OFFSET UNITYSDK_OFFSET(0x125565E0)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_34706E64BA187BD4_OFFSET UNITYSDK_OFFSET(0x125580D0)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12557F90)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x12558170)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_6EB9BFCE6451F4ED_OFFSET UNITYSDK_OFFSET(0x12555240)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x125556A0)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_7CFFD61C3F34EDDF_OFFSET UNITYSDK_OFFSET(0x12558400)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_870AF3CD1D0A67B1_1_OFFSET UNITYSDK_OFFSET(0x12558DF0)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x12556CF0)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_996D838F4F54E05D_OFFSET UNITYSDK_OFFSET(0x12557C80)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_A323A7720C85F580_OFFSET UNITYSDK_OFFSET(0x12556D00)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_A50E06D67A506F1E_OFFSET UNITYSDK_OFFSET(0x12557020)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x12557800)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x125569B0)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x12556F40)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_B5C7B44C609556DB_OFFSET UNITYSDK_OFFSET(0x12557490)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x12558B00)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x12557080)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_BE230A687294A288_OFFSET UNITYSDK_OFFSET(0x12557B60)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_C5F5A93C6216CAE8_OFFSET UNITYSDK_OFFSET(0x12558E00)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x125577D0)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12558040)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12556360)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0x12555D90)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0x12556B60)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x125582E0)
#define CLASS_2_9CB9A850F023C008_1_METHOD_2_F17676F976AEF1D8_OFFSET UNITYSDK_OFFSET(0x12556660)
#define CLASS_2_9CB9A850F023C008_1__CTOR_OFFSET UNITYSDK_OFFSET(0x125563A0)

inline static constexpr unsigned int Class_2_9CB9A850F023C008_1_TypeDefinitionIndex = 63979;

class Class_2_9CB9A850F023C008_1 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_18; // 0x58
	::UnityEngine::RectTransform* Field_2_16; // 0x60
	::MonoUITableScrollV2* Field_2_0; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x70
	::System::Collections::Generic::List_1<::Class_3_DA14B6788FB0E99C*>* Field_2_39; // 0x78
	::UnityEngine::GameObject* Field_2_20; // 0x80
	::Class_2_134E5210FBBAC6E5* Field_2_3; // 0x88
	::UnityEngine::RectTransform* Field_2_17; // 0x90
	::MoleMole::MonoGamepadCustomList* Field_2_22; // 0x98
	::MoleMole::MonoGamepadSpaceList* Field_2_23; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_4DA7BFFCF976F7D7*>* Field_2_38; // 0xA8
	::Class_2_B4378B46E0020E85* Field_2_14; // 0xB0
	::UnityEngine::GameObject* Field_2_15; // 0xB8
	::Class_2_FDFE69FE7B72463B* Field_2_19; // 0xC0
	::Class_2_B4378B46E0020E85* Field_2_12; // 0xC8
	::Class_1_BDE51D5357874CAD<::Class_2_1824EF69C8E376A3*>* Field_2_28; // 0xD0
	::UnityEngine::GameObject* Field_2_5; // 0xD8
	::UnityEngine::RectTransform* Field_2_10; // 0xE0
	::UnityEngine::GameObject* Field_2_21; // 0xE8
	::Class_2_214A08D8A91F32A6* Field_2_33; // 0xF0
	::System::Collections::Generic::List_1<::Class_3_3D3D5AB52AC6095A*>* Field_2_34; // 0xF8
	::UnityEngine::GameObject* Field_2_6; // 0x100
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x108
	::MonoUITableScrollV2* Field_2_7; // 0x110
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_2_37; // 0x118
	::Class_2_B4378B46E0020E85* Field_2_13; // 0x120
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_2_36; // 0x128
	::UIWidgetGroup* Field_2_30; // 0x130
	::MonoUITableScrollV2* Field_2_8; // 0x138
	::MoleMole::MonoGamepadNavigatableList* Field_2_24; // 0x140
	::UnityEngine::RectTransform* Field_2_9; // 0x148
	::Class_2_9CB9A850F023C008_1_PanelData* Field_2_35; // 0x150
	::UIWidgetGroup* Field_2_31; // 0x158
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralSortWidgetController*>* Field_2_27; // 0x160
	::UnityEngine::RectTransform* Field_2_1; // 0x168
	::UIWidgetGroup* Field_2_32; // 0x170
	::UIWidgetGroup* Field_2_29; // 0x178
	::System::Int32 Field_2_25; // 0x180
	::System::Int32 Field_2_26; // 0x184
	::System::Boolean Field_2_40; // 0x188
	::System::Boolean Field_2_41; // 0x189
	::System::Boolean Field_2_42; // 0x18A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0BF7DDED16A5BE07(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_0BF7DDED16A5BE07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6EB9BFCE6451F4ED(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_6EB9BFCE6451F4ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_11D5322717FDFD9D_OFFSET))(this);
	}

	::System::Int32 Method_2_303D4700A8627BD6(::Class_3_DA14B6788FB0E99C* a1, ::Class_3_DA14B6788FB0E99C* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_DA14B6788FB0E99C*, ::Class_3_DA14B6788FB0E99C*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_303D4700A8627BD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F17676F976AEF1D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_F17676F976AEF1D8_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_EC00644AF39B5DED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_EC00644AF39B5DED_OFFSET))(this);
	}

	::System::Boolean Method_2_1E99C879178FD180(::Class_3_DA14B6788FB0E99C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_DA14B6788FB0E99C*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_1E99C879178FD180_OFFSET))(this, a1);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_292435743009A063(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_292435743009A063_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_2_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Void Method_2_A50E06D67A506F1E(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_A50E06D67A506F1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_B5C7B44C609556DB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_B5C7B44C609556DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B8D18C749B98596(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_1B8D18C749B98596_OFFSET))(this, a1);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_2_BE230A687294A288(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_BE230A687294A288_OFFSET))(this, a1);
	}

	::System::Void Method_2_996D838F4F54E05D(::MonoUITableScrollV2_MoveContext a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_996D838F4F54E05D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Method_2_1B1602B46CB3FF5C()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_1B1602B46CB3FF5C_OFFSET))(this);
	}

	::System::Void Method_2_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_34706E64BA187BD4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_34706E64BA187BD4_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void Method_2_A323A7720C85F580(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_A323A7720C85F580_OFFSET))(this, a1);
	}

	::System::Void Method_2_7CFFD61C3F34EDDF(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_7CFFD61C3F34EDDF_OFFSET))(this, a1);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_2_870AF3CD1D0A67B1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_870AF3CD1D0A67B1_1_OFFSET))(this);
	}

	::System::Void Method_2_C5F5A93C6216CAE8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_C5F5A93C6216CAE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CB9A850F023C008_1_METHOD_2_0865E94460F11643_OFFSET))(this);
	}
};
