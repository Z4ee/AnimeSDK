#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_455124A410922D9D.h"
#include "unitysdk/Class_2_B3BCC9AA95120603_Struct_2_749864A93B6EEBBE.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_374;
class Class_0_16E4307DCC419505_379;
class Class_1_39155512A8777971;
class Class_1_8C728FF5E0D9FC84;
class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class EnvProfileV2; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace RPG::Editor::EnvironmentSystemV2Editor { class EnvEditorBlock; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_FE03A3C217EBE85C;

#define CLASS_2_B3BCC9AA95120603_METHOD_2_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0xBE7A6C0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_074AFBEAE0B41370_OFFSET UNITYSDK_OFFSET(0xBE76210)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_0D61B878F1A21897_OFFSET UNITYSDK_OFFSET(0xBE74E30)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_1B74402525A6379A_OFFSET UNITYSDK_OFFSET(0xBE77E70)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xBE70130)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_26CB54DADCF3DED9_OFFSET UNITYSDK_OFFSET(0xBE735E0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_283508AC3D988C69_OFFSET UNITYSDK_OFFSET(0xBE7C1D0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_3265AEC5435DDEBE_OFFSET UNITYSDK_OFFSET(0xBE754B0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_33AC5C72E0EF495B_OFFSET UNITYSDK_OFFSET(0xBE7A460)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_37BE5ABD476D6FFB_OFFSET UNITYSDK_OFFSET(0xBE76F20)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_37FF57DC5E531832_OFFSET UNITYSDK_OFFSET(0xBE75470)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xBE76610)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_42B06E5564AB755F_OFFSET UNITYSDK_OFFSET(0xBE78A80)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0xBE754F0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_4404A5BA7570FF5E_OFFSET UNITYSDK_OFFSET(0xBE75E60)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_47EFDF992485ECD9_OFFSET UNITYSDK_OFFSET(0xBE772D0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xBE79E50)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_4A5B7F5AD941470C_OFFSET UNITYSDK_OFFSET(0xBE778B0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_4EFB5DFB3E11A6CE_OFFSET UNITYSDK_OFFSET(0xBE76120)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_4FD8751E0FE2002F_OFFSET UNITYSDK_OFFSET(0xBE75FC0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_559BC39C2D7E6187_OFFSET UNITYSDK_OFFSET(0xBE74D60)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_5AB4693D44B5DE04_OFFSET UNITYSDK_OFFSET(0xBE75B50)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_5E1295D9A60D7FEA_OFFSET UNITYSDK_OFFSET(0xBE77100)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_70C9B102CEA5DBB2_OFFSET UNITYSDK_OFFSET(0xBE70A10)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_72A7CD49F8E09611_OFFSET UNITYSDK_OFFSET(0xBE76340)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_7641951E8337159E_OFFSET UNITYSDK_OFFSET(0xBE79FF0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_7A4DC46060932235_OFFSET UNITYSDK_OFFSET(0xBE701D0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_932B91D24BB04156_OFFSET UNITYSDK_OFFSET(0xBE7A2B0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xBE79E60)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_958CA3E3D2C57BAA_OFFSET UNITYSDK_OFFSET(0xBE76D20)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_95B158DAED2F2E71_OFFSET UNITYSDK_OFFSET(0xBE708E0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_9A9E56F26BBA2D43_OFFSET UNITYSDK_OFFSET(0xBE79140)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_9C405B3AD04BC56B_OFFSET UNITYSDK_OFFSET(0xBE702D0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_A087E300DD2D3DE5_OFFSET UNITYSDK_OFFSET(0xBE7C280)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_AF73AE834DDD4537_OFFSET UNITYSDK_OFFSET(0xBE79790)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_B31940FB2128D653_OFFSET UNITYSDK_OFFSET(0xBE70140)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_B5E22388974E906E_OFFSET UNITYSDK_OFFSET(0xBE757A0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0xBE76BE0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_C33DBD3EB379F2DB_OFFSET UNITYSDK_OFFSET(0xBE707B0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_C48C857453ECAFF7_OFFSET UNITYSDK_OFFSET(0xBE7A550)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_C82ADB5A7265C586_OFFSET UNITYSDK_OFFSET(0xBE77950)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE77E30)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_CE0DC006D21BE898_OFFSET UNITYSDK_OFFSET(0xBE7A640)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xBE76BF0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0xBE7AF20)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_DDEBCDCDB6097768_OFFSET UNITYSDK_OFFSET(0xBE777F0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_DE1856363A24C0CC_OFFSET UNITYSDK_OFFSET(0xBE75F70)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_DFFB38D72596B8E0_OFFSET UNITYSDK_OFFSET(0xBE75100)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0xBE76B60)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0xBE76B10)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0xBE768D0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0xBE70950)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_EEE02DEC95431962_OFFSET UNITYSDK_OFFSET(0xBE77A30)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_F15EBD88E7E0FA35_OFFSET UNITYSDK_OFFSET(0xBE71260)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0xBE764C0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_F8E6145ED0829339_OFFSET UNITYSDK_OFFSET(0xBE79EB0)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_FF69C3BC5505054C_OFFSET UNITYSDK_OFFSET(0xBE75430)
#define CLASS_2_B3BCC9AA95120603_METHOD_2_FFE24DF54B83FB77_OFFSET UNITYSDK_OFFSET(0xBE70740)
#define CLASS_2_B3BCC9AA95120603__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE7CA70)
#define CLASS_2_B3BCC9AA95120603__CTOR_OFFSET UNITYSDK_OFFSET(0xBE7C520)

inline static constexpr unsigned int Class_2_B3BCC9AA95120603_TypeDefinitionIndex = 49852;

class Class_2_B3BCC9AA95120603 : public ::Class_1_455124A410922D9D<::Class_2_B3BCC9AA95120603*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::ValueTuple_2<::System::String*, ::System::String*>>** StaticGet_NCIMBBDFJFD()
	{
		return (::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::ValueTuple_2<::System::String*, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3BCC9AA95120603_TypeDefinitionIndex)->GetStaticField(0x65BD0);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_NGABLGIOIBF()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3BCC9AA95120603_TypeDefinitionIndex)->GetStaticField(0x65BD8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_JOHJPPOFKHL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3BCC9AA95120603_TypeDefinitionIndex)->GetStaticField(0x65BE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_BKBCEJDEFGH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3BCC9AA95120603_TypeDefinitionIndex)->GetStaticField(0x65BE8);
	}
	static ::System::Boolean* StaticGet_ALPCEHOGGOG()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3BCC9AA95120603_TypeDefinitionIndex)->GetStaticField(0x14F90);
	}
	::Class_1_FE03A3C217EBE85C<::System::String*, ::System::Int32>* MIGMCEDIPPH; // 0x10
	::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::String*>* JAFOHFGNLDJ; // 0x18
	::System::Collections::Generic::List_1<::Class_1_39155512A8777971*>* IFNMCHPBMDN; // 0x20
	::RPG::Client::LRUCache_2<::System::String*, ::System::Tuple_2<::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*>*>* PAFOEGDMBKK; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* NHILOAEGDJD; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::String*>*>* LOKCABDKPLB; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* BHJILPLENLK; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::String*>* HFCDFGBDPGC; // 0x48
	::Class_1_8C728FF5E0D9FC84* EECNIMFMEPO; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*>* LNMDFOPBCGL; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DOBMODIBDPI; // 0x60
	::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::Int32>* AKFKOIJKAMM; // 0x68
	::System::Collections::Generic::List_1<::Class_2_B3BCC9AA95120603_Struct_2_749864A93B6EEBBE>* EMMMKHJIDAL; // 0x70
	::System::Collections::Generic::HashSet_1<::System::String*>* HIAKKGBPGAC; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ACBMMCJOCMO; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603__CCTOR_OFFSET))();
	}

	::Class_1_8C728FF5E0D9FC84* Method_2_24748FC20F375725()
	{
		return ((::Class_1_8C728FF5E0D9FC84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_B31940FB2128D653()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_B31940FB2128D653_OFFSET))(this);
	}

	::System::Void Method_2_7A4DC46060932235(::RPG::GameCore::EnviromentControlPriority a1, ::System::String* a2, ::Class_1_EAF7984A8FAD6BE4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::String*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_7A4DC46060932235_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C33DBD3EB379F2DB(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_C33DBD3EB379F2DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_95B158DAED2F2E71(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_95B158DAED2F2E71_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9C405B3AD04BC56B(::System::String* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_9C405B3AD04BC56B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FFE24DF54B83FB77(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_FFE24DF54B83FB77_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_EC03BF13D7F40502_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_70C9B102CEA5DBB2(::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_70C9B102CEA5DBB2_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_F15EBD88E7E0FA35(::System::String* a1, ::EnviromentSystemV2Space::EnvProfileV2* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_F15EBD88E7E0FA35_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_26CB54DADCF3DED9(::System::String* a1, ::EnviromentSystemV2Space::EnvProfileV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_26CB54DADCF3DED9_OFFSET))(this, a1, a2);
	}

	::RPG::Client::IAssetOperation* Method_2_559BC39C2D7E6187(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_559BC39C2D7E6187_OFFSET))(this, a1, a2);
	}

	::EnviromentSystemV2Space::EnvProfileV2* Method_2_0D61B878F1A21897(::System::String* a1, ::System::Boolean a2)
	{
		return ((::EnviromentSystemV2Space::EnvProfileV2*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_0D61B878F1A21897_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DFFB38D72596B8E0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_DFFB38D72596B8E0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::String*>* Method_2_FF69C3BC5505054C()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_FF69C3BC5505054C_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* Method_2_37FF57DC5E531832()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_37FF57DC5E531832_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_2_3265AEC5435DDEBE()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_3265AEC5435DDEBE_OFFSET))(this);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_2_B5E22388974E906E(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_B5E22388974E906E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5AB4693D44B5DE04(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_5AB4693D44B5DE04_OFFSET))(this, a1);
	}

	::System::Void Method_2_4404A5BA7570FF5E(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_4404A5BA7570FF5E_OFFSET))(this, a1);
	}

	::System::String* Method_2_DE1856363A24C0CC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_DE1856363A24C0CC_OFFSET))(this);
	}

	::System::String* Method_2_4FD8751E0FE2002F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_4FD8751E0FE2002F_OFFSET))(this);
	}

	::System::String* Method_2_4EFB5DFB3E11A6CE(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_4EFB5DFB3E11A6CE_OFFSET))(this, a1);
	}

	::RPG::GameCore::EnviromentControlPriority Method_2_074AFBEAE0B41370()
	{
		return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_074AFBEAE0B41370_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* Method_2_72A7CD49F8E09611(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_72A7CD49F8E09611_OFFSET))(this, a1);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_EA7C9571288E1295()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_EA7C9571288E1295_OFFSET))(this);
	}

	::System::Void Method_2_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_E727F9956B5BD78B_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Method_2_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_BAE31916328829B3_OFFSET))(this);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBAF10BBA97B82DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_EBAF10BBA97B82DD_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_374* Method_2_958CA3E3D2C57BAA(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::Class_0_16E4307DCC419505_379* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5)
	{
		return ((::Class_0_16E4307DCC419505_374*(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority, ::Class_0_16E4307DCC419505_379*, ::EnviromentSystemV2Space::OutputType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_958CA3E3D2C57BAA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_374* Method_2_37BE5ABD476D6FFB(::System::String* a1, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a2, ::RPG::GameCore::EnviromentControlPriority a3, ::EnviromentSystemV2Space::OutputType a4, ::Class_0_16E4307DCC419505_379* a5, ::System::Action* a6)
	{
		return ((::Class_0_16E4307DCC419505_374*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*, ::RPG::GameCore::EnviromentControlPriority, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_379*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_37BE5ABD476D6FFB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_0_16E4307DCC419505_374* Method_2_5E1295D9A60D7FEA(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_379* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5, ::System::Boolean a6)
	{
		return ((::Class_0_16E4307DCC419505_374*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean, ::Class_0_16E4307DCC419505_379*, ::EnviromentSystemV2Space::OutputType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_5E1295D9A60D7FEA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_47EFDF992485ECD9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_47EFDF992485ECD9_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDEBCDCDB6097768(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_DDEBCDCDB6097768_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4A5B7F5AD941470C(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_4A5B7F5AD941470C_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_374* Method_2_C82ADB5A7265C586(::Class_0_16E4307DCC419505_379* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::Class_0_16E4307DCC419505_374*(*)(::PVOID, ::Class_0_16E4307DCC419505_379*, ::EnviromentSystemV2Space::OutputType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_C82ADB5A7265C586_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_EEE02DEC95431962(::System::String* a1, ::System::Collections::Generic::List_1<::Class_2_B3BCC9AA95120603_Struct_2_749864A93B6EEBBE>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_2_B3BCC9AA95120603_Struct_2_749864A93B6EEBBE>*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_EEE02DEC95431962_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_374* Method_2_1B74402525A6379A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_0_16E4307DCC419505_374*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_1B74402525A6379A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_9A9E56F26BBA2D43(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_9A9E56F26BBA2D43_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_374* Method_2_AF73AE834DDD4537(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_0_16E4307DCC419505_374*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_AF73AE834DDD4537_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_374* Method_2_42B06E5564AB755F(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_374*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_42B06E5564AB755F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_39155512A8777971*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_39155512A8777971*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_39155512A8777971* Method_2_F8E6145ED0829339(::System::String* a1)
	{
		return ((::Class_1_39155512A8777971*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_F8E6145ED0829339_OFFSET))(this, a1);
	}

	::System::Void Method_2_7641951E8337159E(::System::String* a1, ::Class_1_39155512A8777971* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_39155512A8777971*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_7641951E8337159E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_932B91D24BB04156(::System::String* a1, ::Class_1_39155512A8777971* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_39155512A8777971*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_932B91D24BB04156_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_33AC5C72E0EF495B(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_33AC5C72E0EF495B_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C48C857453ECAFF7(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_C48C857453ECAFF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE0DC006D21BE898(::RPG::GameCore::EnviromentControlPriority a1, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_CE0DC006D21BE898_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_04F02FC65FAA2E0C_OFFSET))(this);
	}

	::System::Void Method_2_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Int32 Method_2_283508AC3D988C69(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_283508AC3D988C69_OFFSET))(this, a1);
	}

	::System::String* Method_2_A087E300DD2D3DE5(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::String*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603_METHOD_2_A087E300DD2D3DE5_OFFSET))(this, a1);
	}
};
