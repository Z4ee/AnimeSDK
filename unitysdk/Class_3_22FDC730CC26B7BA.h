#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_22FDC730CC26B7BA_Struct_2_18D6C498A4DB832E.h"
#include "unitysdk/Class_3_22FDC730CC26B7BA_Struct_2_E71A4E719BBCD0AD_4.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/Enum_3_37C78CBCFBD3EE37.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7B8672D4F89E3D96;
class Class_1_7F72DB9FB37DF3E5;
class Class_1_8F791B6D1CAFC248;
class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_628;
class Class_3_621E396E538604DB;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F2DAD7F45F518868;
class Class_3_F33F9DC5F4112336;
namespace MoleMole { class InteractionPoint; }
namespace MoleMole { class MonoItemState; }
namespace MoleMole { class MonoNpcLookIKParameter; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_22FDC730CC26B7BA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x156254A0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_0206FE251932D155_OFFSET UNITYSDK_OFFSET(0x15627E70)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_04CC5A183A701002_OFFSET UNITYSDK_OFFSET(0x15631950)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_04EF1AC77604E2F3_OFFSET UNITYSDK_OFFSET(0x1562C040)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_0930732D884BDC47_OFFSET UNITYSDK_OFFSET(0x1562A5B0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_0B34B1C3CEADD9E5_OFFSET UNITYSDK_OFFSET(0x1562A890)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_0CF44985B118B765_OFFSET UNITYSDK_OFFSET(0x156315D0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_0D0048434D9EA417_OFFSET UNITYSDK_OFFSET(0x15633550)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_14E9BE7825EB14E3_OFFSET UNITYSDK_OFFSET(0x1562C680)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_1A1AC2C2C06AA84E_OFFSET UNITYSDK_OFFSET(0x15626E60)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_1FD1F30A38F5E58E_OFFSET UNITYSDK_OFFSET(0x1562C2C0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_254E44B3167CB56C_OFFSET UNITYSDK_OFFSET(0x1562D8E0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_295DC306422D817C_OFFSET UNITYSDK_OFFSET(0x15626570)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_2B85B3F84CD2B89A_OFFSET UNITYSDK_OFFSET(0x1562AA30)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0x1562DA50)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_2E0150228C601D5A_OFFSET UNITYSDK_OFFSET(0x15631230)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_4A8B4763B11F49E2_OFFSET UNITYSDK_OFFSET(0x1562D180)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_4DA5F9E5792D79ED_OFFSET UNITYSDK_OFFSET(0x15633690)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_5188CA70B0C219A9_OFFSET UNITYSDK_OFFSET(0x15633BC0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_60A88E197FF28F6F_OFFSET UNITYSDK_OFFSET(0x15630200)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_64FEF20B99B6ADC1_OFFSET UNITYSDK_OFFSET(0x15627750)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_65EEF664DED84683_OFFSET UNITYSDK_OFFSET(0x15635C70)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_673F27F5F55020B9_OFFSET UNITYSDK_OFFSET(0x15631430)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_68D142A66D792D93_OFFSET UNITYSDK_OFFSET(0x156267D0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_6C6547FDC801E67D_OFFSET UNITYSDK_OFFSET(0x15626B80)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_6E445425BC96872A_OFFSET UNITYSDK_OFFSET(0x1562D440)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_7244DA2385501B91_OFFSET UNITYSDK_OFFSET(0x1562D300)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_757A951158CE76FA_OFFSET UNITYSDK_OFFSET(0x1562E120)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0x15626790)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_88313D56CAFB4AAA_OFFSET UNITYSDK_OFFSET(0x15629710)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_8A9CC55F24CCA0D4_OFFSET UNITYSDK_OFFSET(0x1562C450)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_8B5DE8EBDD39D2D2_OFFSET UNITYSDK_OFFSET(0x15635650)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_8C99969EF2E26522_OFFSET UNITYSDK_OFFSET(0x15633230)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_90081F3C3905DE1E_OFFSET UNITYSDK_OFFSET(0x1562BA40)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_90889A6A6929E4BE_OFFSET UNITYSDK_OFFSET(0x15630590)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_91D97064765DCBF1_OFFSET UNITYSDK_OFFSET(0x1562C5D0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_92B540916F43AC48_OFFSET UNITYSDK_OFFSET(0x15634F70)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_94CD6F201FAB00F9_OFFSET UNITYSDK_OFFSET(0x15630DC0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_956900A3AE2A9232_OFFSET UNITYSDK_OFFSET(0x156346A0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_9E214A23BD812C2F_OFFSET UNITYSDK_OFFSET(0x156302B0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_9F88FD72C36E1AAD_OFFSET UNITYSDK_OFFSET(0x15627550)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_A25FD8389855B1D7_OFFSET UNITYSDK_OFFSET(0x15635230)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x15635FE0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_A8873BD99FA16A0B_OFFSET UNITYSDK_OFFSET(0x15635840)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_AA3F0C63FFCB04E5_OFFSET UNITYSDK_OFFSET(0x15626880)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_AED7B894F1C117B3_OFFSET UNITYSDK_OFFSET(0x15632ED0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_B1036099F932819B_OFFSET UNITYSDK_OFFSET(0x15626A00)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_B6EEE689B821354E_OFFSET UNITYSDK_OFFSET(0x15628180)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x156355C0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_BAE329CBE121CA0B_OFFSET UNITYSDK_OFFSET(0x15632920)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_C2C24FF6AA72788C_OFFSET UNITYSDK_OFFSET(0x15625CC0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_C731C8CCE6C3BA32_OFFSET UNITYSDK_OFFSET(0x15634FF0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_C8B678E2CB980D17_OFFSET UNITYSDK_OFFSET(0x156275E0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15636060)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_D8C7C53E7C324435_OFFSET UNITYSDK_OFFSET(0x15631B70)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_D996CB207304E68F_OFFSET UNITYSDK_OFFSET(0x1562BB70)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_DDCD3799A12846C2_OFFSET UNITYSDK_OFFSET(0x15631820)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_DF2FF8BF97EDC90C_OFFSET UNITYSDK_OFFSET(0x15635DC0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_E0129F189B325BB6_OFFSET UNITYSDK_OFFSET(0x156271E0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_E74F55237B8B484D_OFFSET UNITYSDK_OFFSET(0x15634170)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_E9D69DD588A28352_OFFSET UNITYSDK_OFFSET(0x156277F0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_F43DABB11AEB8CA2_OFFSET UNITYSDK_OFFSET(0x15636020)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0x1562AFA0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_F679959B1EFB24CA_OFFSET UNITYSDK_OFFSET(0x15635EC0)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_F78004E56A2E51CA_OFFSET UNITYSDK_OFFSET(0x15626320)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_F7BE6D9C58925E54_OFFSET UNITYSDK_OFFSET(0x15625B10)
#define CLASS_3_22FDC730CC26B7BA_METHOD_3_FFA995A2FFF926F0_OFFSET UNITYSDK_OFFSET(0x1562FE10)
#define CLASS_3_22FDC730CC26B7BA_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x15625840)
#define CLASS_3_22FDC730CC26B7BA_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x15625F90)
#define CLASS_3_22FDC730CC26B7BA_UPDATE_OFFSET UNITYSDK_OFFSET(0x156265D0)
#define CLASS_3_22FDC730CC26B7BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x15626780)
#define CLASS_3_22FDC730CC26B7BA__CTOR_OFFSET UNITYSDK_OFFSET(0x15626730)

inline static constexpr unsigned int Class_3_22FDC730CC26B7BA_TypeDefinitionIndex = 74553;

class Class_3_22FDC730CC26B7BA : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Single* StaticGet_Field_3_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_22FDC730CC26B7BA_TypeDefinitionIndex)->GetStaticField(0xD780);
	}
	// static const ::System::Int32 Field_3_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_3_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_3_6 = 0x2; // 0x0
	// static const ::System::Single Field_3_4; // 0x0
	// static const ::System::Single Field_3_10; // 0x0
	// static const ::System::Single Field_3_9; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void OnTriggerEnter(::MoleMole::Battle::Entity* a1, ::Enum_3_0A3761FE34514D6C_1 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_0A3761FE34514D6C_1))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_ONTRIGGERENTER_OFFSET))(a1, a2);
	}

	static ::System::Void OnTriggerExit(::MoleMole::Battle::Entity* a1, ::Enum_3_0A3761FE34514D6C_1 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_0A3761FE34514D6C_1))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_ONTRIGGEREXIT_OFFSET))(a1, a2);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_UPDATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_797B0DC3D00A8877(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_797B0DC3D00A8877_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_295DC306422D817C(::System::Int32 a1, ::Enum_3_37C78CBCFBD3EE37 a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::Enum_3_37C78CBCFBD3EE37, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_295DC306422D817C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_68D142A66D792D93(::MoleMole::Battle::Entity* a1, ::Class_3_621E396E538604DB* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_621E396E538604DB*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_68D142A66D792D93_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_AA3F0C63FFCB04E5(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_AA3F0C63FFCB04E5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E0129F189B325BB6(::Class_3_621E396E538604DB* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_E0129F189B325BB6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E9D69DD588A28352(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_E9D69DD588A28352_OFFSET))(a1);
	}

	static ::System::Void Method_3_0206FE251932D155(::Class_3_621E396E538604DB* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_0206FE251932D155_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0930732D884BDC47(::Class_3_621E396E538604DB* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_0930732D884BDC47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F7BE6D9C58925E54(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::Class_1_8F791B6D1CAFC248* a3, ::Enum_3_0A3761FE34514D6C_1 a4, ::System::Collections::Generic::List_1<::System::Int32>* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::Class_1_8F791B6D1CAFC248*, ::Enum_3_0A3761FE34514D6C_1, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_F7BE6D9C58925E54_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_2B85B3F84CD2B89A(::Class_3_C93CC3D2C2AC4067* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_2B85B3F84CD2B89A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_F5B50F2A74C670C4_OFFSET))(a1);
	}

	static ::System::Void Method_3_04EF1AC77604E2F3(::Class_3_621E396E538604DB* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_04EF1AC77604E2F3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_91D97064765DCBF1(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_91D97064765DCBF1_OFFSET))(a1);
	}

	static ::System::Void Method_3_14E9BE7825EB14E3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_14E9BE7825EB14E3_OFFSET))(a1);
	}

	static ::System::Void Method_3_4A8B4763B11F49E2(::Class_3_621E396E538604DB* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_4A8B4763B11F49E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_8A9CC55F24CCA0D4(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_8A9CC55F24CCA0D4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6E445425BC96872A(::MoleMole::Battle::Entity* a1, ::Class_3_621E396E538604DB* a2, ::System::String* a3, ::System::Collections::Generic::IList_1<::System::String*>* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_621E396E538604DB*, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_6E445425BC96872A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_254E44B3167CB56C(::MoleMole::Battle::Entity* a1, ::Class_3_621E396E538604DB* a2, ::MoleMole::InteractionPoint* a3, ::Class_2_208CC9941471731A_628* a4, ::System::Action* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_621E396E538604DB*, ::MoleMole::InteractionPoint*, ::Class_2_208CC9941471731A_628*, ::System::Action*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_254E44B3167CB56C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_2D0EF4C8B528FC1E_OFFSET))(a1);
	}

	static ::System::Void Method_3_FFA995A2FFF926F0(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_FFA995A2FFF926F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9E214A23BD812C2F(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_9E214A23BD812C2F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_B1036099F932819B(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_B1036099F932819B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_90889A6A6929E4BE(::Class_3_621E396E538604DB* a1)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_90889A6A6929E4BE_OFFSET))(a1);
	}

	static ::System::Void Method_3_94CD6F201FAB00F9(::Class_3_C93CC3D2C2AC4067* a1, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* a2)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_94CD6F201FAB00F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2E0150228C601D5A(::Class_3_621E396E538604DB* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_2E0150228C601D5A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0B34B1C3CEADD9E5(::System::Int32 a1, ::Class_1_7F72DB9FB37DF3E5* a2, ::Class_3_22FDC730CC26B7BA_Struct_2_18D6C498A4DB832E& a3)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_1_7F72DB9FB37DF3E5*, ::Class_3_22FDC730CC26B7BA_Struct_2_18D6C498A4DB832E&))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_0B34B1C3CEADD9E5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_1A1AC2C2C06AA84E(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_1A1AC2C2C06AA84E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7244DA2385501B91(::System::Int32 a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Int32, ::Class_3_F33F9DC5F4112336*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_7244DA2385501B91_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C2C24FF6AA72788C(::MoleMole::Battle::Entity* a1, ::Enum_3_0A3761FE34514D6C_1 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Enum_3_0A3761FE34514D6C_1, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_C2C24FF6AA72788C_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::MonoNpcLookIKParameter* Method_3_DDCD3799A12846C2(::Class_3_621E396E538604DB* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::MoleMole::MonoNpcLookIKParameter*(*)(::Class_3_621E396E538604DB*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_DDCD3799A12846C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_04CC5A183A701002(::Enum_3_0A3761FE34514D6C_1 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Enum_3_0A3761FE34514D6C_1, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_04CC5A183A701002_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D8C7C53E7C324435(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_D8C7C53E7C324435_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_64FEF20B99B6ADC1(::Class_3_621E396E538604DB* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_64FEF20B99B6ADC1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_90081F3C3905DE1E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_90081F3C3905DE1E_OFFSET))(a1);
	}

	static ::System::Void Method_3_AED7B894F1C117B3(::Class_3_621E396E538604DB* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_C93CC3D2C2AC4067*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_AED7B894F1C117B3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0D0048434D9EA417(::Class_3_621E396E538604DB* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_0D0048434D9EA417_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_6C6547FDC801E67D(::System::Int32 a1, ::Enum_3_0A3761FE34514D6C_1 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Enum_3_0A3761FE34514D6C_1, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_6C6547FDC801E67D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_88313D56CAFB4AAA(::Class_3_621E396E538604DB* a1, ::Class_3_F2DAD7F45F518868* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_F2DAD7F45F518868*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_88313D56CAFB4AAA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0CF44985B118B765(::Class_3_F33F9DC5F4112336* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::Class_3_22FDC730CC26B7BA_Struct_2_E71A4E719BBCD0AD_4& a5)
	{
		return ((::System::Void(*)(::Class_3_F33F9DC5F4112336*, ::System::String*, ::System::String*, ::System::String*, ::Class_3_22FDC730CC26B7BA_Struct_2_E71A4E719BBCD0AD_4&))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_0CF44985B118B765_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_5188CA70B0C219A9(::Class_3_621E396E538604DB* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>* a2, ::System::String* a3, ::MoleMole::MonoItemState* a4)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>*, ::System::String*, ::MoleMole::MonoItemState*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_5188CA70B0C219A9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_E74F55237B8B484D(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_E74F55237B8B484D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F78004E56A2E51CA(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_F78004E56A2E51CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C8B678E2CB980D17(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_C8B678E2CB980D17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_673F27F5F55020B9(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_673F27F5F55020B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A25FD8389855B1D7(::Class_3_621E396E538604DB* a1)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_A25FD8389855B1D7_OFFSET))(a1);
	}

	static ::System::Void Method_3_C731C8CCE6C3BA32(::Enum_3_0A3761FE34514D6C_1 a1, ::System::Int32 a2, ::System::Action* a3, ::System::Action* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::Enum_3_0A3761FE34514D6C_1, ::System::Int32, ::System::Action*, ::System::Action*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_C731C8CCE6C3BA32_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8B5DE8EBDD39D2D2(::MoleMole::Battle::Entity* a1, ::Class_3_621E396E538604DB* a2, ::Class_1_7B8672D4F89E3D96* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_621E396E538604DB*, ::Class_1_7B8672D4F89E3D96*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_8B5DE8EBDD39D2D2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_1FD1F30A38F5E58E(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_1FD1F30A38F5E58E_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_9F88FD72C36E1AAD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_9F88FD72C36E1AAD_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_A8873BD99FA16A0B(::System::Int32 a1, ::UnityEngine::Transform* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Transform*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_A8873BD99FA16A0B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_65EEF664DED84683(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_65EEF664DED84683_OFFSET))(a1);
	}

	static ::System::Void Method_3_DF2FF8BF97EDC90C(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_DF2FF8BF97EDC90C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F679959B1EFB24CA(::Class_2_208CC9941471731A_628* a1, ::Class_3_621E396E538604DB* a2)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_628*, ::Class_3_621E396E538604DB*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_F679959B1EFB24CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C99969EF2E26522(::Class_3_621E396E538604DB* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_8C99969EF2E26522_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_621E396E538604DB* a1)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_60A88E197FF28F6F(::Class_3_621E396E538604DB* a1)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_60A88E197FF28F6F_OFFSET))(a1);
	}

	static ::System::Void Method_3_BAE329CBE121CA0B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_BAE329CBE121CA0B_OFFSET))(a1);
	}

	static ::System::Void Method_3_F43DABB11AEB8CA2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_F43DABB11AEB8CA2_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_4DA5F9E5792D79ED(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_4DA5F9E5792D79ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D996CB207304E68F(::Class_3_621E396E538604DB* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_D996CB207304E68F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_757A951158CE76FA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_757A951158CE76FA_OFFSET))(a1);
	}

	static ::System::Void Method_3_B6EEE689B821354E(::Class_3_621E396E538604DB* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_621E396E538604DB*, ::Class_3_C93CC3D2C2AC4067*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_B6EEE689B821354E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_92B540916F43AC48(::Enum_3_0A3761FE34514D6C_1 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_0A3761FE34514D6C_1))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_92B540916F43AC48_OFFSET))(a1);
	}

	static ::System::Void Method_3_956900A3AE2A9232(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_METHOD_3_956900A3AE2A9232_OFFSET))(a1, a2);
	}
};
