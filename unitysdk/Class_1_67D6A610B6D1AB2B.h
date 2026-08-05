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

#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_0127349B4590106C_OFFSET UNITYSDK_OFFSET(0x1660ACC0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_03EF87223039A6C2_OFFSET UNITYSDK_OFFSET(0x1660BDC0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_0F0600C176CF9AE5_OFFSET UNITYSDK_OFFSET(0x1660AF50)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_10AFC482BA8D2780_OFFSET UNITYSDK_OFFSET(0x1660BC70)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_11CAD0929EC5F2EE_OFFSET UNITYSDK_OFFSET(0x1660B900)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_134C640789401191_OFFSET UNITYSDK_OFFSET(0x1660C080)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x1660C6E0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_166AC848C7FBB5ED_OFFSET UNITYSDK_OFFSET(0x1660B4B0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x1660AC50)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x1660B2E0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_400FB2D7A46274AF_OFFSET UNITYSDK_OFFSET(0x1660B850)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x1660AEE0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x1660AD30)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_49795ECCEC5BD592_OFFSET UNITYSDK_OFFSET(0x1660C380)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_4CB981FB169BC7A4_OFFSET UNITYSDK_OFFSET(0x1660C750)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x1660BF90)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x1660BC00)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_7082B526702ACF00_OFFSET UNITYSDK_OFFSET(0x1660B100)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_7B189870D1D98C3F_OFFSET UNITYSDK_OFFSET(0x1660B660)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_844CAD07D9FF3DDE_1_OFFSET UNITYSDK_OFFSET(0x1660B2D0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_844CAD07D9FF3DDE_OFFSET UNITYSDK_OFFSET(0x1660B2B0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x1660B990)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_93DBE6998CC63268_OFFSET UNITYSDK_OFFSET(0x1660AB90)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0x1660C660)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1660C300)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x1660AE50)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1660ADD0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_C782C60E11964C7F_1_OFFSET UNITYSDK_OFFSET(0x1660B7B0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_C782C60E11964C7F_2_OFFSET UNITYSDK_OFFSET(0x1660BA00)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_C782C60E11964C7F_3_OFFSET UNITYSDK_OFFSET(0x1660BAA0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_C782C60E11964C7F_4_OFFSET UNITYSDK_OFFSET(0x1660BB40)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x1660B710)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_CE60E2830B4FF112_OFFSET UNITYSDK_OFFSET(0x1660ABF0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_CE939F9D16359382_OFFSET UNITYSDK_OFFSET(0x1660C010)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x1660BD70)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_D2DA3920D701428C_OFFSET UNITYSDK_OFFSET(0x1660BBE0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_DB76DE2133BD90D0_OFFSET UNITYSDK_OFFSET(0x1660B350)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_E568AA326EE34343_1_OFFSET UNITYSDK_OFFSET(0x1660B2C0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_E568AA326EE34343_OFFSET UNITYSDK_OFFSET(0x1660B2A0)
#define CLASS_1_67D6A610B6D1AB2B_METHOD_1_F467F8B92E9D9677_OFFSET UNITYSDK_OFFSET(0x1660B400)
#define CLASS_1_67D6A610B6D1AB2B__CTOR_OFFSET UNITYSDK_OFFSET(0x1660AB10)

inline static constexpr unsigned int Class_1_67D6A610B6D1AB2B_TypeDefinitionIndex = 61984;

class Class_1_67D6A610B6D1AB2B : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIBaseController*>* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::UIBaseController*>* Field_1_1; // 0x18
	::Class_2_4D64B5F02031B5BF* Field_1_2; // 0x20
	::Class_2_CAEEAA35AEFBBCB4* Field_1_3; // 0x28

	::System::Void _ctor(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_93DBE6998CC63268(::MoleMole::UIWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_93DBE6998CC63268_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE60E2830B4FF112(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_CE60E2830B4FF112_OFFSET))(this, a1);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_0127349B4590106C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_0127349B4590106C_OFFSET))(this, a1);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_1_0F0600C176CF9AE5(::Foundation::AssetPath a1)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_0F0600C176CF9AE5_OFFSET))(this, a1);
	}

	::MoleMole::UIBaseController* Method_1_7082B526702ACF00(::System::String* a1)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_7082B526702ACF00_OFFSET))(this, a1);
	}

	::System::Action_1<::MoleMole::UIBaseController*>* Method_1_E568AA326EE34343()
	{
		return ((::System::Action_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_E568AA326EE34343_OFFSET))(this);
	}

	::System::Void Method_1_844CAD07D9FF3DDE(::System::Action_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_844CAD07D9FF3DDE_OFFSET))(this, a1);
	}

	::System::Action_1<::MoleMole::UIBaseController*>* Method_1_E568AA326EE34343_1()
	{
		return ((::System::Action_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_E568AA326EE34343_1_OFFSET))(this);
	}

	::System::Void Method_1_844CAD07D9FF3DDE_1(::System::Action_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_844CAD07D9FF3DDE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_DB76DE2133BD90D0(::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_DB76DE2133BD90D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_F467F8B92E9D9677(::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_F467F8B92E9D9677_OFFSET))(this, a1);
	}

	::MoleMole::MonoGamepadModule* Method_1_166AC848C7FBB5ED(::System::String* a1)
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_166AC848C7FBB5ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B189870D1D98C3F(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_7B189870D1D98C3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Void Method_1_C782C60E11964C7F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_C782C60E11964C7F_1_OFFSET))(this);
	}

	::System::Void Method_1_400FB2D7A46274AF(::MoleMole::EUILayoutPlatform a1, ::MoleMole::EUILayoutPlatform a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_400FB2D7A46274AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_11CAD0929EC5F2EE(::MoleMole::EUILayoutPlatform a1, ::MoleMole::EUILayoutPlatform a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_11CAD0929EC5F2EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_1_C782C60E11964C7F_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_C782C60E11964C7F_2_OFFSET))(this);
	}

	::System::Void Method_1_C782C60E11964C7F_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_C782C60E11964C7F_3_OFFSET))(this);
	}

	::System::Void Method_1_C782C60E11964C7F_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_C782C60E11964C7F_4_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* Method_1_D2DA3920D701428C()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_D2DA3920D701428C_OFFSET))(this);
	}

	::System::Void Method_1_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_674F73509924BD16_OFFSET))(this);
	}

	::System::Void Method_1_10AFC482BA8D2780(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_10AFC482BA8D2780_OFFSET))(this, a1);
	}

	::System::Void Method_1_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_1_03EF87223039A6C2(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_03EF87223039A6C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE939F9D16359382()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_CE939F9D16359382_OFFSET))(this);
	}

	::System::Void Method_1_134C640789401191(::MoleMole::UIWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_134C640789401191_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_49795ECCEC5BD592(::MoleMole::UIWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_49795ECCEC5BD592_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET))(this);
	}

	::System::Void Method_1_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_14014646206E49EF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Method_1_4CB981FB169BC7A4()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67D6A610B6D1AB2B_METHOD_1_4CB981FB169BC7A4_OFFSET))(this);
	}
};
