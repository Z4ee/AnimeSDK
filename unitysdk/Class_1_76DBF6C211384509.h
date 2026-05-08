#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3BAB5080F98EC22A.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
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

#define CLASS_1_76DBF6C211384509_METHOD_1_0755E8342751366D_OFFSET UNITYSDK_OFFSET(0x188C42C0)
#define CLASS_1_76DBF6C211384509_METHOD_1_1006C351D0F01407_OFFSET UNITYSDK_OFFSET(0x188BCFD0)
#define CLASS_1_76DBF6C211384509_METHOD_1_120BF1B1161E7F4F_OFFSET UNITYSDK_OFFSET(0x188C2A20)
#define CLASS_1_76DBF6C211384509_METHOD_1_1A6EE854731FA09F_1_OFFSET UNITYSDK_OFFSET(0x188C5ED0)
#define CLASS_1_76DBF6C211384509_METHOD_1_1A6EE854731FA09F_OFFSET UNITYSDK_OFFSET(0x188BC6A0)
#define CLASS_1_76DBF6C211384509_METHOD_1_1FABDE09BBF9C4B5_OFFSET UNITYSDK_OFFSET(0x188BFBC0)
#define CLASS_1_76DBF6C211384509_METHOD_1_225ABCAEF869B5DE_OFFSET UNITYSDK_OFFSET(0x188BFB50)
#define CLASS_1_76DBF6C211384509_METHOD_1_23C10DE8FC25A0DA_OFFSET UNITYSDK_OFFSET(0x188C7000)
#define CLASS_1_76DBF6C211384509_METHOD_1_2DF5ADAA64B6BE49_OFFSET UNITYSDK_OFFSET(0x188C1EC0)
#define CLASS_1_76DBF6C211384509_METHOD_1_31DFF3BD774621CB_OFFSET UNITYSDK_OFFSET(0x188BB2D0)
#define CLASS_1_76DBF6C211384509_METHOD_1_365846C360F51CFD_OFFSET UNITYSDK_OFFSET(0x188BA8C0)
#define CLASS_1_76DBF6C211384509_METHOD_1_367E0F2F4D4DCB1F_OFFSET UNITYSDK_OFFSET(0x188C0DC0)
#define CLASS_1_76DBF6C211384509_METHOD_1_372A441F27F70214_OFFSET UNITYSDK_OFFSET(0x188BB9F0)
#define CLASS_1_76DBF6C211384509_METHOD_1_384DD22676C07F5A_OFFSET UNITYSDK_OFFSET(0x188C3930)
#define CLASS_1_76DBF6C211384509_METHOD_1_3A9804B5F91F4E87_OFFSET UNITYSDK_OFFSET(0x188C0A20)
#define CLASS_1_76DBF6C211384509_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x188C09A0)
#define CLASS_1_76DBF6C211384509_METHOD_1_4329C29EB0D095A3_OFFSET UNITYSDK_OFFSET(0x188C5440)
#define CLASS_1_76DBF6C211384509_METHOD_1_43B47CB62AE38BEC_OFFSET UNITYSDK_OFFSET(0x188C3FB0)
#define CLASS_1_76DBF6C211384509_METHOD_1_49964A8388055B4B_OFFSET UNITYSDK_OFFSET(0x188C0340)
#define CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_1_OFFSET UNITYSDK_OFFSET(0x188C40B0)
#define CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_2_OFFSET UNITYSDK_OFFSET(0x188C5CC0)
#define CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_OFFSET UNITYSDK_OFFSET(0x188C1C00)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_1_OFFSET UNITYSDK_OFFSET(0x188C3E60)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_2_OFFSET UNITYSDK_OFFSET(0x188C58E0)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_3_OFFSET UNITYSDK_OFFSET(0x188C4D50)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_4_OFFSET UNITYSDK_OFFSET(0x188C6060)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_5_OFFSET UNITYSDK_OFFSET(0x188C6540)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_6_OFFSET UNITYSDK_OFFSET(0x188C76E0)
#define CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_OFFSET UNITYSDK_OFFSET(0x188C2CB0)
#define CLASS_1_76DBF6C211384509_METHOD_1_512CA42139A4074E_OFFSET UNITYSDK_OFFSET(0x188B9D90)
#define CLASS_1_76DBF6C211384509_METHOD_1_5266A8B2290D4542_OFFSET UNITYSDK_OFFSET(0x188BF540)
#define CLASS_1_76DBF6C211384509_METHOD_1_547DFAD2F0836AF0_1_OFFSET UNITYSDK_OFFSET(0x188C6BB0)
#define CLASS_1_76DBF6C211384509_METHOD_1_547DFAD2F0836AF0_OFFSET UNITYSDK_OFFSET(0x188C4DF0)
#define CLASS_1_76DBF6C211384509_METHOD_1_55BCFEFB39429F91_OFFSET UNITYSDK_OFFSET(0x188C3F00)
#define CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_1_OFFSET UNITYSDK_OFFSET(0x188BD460)
#define CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_2_OFFSET UNITYSDK_OFFSET(0x188C2630)
#define CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_OFFSET UNITYSDK_OFFSET(0x188BC440)
#define CLASS_1_76DBF6C211384509_METHOD_1_6230CDAE094287E6_OFFSET UNITYSDK_OFFSET(0x188C6380)
#define CLASS_1_76DBF6C211384509_METHOD_1_65649CAE4DBE3E36_OFFSET UNITYSDK_OFFSET(0x188BBC70)
#define CLASS_1_76DBF6C211384509_METHOD_1_657304315F0E5DBE_OFFSET UNITYSDK_OFFSET(0x188BF4E0)
#define CLASS_1_76DBF6C211384509_METHOD_1_676314BE1F45AAC3_OFFSET UNITYSDK_OFFSET(0x188BF240)
#define CLASS_1_76DBF6C211384509_METHOD_1_6CE71E4BB1DE257F_OFFSET UNITYSDK_OFFSET(0x188C1E10)
#define CLASS_1_76DBF6C211384509_METHOD_1_6F4F3C198A748420_OFFSET UNITYSDK_OFFSET(0x188BCBD0)
#define CLASS_1_76DBF6C211384509_METHOD_1_6FA06BD7C07B0AD1_OFFSET UNITYSDK_OFFSET(0x188C7090)
#define CLASS_1_76DBF6C211384509_METHOD_1_7778F88A3FFDE5A7_OFFSET UNITYSDK_OFFSET(0x188C1550)
#define CLASS_1_76DBF6C211384509_METHOD_1_7872C9605102D2BF_OFFSET UNITYSDK_OFFSET(0x188C43D0)
#define CLASS_1_76DBF6C211384509_METHOD_1_78BC6CB847109CA1_1_OFFSET UNITYSDK_OFFSET(0x188C6820)
#define CLASS_1_76DBF6C211384509_METHOD_1_78BC6CB847109CA1_OFFSET UNITYSDK_OFFSET(0x188BF7C0)
#define CLASS_1_76DBF6C211384509_METHOD_1_88A148B4EBC63872_OFFSET UNITYSDK_OFFSET(0x188BA1D0)
#define CLASS_1_76DBF6C211384509_METHOD_1_8922227CCE7C68AE_1_OFFSET UNITYSDK_OFFSET(0x188C2D50)
#define CLASS_1_76DBF6C211384509_METHOD_1_8922227CCE7C68AE_OFFSET UNITYSDK_OFFSET(0x188BF000)
#define CLASS_1_76DBF6C211384509_METHOD_1_9B7F0B03B531C5A6_OFFSET UNITYSDK_OFFSET(0x188C36E0)
#define CLASS_1_76DBF6C211384509_METHOD_1_A21D18E15CC75B52_OFFSET UNITYSDK_OFFSET(0x188BEBB0)
#define CLASS_1_76DBF6C211384509_METHOD_1_A322D9DBAD7AC661_OFFSET UNITYSDK_OFFSET(0x188BD0A0)
#define CLASS_1_76DBF6C211384509_METHOD_1_A354943FD1ADE97A_OFFSET UNITYSDK_OFFSET(0x188C1260)
#define CLASS_1_76DBF6C211384509_METHOD_1_A7A0C34BF3D66F0D_OFFSET UNITYSDK_OFFSET(0x188BC840)
#define CLASS_1_76DBF6C211384509_METHOD_1_AF9B4FE3C80A8FF5_OFFSET UNITYSDK_OFFSET(0x188C0040)
#define CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_1_OFFSET UNITYSDK_OFFSET(0x188C52A0)
#define CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_2_OFFSET UNITYSDK_OFFSET(0x188C65E0)
#define CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_OFFSET UNITYSDK_OFFSET(0x188BB5D0)
#define CLASS_1_76DBF6C211384509_METHOD_1_BC7751B3E49CA017_1_OFFSET UNITYSDK_OFFSET(0x188C33A0)
#define CLASS_1_76DBF6C211384509_METHOD_1_BC7751B3E49CA017_OFFSET UNITYSDK_OFFSET(0x188C0F60)
#define CLASS_1_76DBF6C211384509_METHOD_1_BFBFFD3473062FB6_1_OFFSET UNITYSDK_OFFSET(0x188B9C00)
#define CLASS_1_76DBF6C211384509_METHOD_1_BFBFFD3473062FB6_OFFSET UNITYSDK_OFFSET(0x188C2890)
#define CLASS_1_76DBF6C211384509_METHOD_1_C70B5D8A5323FFAE_OFFSET UNITYSDK_OFFSET(0x188B9E30)
#define CLASS_1_76DBF6C211384509_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x188BD6C0)
#define CLASS_1_76DBF6C211384509_METHOD_1_C7D782D1E67E3149_OFFSET UNITYSDK_OFFSET(0x188BE9B0)
#define CLASS_1_76DBF6C211384509_METHOD_1_CF7D768BC89D27AE_1_OFFSET UNITYSDK_OFFSET(0x188C5980)
#define CLASS_1_76DBF6C211384509_METHOD_1_CF7D768BC89D27AE_OFFSET UNITYSDK_OFFSET(0x188B98C0)
#define CLASS_1_76DBF6C211384509_METHOD_1_D45CA6926F1E8699_OFFSET UNITYSDK_OFFSET(0x188C7260)
#define CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_1_OFFSET UNITYSDK_OFFSET(0x188C2F30)
#define CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_2_OFFSET UNITYSDK_OFFSET(0x188C6100)
#define CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_OFFSET UNITYSDK_OFFSET(0x188BB770)
#define CLASS_1_76DBF6C211384509_METHOD_1_DB72C87B0AC83617_OFFSET UNITYSDK_OFFSET(0x188BF1E0)
#define CLASS_1_76DBF6C211384509_METHOD_1_DCB1C6CDC61D91E8_OFFSET UNITYSDK_OFFSET(0x188BEA00)
#define CLASS_1_76DBF6C211384509_METHOD_1_DE767BA70B5FB47E_OFFSET UNITYSDK_OFFSET(0x188C46D0)
#define CLASS_1_76DBF6C211384509_METHOD_1_E630670F1812DD58_OFFSET UNITYSDK_OFFSET(0x188BBA70)
#define CLASS_1_76DBF6C211384509_METHOD_1_E8C3108342698EEF_OFFSET UNITYSDK_OFFSET(0x188C05D0)
#define CLASS_1_76DBF6C211384509_METHOD_1_EB092EAC5D07B77E_OFFSET UNITYSDK_OFFSET(0x188C6780)
#define CLASS_1_76DBF6C211384509_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x188C36A0)
#define CLASS_1_76DBF6C211384509_METHOD_1_F5F4024AF0190119_OFFSET UNITYSDK_OFFSET(0x188BD0E0)
#define CLASS_1_76DBF6C211384509_METHOD_1_FADEB4F9AE306EC1_OFFSET UNITYSDK_OFFSET(0x188BC010)
#define CLASS_1_76DBF6C211384509_METHOD_1_FD63070C41E2291D_1_OFFSET UNITYSDK_OFFSET(0x188C31B0)
#define CLASS_1_76DBF6C211384509_METHOD_1_FD63070C41E2291D_OFFSET UNITYSDK_OFFSET(0x188BCDE0)
#define CLASS_1_76DBF6C211384509__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B93E0)

