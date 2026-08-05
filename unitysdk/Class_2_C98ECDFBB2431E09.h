#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Enum_3_AEB18F409410ABC4_1.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_774;
class Class_1_D08D652E4775E9AA;
class Class_2_134E5210FBBAC6E5;
class Class_2_1824EF69C8E376A3;
class Class_2_3BB4FDB082E23A99;
class Class_2_B4378B46E0020E85;
class Class_2_E87F1D15F1D4AC72;
class Class_3_DA14B6788FB0E99C;
class MonoUITableScrollV2;
class UIWidgetGroup;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralRoleSelectListWidgetController_Context; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_1_7916CAF9C6AECE7F;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_C98ECDFBB2431E09_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x1D5C1C60)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_0DB70F0CB223BDCA_OFFSET UNITYSDK_OFFSET(0x1D5C1E10)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_182A6A76FFAC079F_OFFSET UNITYSDK_OFFSET(0x1D5BF490)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_1B0EFE11633192E3_OFFSET UNITYSDK_OFFSET(0x1D5C0390)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_1B1602B46CB3FF5C_OFFSET UNITYSDK_OFFSET(0x1D5C2330)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_1DAEFE1176C07C47_OFFSET UNITYSDK_OFFSET(0x1D5C2750)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_1DFCC636FF29BCBA_OFFSET UNITYSDK_OFFSET(0x1D5C0D70)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x1D5C0710)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x1D5C0AB0)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1D5C00D0)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x1D5C0280)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_34706E64BA187BD4_OFFSET UNITYSDK_OFFSET(0x1D5C2760)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x1D5BEF90)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1D5BFF40)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_41F329F901906F10_OFFSET UNITYSDK_OFFSET(0x1D5C2520)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1D5C01E0)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1D5BF920)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x1D5C1850)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_489E0B827662C211_1_OFFSET UNITYSDK_OFFSET(0x1D5C0650)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x1D5C1F90)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1D5C1620)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_5F5D31D34E1978B4_OFFSET UNITYSDK_OFFSET(0x1D5C2E30)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_73C0BC5ADF48BF5C_OFFSET UNITYSDK_OFFSET(0x1D5C00C0)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x1D5C34C0)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_89E92CEABEF3CFBE_OFFSET UNITYSDK_OFFSET(0x1D5BF520)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x1D5BF9A0)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1D5C1480)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_A50E06D67A506F1E_OFFSET UNITYSDK_OFFSET(0x1D5C2700)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_A877CD6A6C29A9D4_OFFSET UNITYSDK_OFFSET(0x1D5BEBE0)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x1D5C2490)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1D5C35E0)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1D5C2400)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D5C2370)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x1D5C3170)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_E2CFE21492926DBB_OFFSET UNITYSDK_OFFSET(0x1D5BE300)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_E41AC0E17BE4B813_OFFSET UNITYSDK_OFFSET(0x1D5C20B0)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_E581B4939D5ECEA9_OFFSET UNITYSDK_OFFSET(0x1D5C2150)
#define CLASS_2_C98ECDFBB2431E09_METHOD_2_FBFF086DF687A7AB_OFFSET UNITYSDK_OFFSET(0x1D5C2AA0)
#define CLASS_2_C98ECDFBB2431E09__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BFEF0)

inline static constexpr unsigned int Class_2_C98ECDFBB2431E09_TypeDefinitionIndex = 90217;

