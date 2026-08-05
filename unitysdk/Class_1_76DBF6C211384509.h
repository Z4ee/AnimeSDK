#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3BAB5080F98EC22A.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/EZenkovConsoleInteractInputMode.h"
#include "unitysdk/MoleMole/EZenkovPyroisBlinkHoldInputType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/PCSuperResolutionType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/Share/ESwitchType.h"
#include "unitysdk/Struct_2_029003AFE5A42E47.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"

namespace MoleMole { class SystemSettingEntryBase; }
namespace MoleMole { template <typename T> class ConfigLazyLoadItem_1; }
namespace MoleMole::Config { class ConfigInputSetting; }
namespace MoleMole::Config { class ConfigSoundSetting; }
namespace MoleMole::Config { class ConfigSubSystemSettingBase; }
namespace MoleMole::Config { class ConfigSystemSetting; }
namespace MoleMole::Config { class InputActionTextIconConfig; }
namespace MoleMole::Config { class InputCodeSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_76DBF6C211384509_METHOD_1_0755E8342751366D_OFFSET UNITYSDK_OFFSET(0x1392DB30)
#define CLASS_1_76DBF6C211384509_METHOD_1_0EC98D735A7A6F8C_1_OFFSET UNITYSDK_OFFSET(0x13929660)
#define CLASS_1_76DBF6C211384509_METHOD_1_0EC98D735A7A6F8C_OFFSET UNITYSDK_OFFSET(0x139280E0)
#define CLASS_1_76DBF6C211384509_METHOD_1_120BF1B1161E7F4F_OFFSET UNITYSDK_OFFSET(0x1392C5A0)
#define CLASS_1_76DBF6C211384509_METHOD_1_1A6EE854731FA09F_1_OFFSET UNITYSDK_OFFSET(0x13931EB0)
#define CLASS_1_76DBF6C211384509_METHOD_1_1A6EE854731FA09F_OFFSET UNITYSDK_OFFSET(0x1392BAE0)
#define CLASS_1_76DBF6C211384509_METHOD_1_1FABDE09BBF9C4B5_OFFSET UNITYSDK_OFFSET(0x13934260)
#define CLASS_1_76DBF6C211384509_METHOD_1_225ABCAEF869B5DE_OFFSET UNITYSDK_OFFSET(0x13932B10)
#define CLASS_1_76DBF6C211384509_METHOD_1_23C10DE8FC25A0DA_OFFSET UNITYSDK_OFFSET(0x13928E50)
#define CLASS_1_76DBF6C211384509_METHOD_1_2AE6A7E9B6200E11_OFFSET UNITYSDK_OFFSET(0x1392E100)
#define CLASS_1_76DBF6C211384509_METHOD_1_2DF5ADAA64B6BE49_OFFSET UNITYSDK_OFFSET(0x139275B0)
#define CLASS_1_76DBF6C211384509_METHOD_1_31DFF3BD774621CB_OFFSET UNITYSDK_OFFSET(0x13928560)
#define CLASS_1_76DBF6C211384509_METHOD_1_365846C360F51CFD_OFFSET UNITYSDK_OFFSET(0x1392F1D0)
#define CLASS_1_76DBF6C211384509_METHOD_1_367E0F2F4D4DCB1F_OFFSET UNITYSDK_OFFSET(0x1392E750)
#define CLASS_1_76DBF6C211384509_METHOD_1_372A441F27F70214_OFFSET UNITYSDK_OFFSET(0x13928060)
#define CLASS_1_76DBF6C211384509_METHOD_1_384DD22676C07F5A_OFFSET UNITYSDK_OFFSET(0x1392B510)
#define CLASS_1_76DBF6C211384509_METHOD_1_3A9804B5F91F4E87_OFFSET UNITYSDK_OFFSET(0x1392D790)
#define CLASS_1_76DBF6C211384509_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x1392BA40)
#define CLASS_1_76DBF6C211384509_METHOD_1_4329C29EB0D095A3_OFFSET UNITYSDK_OFFSET(0x139316C0)
#define CLASS_1_76DBF6C211384509_METHOD_1_43B47CB62AE38BEC_OFFSET UNITYSDK_OFFSET(0x13927150)
#define CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_1_OFFSET UNITYSDK_OFFSET(0x1392CBC0)
#define CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_2_OFFSET UNITYSDK_OFFSET(0x13933980)
#define CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_OFFSET UNITYSDK_OFFSET(0x139272F0)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_1_OFFSET UNITYSDK_OFFSET(0x139270B0)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_2_OFFSET UNITYSDK_OFFSET(0x1392A3E0)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_3_OFFSET UNITYSDK_OFFSET(0x13931C10)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_4_OFFSET UNITYSDK_OFFSET(0x13927250)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_5_OFFSET UNITYSDK_OFFSET(0x13932E20)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_6_OFFSET UNITYSDK_OFFSET(0x13933B90)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_OFFSET UNITYSDK_OFFSET(0x13925D00)
#define CLASS_1_76DBF6C211384509_METHOD_1_512CA42139A4074E_OFFSET UNITYSDK_OFFSET(0x13931230)
#define CLASS_1_76DBF6C211384509_METHOD_1_5266A8B2290D4542_OFFSET UNITYSDK_OFFSET(0x13925DA0)
#define CLASS_1_76DBF6C211384509_METHOD_1_547DFAD2F0836AF0_1_OFFSET UNITYSDK_OFFSET(0x13932ED0)
#define CLASS_1_76DBF6C211384509_METHOD_1_547DFAD2F0836AF0_OFFSET UNITYSDK_OFFSET(0x13926020)
#define CLASS_1_76DBF6C211384509_METHOD_1_55BCFEFB39429F91_OFFSET UNITYSDK_OFFSET(0x13931B60)
#define CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_1_OFFSET UNITYSDK_OFFSET(0x13928870)
#define CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_2_OFFSET UNITYSDK_OFFSET(0x13933500)
#define CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_OFFSET UNITYSDK_OFFSET(0x139264C0)
#define CLASS_1_76DBF6C211384509_METHOD_1_5D27658F33DFC619_OFFSET UNITYSDK_OFFSET(0x139292B0)
#define CLASS_1_76DBF6C211384509_METHOD_1_65649CAE4DBE3E36_OFFSET UNITYSDK_OFFSET(0x13933C30)
#define CLASS_1_76DBF6C211384509_METHOD_1_657304315F0E5DBE_OFFSET UNITYSDK_OFFSET(0x1392D120)
#define CLASS_1_76DBF6C211384509_METHOD_1_676314BE1F45AAC3_OFFSET UNITYSDK_OFFSET(0x13932B80)
#define CLASS_1_76DBF6C211384509_METHOD_1_6CE71E4BB1DE257F_OFFSET UNITYSDK_OFFSET(0x13927500)
#define CLASS_1_76DBF6C211384509_METHOD_1_6F320351E9D5D30D_OFFSET UNITYSDK_OFFSET(0x13931330)
#define CLASS_1_76DBF6C211384509_METHOD_1_6F4F3C198A748420_OFFSET UNITYSDK_OFFSET(0x1392C050)
#define CLASS_1_76DBF6C211384509_METHOD_1_6FA06BD7C07B0AD1_OFFSET UNITYSDK_OFFSET(0x13933760)
#define CLASS_1_76DBF6C211384509_METHOD_1_7778F88A3FFDE5A7_OFFSET UNITYSDK_OFFSET(0x1392AA50)
#define CLASS_1_76DBF6C211384509_METHOD_1_7872C9605102D2BF_OFFSET UNITYSDK_OFFSET(0x1392DC40)
#define CLASS_1_76DBF6C211384509_METHOD_1_78BC6CB847109CA1_1_OFFSET UNITYSDK_OFFSET(0x1392D400)
#define CLASS_1_76DBF6C211384509_METHOD_1_78BC6CB847109CA1_OFFSET UNITYSDK_OFFSET(0x1392C830)
#define CLASS_1_76DBF6C211384509_METHOD_1_88A148B4EBC63872_OFFSET UNITYSDK_OFFSET(0x1392EAE0)
#define CLASS_1_76DBF6C211384509_METHOD_1_8922227CCE7C68AE_1_OFFSET UNITYSDK_OFFSET(0x13933320)
#define CLASS_1_76DBF6C211384509_METHOD_1_8922227CCE7C68AE_OFFSET UNITYSDK_OFFSET(0x1392E8F0)
#define CLASS_1_76DBF6C211384509_METHOD_1_8FBB86B755BAC359_OFFSET UNITYSDK_OFFSET(0x1392CDD0)
#define CLASS_1_76DBF6C211384509_METHOD_1_98FEA5EF26E55D13_OFFSET UNITYSDK_OFFSET(0x1392DF40)
#define CLASS_1_76DBF6C211384509_METHOD_1_9B7F0B03B531C5A6_OFFSET UNITYSDK_OFFSET(0x13933FD0)
#define CLASS_1_76DBF6C211384509_METHOD_1_A21D18E15CC75B52_OFFSET UNITYSDK_OFFSET(0x13929F90)
#define CLASS_1_76DBF6C211384509_METHOD_1_A322D9DBAD7AC661_OFFSET UNITYSDK_OFFSET(0x13929730)
#define CLASS_1_76DBF6C211384509_METHOD_1_A354943FD1ADE97A_OFFSET UNITYSDK_OFFSET(0x1392A760)
#define CLASS_1_76DBF6C211384509_METHOD_1_A7A0C34BF3D66F0D_OFFSET UNITYSDK_OFFSET(0x13926D20)
#define CLASS_1_76DBF6C211384509_METHOD_1_AC84F7D7D8BD93E1_OFFSET UNITYSDK_OFFSET(0x13928AC0)
#define CLASS_1_76DBF6C211384509_METHOD_1_AF9B4FE3C80A8FF5_OFFSET UNITYSDK_OFFSET(0x1392A480)
#define CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_1_OFFSET UNITYSDK_OFFSET(0x1392B0F0)
#define CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_2_OFFSET UNITYSDK_OFFSET(0x139346E0)
#define CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_OFFSET UNITYSDK_OFFSET(0x13929C40)
#define CLASS_1_76DBF6C211384509_METHOD_1_BC7751B3E49CA017_1_OFFSET UNITYSDK_OFFSET(0x13932050)
#define CLASS_1_76DBF6C211384509_METHOD_1_BC7751B3E49CA017_OFFSET UNITYSDK_OFFSET(0x13930F40)
#define CLASS_1_76DBF6C211384509_METHOD_1_BFBFFD3473062FB6_1_OFFSET UNITYSDK_OFFSET(0x13929AB0)
#define CLASS_1_76DBF6C211384509_METHOD_1_BFBFFD3473062FB6_OFFSET UNITYSDK_OFFSET(0x13926710)
#define CLASS_1_76DBF6C211384509_METHOD_1_C5890469B221BD42_OFFSET UNITYSDK_OFFSET(0x13932780)
#define CLASS_1_76DBF6C211384509_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x1392FBE0)
#define CLASS_1_76DBF6C211384509_METHOD_1_C7D782D1E67E3149_OFFSET UNITYSDK_OFFSET(0x13933930)
#define CLASS_1_76DBF6C211384509_METHOD_1_CF7D768BC89D27AE_1_OFFSET UNITYSDK_OFFSET(0x1392C260)
#define CLASS_1_76DBF6C211384509_METHOD_1_CF7D768BC89D27AE_OFFSET UNITYSDK_OFFSET(0x13929770)
#define CLASS_1_76DBF6C211384509_METHOD_1_D45CA6926F1E8699_OFFSET UNITYSDK_OFFSET(0x139268A0)
#define CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_1_OFFSET UNITYSDK_OFFSET(0x1392B290)
#define CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_2_OFFSET UNITYSDK_OFFSET(0x1392D180)
#define CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_OFFSET UNITYSDK_OFFSET(0x13927DE0)
#define CLASS_1_76DBF6C211384509_METHOD_1_DB72C87B0AC83617_OFFSET UNITYSDK_OFFSET(0x139312D0)
#define CLASS_1_76DBF6C211384509_METHOD_1_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x13929DE0)
#define CLASS_1_76DBF6C211384509_METHOD_1_E630670F1812DD58_OFFSET UNITYSDK_OFFSET(0x13931CB0)
#define CLASS_1_76DBF6C211384509_METHOD_1_E8C3108342698EEF_OFFSET UNITYSDK_OFFSET(0x13928EE0)
#define CLASS_1_76DBF6C211384509_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x13934220)
#define CLASS_1_76DBF6C211384509_METHOD_1_F5F4024AF0190119_OFFSET UNITYSDK_OFFSET(0x13928180)
#define CLASS_1_76DBF6C211384509_METHOD_1_FADEB4F9AE306EC1_OFFSET UNITYSDK_OFFSET(0x13932350)
#define CLASS_1_76DBF6C211384509_METHOD_1_FD63070C41E2291D_1_OFFSET UNITYSDK_OFFSET(0x1392BE60)
#define CLASS_1_76DBF6C211384509_METHOD_1_FD63070C41E2291D_OFFSET UNITYSDK_OFFSET(0x1392BC70)
#define CLASS_1_76DBF6C211384509__CCTOR_OFFSET UNITYSDK_OFFSET(0x139257E0)

inline static constexpr unsigned int Class_1_76DBF6C211384509_TypeDefinitionIndex = 72128;

class Class_1_76DBF6C211384509 : public ::System::Object
{
public:
	static ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSystemSetting*>** StaticGet_Field_1_1()
	{
		return (::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSystemSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509_TypeDefinitionIndex)->GetStaticField(0x45150);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSubSystemSettingBase*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSubSystemSettingBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509_TypeDefinitionIndex)->GetStaticField(0x45158);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ESettingPlatform>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ESettingPlatform>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509_TypeDefinitionIndex)->GetStaticField(0x45160);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::InLevelPauseLevelTab>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::InLevelPauseLevelTab>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509_TypeDefinitionIndex)->GetStaticField(0x45168);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509_TypeDefinitionIndex)->GetStaticField(0x45170);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_547DFAD2F0836AF0(::UnityEngine::InputSystem::Key a1)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_547DFAD2F0836AF0_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_5C577552B9FF86C3()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBFFD3473062FB6()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_BFBFFD3473062FB6_OFFSET))();
	}

	static ::System::String* Method_1_D45CA6926F1E8699(::MoleMole::SpecialGamepadInputHintType a1, ::Enum_3_3BAB5080F98EC22A a2)
	{
		return ((::System::String*(*)(::MoleMole::SpecialGamepadInputHintType, ::Enum_3_3BAB5080F98EC22A))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_D45CA6926F1E8699_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A7A0C34BF3D66F0D(::MoleMole::EUILayoutPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_A7A0C34BF3D66F0D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_1(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_43B47CB62AE38BEC(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_43B47CB62AE38BEC_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* Method_1_4BC4DD9DA3EA2DDA()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_OFFSET))();
	}

	static ::System::Boolean Method_1_D67D2C57F6D6EEB0(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_OFFSET))(a1);
	}

	static ::System::Void Method_1_0EC98D735A7A6F8C(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_0EC98D735A7A6F8C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_31DFF3BD774621CB(::Enum_3_A019F766F8C74696 a1, ::Enum_3_7FA27888FA17A22A a2)
	{
		return ((::System::Boolean(*)(::Enum_3_A019F766F8C74696, ::Enum_3_7FA27888FA17A22A))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_31DFF3BD774621CB_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_5C577552B9FF86C3_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_1_OFFSET))();
	}

	static ::System::Void Method_1_AC84F7D7D8BD93E1(::MoleMole::PCSuperResolutionType a1)
	{
		return ((::System::Void(*)(::MoleMole::PCSuperResolutionType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_AC84F7D7D8BD93E1_OFFSET))(a1);
	}

	static ::System::Void Method_1_23C10DE8FC25A0DA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_23C10DE8FC25A0DA_OFFSET))(a1);
	}

	static ::MoleMole::ESettingPlatform Method_1_5266A8B2290D4542(::System::Boolean a1)
	{
		return ((::MoleMole::ESettingPlatform(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_5266A8B2290D4542_OFFSET))(a1);
	}

	static ::System::Void Method_1_5D27658F33DFC619(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_5D27658F33DFC619_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0EC98D735A7A6F8C_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_0EC98D735A7A6F8C_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_CF7D768BC89D27AE()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_CF7D768BC89D27AE_OFFSET))();
	}

	static ::System::Int32 Method_1_B8E80055360E13E4(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Int32(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_DD1EE3A48E307831_OFFSET))();
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_2(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AF9B4FE3C80A8FF5(::MoleMole::ESystemSettingType a1, ::MoleMole::ESettingPlatform a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType, ::MoleMole::ESettingPlatform))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_AF9B4FE3C80A8FF5_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_A354943FD1ADE97A(::MoleMole::Config::ConfigSoundSetting* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Config::ConfigSoundSetting*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_A354943FD1ADE97A_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_B8E80055360E13E4_1(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Int32(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D67D2C57F6D6EEB0_1(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_384DD22676C07F5A(::MoleMole::Config::ConfigInputSetting* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigInputSetting*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_384DD22676C07F5A_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_3C927B51D2142A24_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A6EE854731FA09F()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_1A6EE854731FA09F_OFFSET))();
	}

	static ::System::Single Method_1_FD63070C41E2291D(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_FD63070C41E2291D_OFFSET))(a1);
	}

	static ::System::Single Method_1_FD63070C41E2291D_1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_FD63070C41E2291D_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_6F4F3C198A748420(::UnityEngine::InputSystem::LowLevel::MouseButton a1)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::LowLevel::MouseButton))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_6F4F3C198A748420_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_CF7D768BC89D27AE_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_CF7D768BC89D27AE_1_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>* Method_1_120BF1B1161E7F4F()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_120BF1B1161E7F4F_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBFFD3473062FB6_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_BFBFFD3473062FB6_1_OFFSET))();
	}

	static ::System::Void Method_1_E8C3108342698EEF(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_E8C3108342698EEF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_78BC6CB847109CA1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_78BC6CB847109CA1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* Method_1_4BC4DD9DA3EA2DDA_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_1_OFFSET))();
	}

	static ::System::Boolean Method_1_8FBB86B755BAC359()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_8FBB86B755BAC359_OFFSET))();
	}

	static ::System::Boolean Method_1_657304315F0E5DBE(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_657304315F0E5DBE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D67D2C57F6D6EEB0_2(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_78BC6CB847109CA1_1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_78BC6CB847109CA1_1_OFFSET))(a1, a2);
	}

	static ::Enum_3_7FA27888FA17A22A Method_1_3A9804B5F91F4E87(::MoleMole::LogicButtonInputType a1, ::Enum_3_A019F766F8C74696 a2)
	{
		return ((::Enum_3_7FA27888FA17A22A(*)(::MoleMole::LogicButtonInputType, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_3A9804B5F91F4E87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0755E8342751366D(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_0755E8342751366D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>* Method_1_372A441F27F70214()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_372A441F27F70214_OFFSET))();
	}

	static ::System::Void Method_1_98FEA5EF26E55D13(::System::Boolean a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_98FEA5EF26E55D13_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* Method_1_2AE6A7E9B6200E11(::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*(*)(::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_2AE6A7E9B6200E11_OFFSET))(a1);
	}

	static ::System::String* Method_1_367E0F2F4D4DCB1F(::Enum_3_7FA27888FA17A22A a1)
	{
		return ((::System::String*(*)(::Enum_3_7FA27888FA17A22A))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_367E0F2F4D4DCB1F_OFFSET))(a1);
	}

	static ::System::Single Method_1_8922227CCE7C68AE(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_8922227CCE7C68AE_OFFSET))(a1);
	}

	static ::System::Void Method_1_88A148B4EBC63872(::MoleMole::LogicButtonInputType a1, ::Enum_3_7FA27888FA17A22A a2, ::Enum_3_A019F766F8C74696 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*& a6)
	{
		return ((::System::Void(*)(::MoleMole::LogicButtonInputType, ::Enum_3_7FA27888FA17A22A, ::Enum_3_A019F766F8C74696, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*&))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_88A148B4EBC63872_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))();
	}

	static ::System::Void Method_1_BC7751B3E49CA017(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_BC7751B3E49CA017_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A322D9DBAD7AC661(::System::Action* a1)
	{
		return ((::System::Boolean(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_A322D9DBAD7AC661_OFFSET))(a1);
	}

	static ::MoleMole::Config::InputActionTextIconConfig* Method_1_512CA42139A4074E()
	{
		return ((::MoleMole::Config::InputActionTextIconConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_512CA42139A4074E_OFFSET))();
	}

	static ::Share::ESwitchType Method_1_DB72C87B0AC83617(::MoleMole::ESystemSettingType a1)
	{
		return ((::Share::ESwitchType(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_DB72C87B0AC83617_OFFSET))(a1);
	}

	static ::System::Void Method_1_6F320351E9D5D30D(::MoleMole::EZenkovConsoleInteractInputMode a1)
	{
		return ((::System::Void(*)(::MoleMole::EZenkovConsoleInteractInputMode))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_6F320351E9D5D30D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4329C29EB0D095A3(::MoleMole::Config::ConfigSoundSetting* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigSoundSetting*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4329C29EB0D095A3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_3(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_3_OFFSET))(a1, a2);
	}

	static ::MoleMole::ESystemSettingType Method_1_E630670F1812DD58(::MoleMole::ESystemSettingType a1)
	{
		return ((::MoleMole::ESystemSettingType(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_E630670F1812DD58_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_1A6EE854731FA09F_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_1A6EE854731FA09F_1_OFFSET))();
	}

	static ::System::Void Method_1_BC7751B3E49CA017_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_BC7751B3E49CA017_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_FADEB4F9AE306EC1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_FADEB4F9AE306EC1_OFFSET))(a1);
	}

	static ::System::Void Method_1_C5890469B221BD42(::MoleMole::EZenkovPyroisBlinkHoldInputType a1)
	{
		return ((::System::Void(*)(::MoleMole::EZenkovPyroisBlinkHoldInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_C5890469B221BD42_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2DF5ADAA64B6BE49(::MoleMole::ESystemSettingType a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_2DF5ADAA64B6BE49_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_4(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_5(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_5_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_7778F88A3FFDE5A7(::MoleMole::Config::ConfigSoundSetting* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Config::ConfigSoundSetting*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_7778F88A3FFDE5A7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_365846C360F51CFD(::Struct_2_029003AFE5A42E47 a1, ::Enum_3_A019F766F8C74696 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>* a5, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*& a6)
	{
		return ((::System::Boolean(*)(::Struct_2_029003AFE5A42E47, ::Enum_3_A019F766F8C74696, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>*, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*&))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_365846C360F51CFD_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_7872C9605102D2BF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_7872C9605102D2BF_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_547DFAD2F0836AF0_1(::UnityEngine::InputSystem::Key a1)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_547DFAD2F0836AF0_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_55BCFEFB39429F91()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_55BCFEFB39429F91_OFFSET))();
	}

	static ::System::Single Method_1_8922227CCE7C68AE_1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_8922227CCE7C68AE_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F5F4024AF0190119(::System::Action* a1)
	{
		return ((::System::Boolean(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_F5F4024AF0190119_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigSystemSetting* Method_1_6CE71E4BB1DE257F()
	{
		return ((::MoleMole::Config::ConfigSystemSetting*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_6CE71E4BB1DE257F_OFFSET))();
	}

	static ::System::Boolean Method_1_6FA06BD7C07B0AD1(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_6FA06BD7C07B0AD1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_676314BE1F45AAC3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_676314BE1F45AAC3_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>* Method_1_A21D18E15CC75B52(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_A21D18E15CC75B52_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C7D782D1E67E3149(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_C7D782D1E67E3149_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* Method_1_4BC4DD9DA3EA2DDA_2()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_2_OFFSET))();
	}

	static ::System::Int32 Method_1_5C577552B9FF86C3_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_2_OFFSET))();
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_6(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_6_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_65649CAE4DBE3E36(::UnityEngine::InputSystem::LowLevel::GamepadButton a1, ::Enum_3_3BAB5080F98EC22A a2)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::LowLevel::GamepadButton, ::Enum_3_3BAB5080F98EC22A))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_65649CAE4DBE3E36_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9B7F0B03B531C5A6(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_9B7F0B03B531C5A6_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>* Method_1_1FABDE09BBF9C4B5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_1FABDE09BBF9C4B5_OFFSET))();
	}

	static ::System::Int32 Method_1_B8E80055360E13E4_2(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Int32(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_225ABCAEF869B5DE(::MoleMole::ESystemSettingType a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_225ABCAEF869B5DE_OFFSET))(a1, a2);
	}
};