inline static constexpr unsigned int Class_1_76DBF6C211384509_TypeDefinitionIndex = 81371;

class Class_1_76DBF6C211384509 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509_TypeDefinitionIndex)->GetStaticField(0x48420);
	}
	static ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSystemSetting*>** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSystemSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509_TypeDefinitionIndex)->GetStaticField(0x48428);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSubSystemSettingBase*>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::MoleMole::ConfigLazyLoadItem_1<::MoleMole::Config::ConfigSubSystemSettingBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509_TypeDefinitionIndex)->GetStaticField(0x48430);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::InLevelPauseLevelTab>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::InLevelPauseLevelTab>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509_TypeDefinitionIndex)->GetStaticField(0x48438);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ESettingPlatform>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ESettingPlatform>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76DBF6C211384509_TypeDefinitionIndex)->GetStaticField(0x48440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_CF7D768BC89D27AE()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_CF7D768BC89D27AE_OFFSET))();
	}

	static ::MoleMole::Config::InputActionTextIconConfig* Method_1_512CA42139A4074E()
	{
		return ((::MoleMole::Config::InputActionTextIconConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_512CA42139A4074E_OFFSET))();
	}

	static ::System::Void Method_1_C70B5D8A5323FFAE(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_C70B5D8A5323FFAE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_88A148B4EBC63872(::MoleMole::LogicButtonInputType a1, ::Enum_3_54486B88E1863A04 a2, ::Enum_3_A019F766F8C74696 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*& a6)
	{
		return ((::System::Void(*)(::MoleMole::LogicButtonInputType, ::Enum_3_54486B88E1863A04, ::Enum_3_A019F766F8C74696, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*&))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_88A148B4EBC63872_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_1_B8E80055360E13E4(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Int32(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_OFFSET))(a1);
	}

	static ::MoleMole::ESystemSettingType Method_1_E630670F1812DD58(::MoleMole::ESystemSettingType a1)
	{
		return ((::MoleMole::ESystemSettingType(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_E630670F1812DD58_OFFSET))(a1);
	}

	static ::System::String* Method_1_65649CAE4DBE3E36(::UnityEngine::InputSystem::LowLevel::GamepadButton a1, ::Enum_3_3BAB5080F98EC22A a2)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::LowLevel::GamepadButton, ::Enum_3_3BAB5080F98EC22A))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_65649CAE4DBE3E36_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D67D2C57F6D6EEB0(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_OFFSET))(a1);
	}

	static ::System::Void Method_1_FADEB4F9AE306EC1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_FADEB4F9AE306EC1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_5C577552B9FF86C3()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_OFFSET))();
	}

	static ::System::Int32 Method_1_1A6EE854731FA09F()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_1A6EE854731FA09F_OFFSET))();
	}

	static ::System::Void Method_1_A7A0C34BF3D66F0D(::MoleMole::EUILayoutPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_A7A0C34BF3D66F0D_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_6F4F3C198A748420(::UnityEngine::InputSystem::LowLevel::MouseButton a1)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::LowLevel::MouseButton))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_6F4F3C198A748420_OFFSET))(a1);
	}

	static ::System::Single Method_1_FD63070C41E2291D(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_FD63070C41E2291D_OFFSET))(a1);
	}

	static ::System::Void Method_1_1006C351D0F01407(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_1006C351D0F01407_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F5F4024AF0190119(::System::Action* a1)
	{
		return ((::System::Boolean(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_F5F4024AF0190119_OFFSET))(a1);
	}

	static ::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))();
	}

	static ::System::Boolean Method_1_C7D782D1E67E3149(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_C7D782D1E67E3149_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>* Method_1_372A441F27F70214()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_372A441F27F70214_OFFSET))();
	}

	static ::System::Boolean Method_1_DCB1C6CDC61D91E8()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_DCB1C6CDC61D91E8_OFFSET))();
	}

	static ::System::Single Method_1_8922227CCE7C68AE(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_8922227CCE7C68AE_OFFSET))(a1);
	}

	static ::Share::ESwitchType Method_1_DB72C87B0AC83617(::MoleMole::ESystemSettingType a1)
	{
		return ((::Share::ESwitchType(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_DB72C87B0AC83617_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_676314BE1F45AAC3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_676314BE1F45AAC3_OFFSET))();
	}

	static ::System::Boolean Method_1_657304315F0E5DBE(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_657304315F0E5DBE_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>* Method_1_A21D18E15CC75B52(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_A21D18E15CC75B52_OFFSET))(a1);
	}

	static ::System::Void Method_1_78BC6CB847109CA1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_78BC6CB847109CA1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_225ABCAEF869B5DE(::MoleMole::ESystemSettingType a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_225ABCAEF869B5DE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>* Method_1_1FABDE09BBF9C4B5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::ESystemSettingType, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_1FABDE09BBF9C4B5_OFFSET))();
	}

	static ::System::Boolean Method_1_49964A8388055B4B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_49964A8388055B4B_OFFSET))();
	}

	static ::System::Void Method_1_E8C3108342698EEF(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_E8C3108342698EEF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_3C927B51D2142A24_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_5C577552B9FF86C3_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_1_OFFSET))();
	}

	static ::System::Boolean Method_1_365846C360F51CFD(::Struct_2_029003AFE5A42E47 a1, ::Enum_3_A019F766F8C74696 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>* a5, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*& a6)
	{
		return ((::System::Boolean(*)(::Struct_2_029003AFE5A42E47, ::Enum_3_A019F766F8C74696, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>*, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*&))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_365846C360F51CFD_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_AF9B4FE3C80A8FF5(::MoleMole::ESystemSettingType a1, ::MoleMole::ESettingPlatform a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType, ::MoleMole::ESettingPlatform))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_AF9B4FE3C80A8FF5_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_367E0F2F4D4DCB1F(::Enum_3_54486B88E1863A04 a1)
	{
		return ((::System::String*(*)(::Enum_3_54486B88E1863A04))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_367E0F2F4D4DCB1F_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC7751B3E49CA017(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_BC7751B3E49CA017_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_A354943FD1ADE97A(::MoleMole::Config::ConfigSoundSetting* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Config::ConfigSoundSetting*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_A354943FD1ADE97A_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* Method_1_4BC4DD9DA3EA2DDA()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_OFFSET))();
	}

	static ::System::Int32 Method_1_5C577552B9FF86C3_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_5C577552B9FF86C3_2_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBFFD3473062FB6()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_BFBFFD3473062FB6_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>* Method_1_120BF1B1161E7F4F()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_120BF1B1161E7F4F_OFFSET))();
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_8922227CCE7C68AE_1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_8922227CCE7C68AE_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D67D2C57F6D6EEB0_1(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_FD63070C41E2291D_1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_FD63070C41E2291D_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC7751B3E49CA017_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_BC7751B3E49CA017_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}

	static ::System::Void Method_1_9B7F0B03B531C5A6(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_9B7F0B03B531C5A6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A322D9DBAD7AC661(::System::Action* a1)
	{
		return ((::System::Boolean(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_A322D9DBAD7AC661_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_1(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_1_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_55BCFEFB39429F91()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_55BCFEFB39429F91_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* Method_1_4BC4DD9DA3EA2DDA_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_1_OFFSET))();
	}

	static ::System::Void Method_1_0755E8342751366D(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_0755E8342751366D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* Method_1_DE767BA70B5FB47E(::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*(*)(::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_DE767BA70B5FB47E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_43B47CB62AE38BEC(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_43B47CB62AE38BEC_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_547DFAD2F0836AF0(::UnityEngine::InputSystem::Key a1)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_547DFAD2F0836AF0_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_B8E80055360E13E4_1(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Int32(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4329C29EB0D095A3(::MoleMole::Config::ConfigSoundSetting* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigSoundSetting*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4329C29EB0D095A3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_2(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_3(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_3_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigSystemSetting* Method_1_6CE71E4BB1DE257F()
	{
		return ((::MoleMole::Config::ConfigSystemSetting*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_6CE71E4BB1DE257F_OFFSET))();
	}

	static ::System::Int32 Method_1_CF7D768BC89D27AE_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_CF7D768BC89D27AE_1_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>* Method_1_4BC4DD9DA3EA2DDA_2()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4BC4DD9DA3EA2DDA_2_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBFFD3473062FB6_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_BFBFFD3473062FB6_1_OFFSET))();
	}

	static ::System::Int32 Method_1_1A6EE854731FA09F_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_1A6EE854731FA09F_1_OFFSET))();
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_4(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_4_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_7778F88A3FFDE5A7(::MoleMole::Config::ConfigSoundSetting* a1)
	{
		return ((::System::Int32(*)(::MoleMole::Config::ConfigSoundSetting*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_7778F88A3FFDE5A7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D67D2C57F6D6EEB0_2(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_D67D2C57F6D6EEB0_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_6230CDAE094287E6(::System::Boolean a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_6230CDAE094287E6_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_5(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_5_OFFSET))(a1, a2);
	}

	static ::MoleMole::ESettingPlatform Method_1_5266A8B2290D4542(::System::Boolean a1)
	{
		return ((::MoleMole::ESettingPlatform(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_5266A8B2290D4542_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_B8E80055360E13E4_2(::MoleMole::LogicButtonInputType a1)
	{
		return ((::System::Int32(*)(::MoleMole::LogicButtonInputType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_B8E80055360E13E4_2_OFFSET))(a1);
	}

	static ::Enum_3_54486B88E1863A04 Method_1_3A9804B5F91F4E87(::MoleMole::LogicButtonInputType a1, ::Enum_3_A019F766F8C74696 a2)
	{
		return ((::Enum_3_54486B88E1863A04(*)(::MoleMole::LogicButtonInputType, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_3A9804B5F91F4E87_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EB092EAC5D07B77E(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_EB092EAC5D07B77E_OFFSET))(a1);
	}

	static ::System::Void Method_1_78BC6CB847109CA1_1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_78BC6CB847109CA1_1_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_547DFAD2F0836AF0_1(::UnityEngine::InputSystem::Key a1)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_547DFAD2F0836AF0_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_7872C9605102D2BF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_7872C9605102D2BF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_23C10DE8FC25A0DA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_23C10DE8FC25A0DA_OFFSET))(a1);
	}

	static ::System::Void Method_1_384DD22676C07F5A(::MoleMole::Config::ConfigInputSetting* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigInputSetting*))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_384DD22676C07F5A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2DF5ADAA64B6BE49(::MoleMole::ESystemSettingType a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_2DF5ADAA64B6BE49_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_31DFF3BD774621CB(::Enum_3_A019F766F8C74696 a1, ::Enum_3_54486B88E1863A04 a2)
	{
		return ((::System::Boolean(*)(::Enum_3_A019F766F8C74696, ::Enum_3_54486B88E1863A04))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_31DFF3BD774621CB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6FA06BD7C07B0AD1(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_6FA06BD7C07B0AD1_OFFSET))(a1);
	}

	static ::System::String* Method_1_D45CA6926F1E8699(::MoleMole::SpecialGamepadInputHintType a1, ::Enum_3_3BAB5080F98EC22A a2)
	{
		return ((::System::String*(*)(::MoleMole::SpecialGamepadInputHintType, ::Enum_3_3BAB5080F98EC22A))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_D45CA6926F1E8699_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4EF5A1A01DFFF3E5_6(::MoleMole::ESettingPlatform a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76DBF6C211384509_METHOD_1_4EF5A1A01DFFF3E5_6_OFFSET))(a1, a2);
	}
};