class Class_2_C98ECDFBB2431E09 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::RectTransform* Field_2_15; // 0x50
	::System::Collections::Generic::List_1<::Class_2_3BB4FDB082E23A99*>* Field_2_35; // 0x58
	::UnityEngine::RectTransform* Field_2_8; // 0x60
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_2_28; // 0x68
	::Class_2_134E5210FBBAC6E5* Field_2_0; // 0x70
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_2_29; // 0x78
	::Class_0_16E4307DCC419505_774* Field_2_39; // 0x80
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x88
	::Class_2_B4378B46E0020E85* Field_2_13; // 0x90
	::UIWidgetGroup* Field_2_20; // 0x98
	::Class_0_16E4307DCC419505_159<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>* Field_2_41; // 0xA0
	::MonoUITableScrollV2* Field_2_10; // 0xA8
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralSortWidgetController*>* Field_2_19; // 0xB0
	::UnityEngine::RectTransform* Field_2_4; // 0xB8
	::MonoUITableScrollV2* Field_2_9; // 0xC0
	::Class_2_B4378B46E0020E85* Field_2_12; // 0xC8
	::UIWidgetGroup* Field_2_27; // 0xD0
	::UnityEngine::RectTransform* Field_2_33; // 0xD8
	::Class_1_D08D652E4775E9AA* Field_2_34; // 0xE0
	::Class_1_7916CAF9C6AECE7F<::Class_2_1824EF69C8E376A3*>* Field_2_18; // 0xE8
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_2_43; // 0xF0
	::MoleMole::MonoGamepadSpaceList* Field_2_22; // 0xF8
	::MoleMole::MonoGamepadNavigatableList* Field_2_21; // 0x100
	::UIWidgetGroup* Field_2_26; // 0x108
	::UnityEngine::RectTransform* Field_2_14; // 0x110
	::System::Collections::Generic::List_1<::Class_3_DA14B6788FB0E99C*>* Field_2_42; // 0x118
	::UnityEngine::RectTransform* Field_2_5; // 0x120
	::UnityEngine::GameObject* Field_2_6; // 0x128
	::UnityEngine::GameObject* Field_2_7; // 0x130
	::Enum_3_AEB18F409410ABC4_1 Field_2_32; // 0x138
	::System::Int32 Field_2_23; // 0x13C
	::System::Boolean Field_2_31; // 0x140
	::System::Boolean Field_2_24; // 0x141
	::System::Boolean Field_2_36; // 0x142
	::System::Int32 Field_2_16; // 0x144
	::System::Boolean Field_2_37; // 0x148
	::System::Boolean Field_2_38; // 0x149
	::System::Boolean Field_2_25; // 0x14A
	::System::Boolean Field_2_30; // 0x14B
	::System::Int32 Field_2_17; // 0x14C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E2CFE21492926DBB(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_E2CFE21492926DBB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A877CD6A6C29A9D4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_A877CD6A6C29A9D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_159<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>* Method_2_73C0BC5ADF48BF5C()
	{
		return ((::Class_0_16E4307DCC419505_159<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_73C0BC5ADF48BF5C_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_1B0EFE11633192E3(::Enum_3_AEB18F409410ABC4_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_1B0EFE11633192E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_89E92CEABEF3CFBE(::Enum_3_AEB18F409410ABC4_1 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_89E92CEABEF3CFBE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_0DB70F0CB223BDCA(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_0DB70F0CB223BDCA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
	}

	::System::Void Method_2_E41AC0E17BE4B813(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_E41AC0E17BE4B813_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Method_2_1B1602B46CB3FF5C()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_1B1602B46CB3FF5C_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_1DFCC636FF29BCBA(::Enum_3_AEB18F409410ABC4_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_1DFCC636FF29BCBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_41F329F901906F10(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_41F329F901906F10_OFFSET))(this, a1);
	}

	::System::Void Method_2_A50E06D67A506F1E(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_A50E06D67A506F1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DAEFE1176C07C47(::Class_0_16E4307DCC419505_159<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_1DAEFE1176C07C47_OFFSET))(this, a1);
	}

	::System::Void Method_2_34706E64BA187BD4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_34706E64BA187BD4_OFFSET))(this, a1);
	}

	::System::Void Method_2_FBFF086DF687A7AB(::MonoUITableScrollV2_MoveContext a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_FBFF086DF687A7AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5F5D31D34E1978B4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_5F5D31D34E1978B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_489E0B827662C211_1_OFFSET))(this);
	}

	::System::Int32 Method_2_E581B4939D5ECEA9(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_E581B4939D5ECEA9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_182A6A76FFAC079F(::Enum_3_AEB18F409410ABC4_1 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C98ECDFBB2431E09_METHOD_2_182A6A76FFAC079F_OFFSET))(this, a1, a2, a3);
	}
};
