#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_4D64B5F02031B5BF;
class Class_2_CAEEAA35AEFBBCB4;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_90BF61F65AED1726_METHOD_1_0127349B4590106C_OFFSET UNITYSDK_OFFSET(0x16098CF0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_0F0600C176CF9AE5_OFFSET UNITYSDK_OFFSET(0x16098F80)
#define CLASS_1_90BF61F65AED1726_METHOD_1_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x1609A520)
#define CLASS_1_90BF61F65AED1726_METHOD_1_166AC848C7FBB5ED_OFFSET UNITYSDK_OFFSET(0x160994E0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_400FB2D7A46274AF_OFFSET UNITYSDK_OFFSET(0x16099880)
#define CLASS_1_90BF61F65AED1726_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x16098F10)
#define CLASS_1_90BF61F65AED1726_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x16098D60)
#define CLASS_1_90BF61F65AED1726_METHOD_1_49795ECCEC5BD592_OFFSET UNITYSDK_OFFSET(0x16099C10)
#define CLASS_1_90BF61F65AED1726_METHOD_1_4CB981FB169BC7A4_OFFSET UNITYSDK_OFFSET(0x1609A780)
#define CLASS_1_90BF61F65AED1726_METHOD_1_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x16099310)
#define CLASS_1_90BF61F65AED1726_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x1609A590)
#define CLASS_1_90BF61F65AED1726_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x16099F30)
#define CLASS_1_90BF61F65AED1726_METHOD_1_7082B526702ACF00_OFFSET UNITYSDK_OFFSET(0x16099130)
#define CLASS_1_90BF61F65AED1726_METHOD_1_7566D5CD4BE5C783_OFFSET UNITYSDK_OFFSET(0x16099FA0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_7B189870D1D98C3F_OFFSET UNITYSDK_OFFSET(0x16099690)
#define CLASS_1_90BF61F65AED1726_METHOD_1_844CAD07D9FF3DDE_1_OFFSET UNITYSDK_OFFSET(0x16099300)
#define CLASS_1_90BF61F65AED1726_METHOD_1_844CAD07D9FF3DDE_OFFSET UNITYSDK_OFFSET(0x160992E0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x160999C0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_93DBE6998CC63268_OFFSET UNITYSDK_OFFSET(0x16098BC0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0x1609A280)
#define CLASS_1_90BF61F65AED1726_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16099EB0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_ABBD5E529DA370AD_OFFSET UNITYSDK_OFFSET(0x1609A300)
#define CLASS_1_90BF61F65AED1726_METHOD_1_AF4EC7C4E08CBC8B_OFFSET UNITYSDK_OFFSET(0x1609A610)
#define CLASS_1_90BF61F65AED1726_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x16098E80)
#define CLASS_1_90BF61F65AED1726_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16098E00)
#define CLASS_1_90BF61F65AED1726_METHOD_1_C782C60E11964C7F_1_OFFSET UNITYSDK_OFFSET(0x160997E0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_C782C60E11964C7F_2_OFFSET UNITYSDK_OFFSET(0x16099A30)
#define CLASS_1_90BF61F65AED1726_METHOD_1_C782C60E11964C7F_3_OFFSET UNITYSDK_OFFSET(0x16099AD0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_C782C60E11964C7F_4_OFFSET UNITYSDK_OFFSET(0x16099B70)
#define CLASS_1_90BF61F65AED1726_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x16099740)
#define CLASS_1_90BF61F65AED1726_METHOD_1_CE60E2830B4FF112_OFFSET UNITYSDK_OFFSET(0x16098C20)
#define CLASS_1_90BF61F65AED1726_METHOD_1_CE939F9D16359382_OFFSET UNITYSDK_OFFSET(0x1609A710)
#define CLASS_1_90BF61F65AED1726_METHOD_1_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x1609A4D0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_D2DA3920D701428C_OFFSET UNITYSDK_OFFSET(0x16099E90)
#define CLASS_1_90BF61F65AED1726_METHOD_1_DB76DE2133BD90D0_OFFSET UNITYSDK_OFFSET(0x16099380)
#define CLASS_1_90BF61F65AED1726_METHOD_1_E568AA326EE34343_1_OFFSET UNITYSDK_OFFSET(0x160992F0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_E568AA326EE34343_OFFSET UNITYSDK_OFFSET(0x160992D0)
#define CLASS_1_90BF61F65AED1726_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x16098C80)
#define CLASS_1_90BF61F65AED1726_METHOD_1_F467F8B92E9D9677_OFFSET UNITYSDK_OFFSET(0x16099430)
#define CLASS_1_90BF61F65AED1726_METHOD_1_FE4B19416B444C6D_OFFSET UNITYSDK_OFFSET(0x16099930)
#define CLASS_1_90BF61F65AED1726__CTOR_OFFSET UNITYSDK_OFFSET(0x16098B40)

inline static constexpr unsigned int Class_1_90BF61F65AED1726_TypeDefinitionIndex = 80113;

class Class_1_90BF61F65AED1726 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIBaseController*>* Field_1_3; // 0x10
	::System::Action_1<::MoleMole::UIBaseController*>* Field_1_2; // 0x18
	::Class_2_CAEEAA35AEFBBCB4* Field_1_0; // 0x20
	::Class_2_4D64B5F02031B5BF* Field_1_1; // 0x28

	::System::Void _ctor(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_93DBE6998CC63268(::MoleMole::UIWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_93DBE6998CC63268_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE60E2830B4FF112(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_CE60E2830B4FF112_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_0127349B4590106C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_0127349B4590106C_OFFSET))(this, a1);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_1_0F0600C176CF9AE5(::Foundation::AssetPath a1)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_0F0600C176CF9AE5_OFFSET))(this, a1);
	}

	::MoleMole::UIBaseController* Method_1_7082B526702ACF00(::System::String* a1)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_7082B526702ACF00_OFFSET))(this, a1);
	}

	::System::Action_1<::MoleMole::UIBaseController*>* Method_1_E568AA326EE34343()
	{
		return ((::System::Action_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_E568AA326EE34343_OFFSET))(this);
	}

	::System::Void Method_1_844CAD07D9FF3DDE(::System::Action_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_844CAD07D9FF3DDE_OFFSET))(this, a1);
	}

	::System::Action_1<::MoleMole::UIBaseController*>* Method_1_E568AA326EE34343_1()
	{
		return ((::System::Action_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_E568AA326EE34343_1_OFFSET))(this);
	}

	::System::Void Method_1_844CAD07D9FF3DDE_1(::System::Action_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_844CAD07D9FF3DDE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_1_DB76DE2133BD90D0(::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_DB76DE2133BD90D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_F467F8B92E9D9677(::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_F467F8B92E9D9677_OFFSET))(this, a1);
	}

	::MoleMole::MonoGamepadModule* Method_1_166AC848C7FBB5ED(::System::String* a1)
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_166AC848C7FBB5ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B189870D1D98C3F(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_7B189870D1D98C3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Void Method_1_C782C60E11964C7F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_C782C60E11964C7F_1_OFFSET))(this);
	}

	::System::Void Method_1_400FB2D7A46274AF(::MoleMole::EUILayoutPlatform a1, ::MoleMole::EUILayoutPlatform a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_400FB2D7A46274AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FE4B19416B444C6D(::MoleMole::EUILayoutPlatform a1, ::MoleMole::EUILayoutPlatform a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_FE4B19416B444C6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_1_C782C60E11964C7F_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_C782C60E11964C7F_2_OFFSET))(this);
	}

	::System::Void Method_1_C782C60E11964C7F_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_C782C60E11964C7F_3_OFFSET))(this);
	}

	::System::Void Method_1_C782C60E11964C7F_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_C782C60E11964C7F_4_OFFSET))(this);
	}

	::System::Void Method_1_49795ECCEC5BD592(::MoleMole::UIWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_49795ECCEC5BD592_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* Method_1_D2DA3920D701428C()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_D2DA3920D701428C_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_674F73509924BD16_OFFSET))(this);
	}

	::System::Void Method_1_7566D5CD4BE5C783(::MoleMole::UIWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_7566D5CD4BE5C783_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET))(this);
	}

	::System::Void Method_1_ABBD5E529DA370AD(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_ABBD5E529DA370AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_1_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_14014646206E49EF_OFFSET))(this);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF4EC7C4E08CBC8B(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_AF4EC7C4E08CBC8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE939F9D16359382()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_CE939F9D16359382_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Method_1_4CB981FB169BC7A4()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90BF61F65AED1726_METHOD_1_4CB981FB169BC7A4_OFFSET))(this);
	}
};
