#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Struct_2_6042AC018BEA22C9.h"
#include "unitysdk/Struct_2_6ACACA0DC05B90E7.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"
#include "unitysdk/Struct_2_FE037F41602E27AE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_272;
class Class_0_16E4307DCC419505_721;
class Class_1_83CB18DF2BB6E6AB;
class Class_1_92FC772495A5D164;
class Class_2_208CC9941471731A_1117;
namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1487A3F820CB8361_METHOD_1_09D0240BAB34ADD6_OFFSET UNITYSDK_OFFSET(0x1A20D2D0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_1096E16F50B74F35_OFFSET UNITYSDK_OFFSET(0x1A208FB0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_1835577754EE1930_1_OFFSET UNITYSDK_OFFSET(0x1A20CB40)
#define CLASS_1_1487A3F820CB8361_METHOD_1_1835577754EE1930_OFFSET UNITYSDK_OFFSET(0x1A20B820)
#define CLASS_1_1487A3F820CB8361_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x1A2089A0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_1EA0894A9616ED1B_OFFSET UNITYSDK_OFFSET(0x1A20CA60)
#define CLASS_1_1487A3F820CB8361_METHOD_1_23FAEB8BD5CBBC53_OFFSET UNITYSDK_OFFSET(0x1A20CAC0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_257C84966B98B5F1_OFFSET UNITYSDK_OFFSET(0x1A20D3F0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_271551BF2B59B0B1_OFFSET UNITYSDK_OFFSET(0x1A20E940)
#define CLASS_1_1487A3F820CB8361_METHOD_1_29F21058F738362F_OFFSET UNITYSDK_OFFSET(0x1A209E30)
#define CLASS_1_1487A3F820CB8361_METHOD_1_2A78BE5ECA721E82_OFFSET UNITYSDK_OFFSET(0x1A2094F0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1A2090B0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_3CFCBF55E62AFB95_OFFSET UNITYSDK_OFFSET(0x1A209930)
#define CLASS_1_1487A3F820CB8361_METHOD_1_3F47703E6779D6DC_OFFSET UNITYSDK_OFFSET(0x1A209560)
#define CLASS_1_1487A3F820CB8361_METHOD_1_4DF4D9162AD406FC_OFFSET UNITYSDK_OFFSET(0x1A20AFE0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_51B20602B9E0D6EE_OFFSET UNITYSDK_OFFSET(0x1A20B770)
#define CLASS_1_1487A3F820CB8361_METHOD_1_5C23018870BC2339_OFFSET UNITYSDK_OFFSET(0x1A20C830)
#define CLASS_1_1487A3F820CB8361_METHOD_1_5FF5C61A6E57C587_OFFSET UNITYSDK_OFFSET(0x1A208060)
#define CLASS_1_1487A3F820CB8361_METHOD_1_6541F4AC01623AD9_OFFSET UNITYSDK_OFFSET(0x1A20CF20)
#define CLASS_1_1487A3F820CB8361_METHOD_1_6D53CFBC920232CE_OFFSET UNITYSDK_OFFSET(0x1A20C090)
#define CLASS_1_1487A3F820CB8361_METHOD_1_72934BFBE171AC0F_OFFSET UNITYSDK_OFFSET(0x1A208940)
#define CLASS_1_1487A3F820CB8361_METHOD_1_73A9A2CA6CDD317B_OFFSET UNITYSDK_OFFSET(0x1A20A8D0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_76AAE40741F092B2_OFFSET UNITYSDK_OFFSET(0x1A20A820)
#define CLASS_1_1487A3F820CB8361_METHOD_1_7A14754564E7B8B5_OFFSET UNITYSDK_OFFSET(0x1A209290)
#define CLASS_1_1487A3F820CB8361_METHOD_1_7A3C15BAAFDEF6DF_OFFSET UNITYSDK_OFFSET(0x1A20E2E0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_7E1B6AD6632C6FF9_1_OFFSET UNITYSDK_OFFSET(0x1A20E580)
#define CLASS_1_1487A3F820CB8361_METHOD_1_7E1B6AD6632C6FF9_OFFSET UNITYSDK_OFFSET(0x1A20A1D0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_8BADE3EA5544BCD0_OFFSET UNITYSDK_OFFSET(0x1A2080C0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_8CB1989C8DB0AB32_OFFSET UNITYSDK_OFFSET(0x1A20D9A0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_90225DDC39F101C4_OFFSET UNITYSDK_OFFSET(0x1A20CAD0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_90ABCF83D26F863F_OFFSET UNITYSDK_OFFSET(0x1A20E820)
#define CLASS_1_1487A3F820CB8361_METHOD_1_95A7C6EFBEC4695C_1_OFFSET UNITYSDK_OFFSET(0x1A20E9F0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_95A7C6EFBEC4695C_OFFSET UNITYSDK_OFFSET(0x1A20DC40)
#define CLASS_1_1487A3F820CB8361_METHOD_1_95BEA9F1D54CC18E_OFFSET UNITYSDK_OFFSET(0x1A20C6E0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_9ADDB5970A720003_OFFSET UNITYSDK_OFFSET(0x1A20B080)
#define CLASS_1_1487A3F820CB8361_METHOD_1_A7A88BA3B88C7EC8_OFFSET UNITYSDK_OFFSET(0x1A20ACE0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_AA9CF42DF07C1038_OFFSET UNITYSDK_OFFSET(0x1A20CB20)
#define CLASS_1_1487A3F820CB8361_METHOD_1_ADA95A381BA16BD5_OFFSET UNITYSDK_OFFSET(0x1A20F6B0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_B6D17EAC719C29E2_OFFSET UNITYSDK_OFFSET(0x1A20AFD0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_B733E73C841BE2C0_OFFSET UNITYSDK_OFFSET(0x1A20B570)
#define CLASS_1_1487A3F820CB8361_METHOD_1_B9DF9B407FAC57E9_OFFSET UNITYSDK_OFFSET(0x1A20E650)
#define CLASS_1_1487A3F820CB8361_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A20E930)
#define CLASS_1_1487A3F820CB8361_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A20CB30)
#define CLASS_1_1487A3F820CB8361_METHOD_1_CBCA195379CE99B9_OFFSET UNITYSDK_OFFSET(0x1A20CF30)
#define CLASS_1_1487A3F820CB8361_METHOD_1_D14E91C58C8A620A_OFFSET UNITYSDK_OFFSET(0x1A20E730)
#define CLASS_1_1487A3F820CB8361_METHOD_1_D267E354842733BA_OFFSET UNITYSDK_OFFSET(0x1A20A5F0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_DF7301AD498E79F8_OFFSET UNITYSDK_OFFSET(0x1A20BC40)
#define CLASS_1_1487A3F820CB8361_METHOD_1_E0B6E173C55C6FD5_OFFSET UNITYSDK_OFFSET(0x1A20A2A0)
#define CLASS_1_1487A3F820CB8361_METHOD_1_E604ABD9D5C64B1C_OFFSET UNITYSDK_OFFSET(0x1A20BF00)
#define CLASS_1_1487A3F820CB8361_METHOD_1_F226850BB68C24B0_OFFSET UNITYSDK_OFFSET(0x1A209F60)
#define CLASS_1_1487A3F820CB8361_METHOD_1_F9C5128183F2173E_OFFSET UNITYSDK_OFFSET(0x1A20F130)
#define CLASS_1_1487A3F820CB8361_METHOD_1_FB8CBA862ACA25F7_OFFSET UNITYSDK_OFFSET(0x1A20B6A0)
#define CLASS_1_1487A3F820CB8361__CTOR_OFFSET UNITYSDK_OFFSET(0x1A207F40)

inline static constexpr unsigned int Class_1_1487A3F820CB8361_TypeDefinitionIndex = 78436;

class Class_1_1487A3F820CB8361 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_6ACACA0DC05B90E7>* Field_1_10; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_92FC772495A5D164*>* Field_1_8; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_6ACACA0DC05B90E7>* Field_1_9; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F213AC3D3FBF57B9>* Field_1_5; // 0x28
	::MoleMole::EntityHandle Field_1_13; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_7; // 0x40
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_F213AC3D3FBF57B9>* Field_1_4; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* Field_1_12; // 0x50
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_6; // 0x58
	::Class_0_16E4307DCC419505_721* Field_1_11; // 0x60
	::System::Int32 Field_1_1; // 0x68
	::Struct_2_6042AC018BEA22C9 Field_1_0; // 0x6C
	::Struct_2_FE037F41602E27AE Field_1_3; // 0x78
	::Struct_2_FE037F41602E27AE Field_1_2; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_5FF5C61A6E57C587(::Class_0_16E4307DCC419505_272* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_272*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_5FF5C61A6E57C587_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_72934BFBE171AC0F(::MoleMole::Config::BaseProperty a1, ::Class_2_208CC9941471731A_1117* a2)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::Class_2_208CC9941471731A_1117*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_72934BFBE171AC0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_1DE63FE11FA0D5B4_OFFSET))(this);
	}

	::System::Void Method_1_7A14754564E7B8B5(::MoleMole::Config::BaseProperty a1, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a2, ::Class_0_16E4307DCC419505_272* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_0_16E4307DCC419505_272*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_7A14754564E7B8B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3F47703E6779D6DC(::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_3F47703E6779D6DC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_29F21058F738362F(::System::Double& a1, ::System::Double& a2, ::System::Double a3, ::MoleMole::Config::BaseProperty a4, ::MoleMole::Config::PropertyModifyFunction a5, ::System::Double a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Double&, ::System::Double&, ::System::Double, ::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_29F21058F738362F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Double Method_1_7E1B6AD6632C6FF9(::MoleMole::Config::BaseProperty a1, ::System::String* a2, ::MoleMole::Config::PropertyModifyFunction a3, ::System::Double a4)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_7E1B6AD6632C6FF9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_76AAE40741F092B2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_76AAE40741F092B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_73A9A2CA6CDD317B(::MoleMole::Config::BaseProperty a1, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a2, ::Class_0_16E4307DCC419505_272* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_0_16E4307DCC419505_272*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_73A9A2CA6CDD317B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Int32 Method_1_8BADE3EA5544BCD0(::Class_0_16E4307DCC419505_272* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_272*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_8BADE3EA5544BCD0_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A7A88BA3B88C7EC8(::Class_0_16E4307DCC419505_272* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_272*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_A7A88BA3B88C7EC8_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F213AC3D3FBF57B9>* Method_1_B6D17EAC719C29E2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F213AC3D3FBF57B9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_B6D17EAC719C29E2_OFFSET))(this);
	}

	::System::Boolean Method_1_4DF4D9162AD406FC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_4DF4D9162AD406FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_9ADDB5970A720003(::System::UInt32 a1, ::Class_0_16E4307DCC419505_272* a2, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_272*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_9ADDB5970A720003_OFFSET))(this, a1, a2, a3);
	}

	::System::Double Method_1_FB8CBA862ACA25F7(::MoleMole::Config::BaseProperty a1, ::System::String* a2)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_FB8CBA862ACA25F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1835577754EE1930(::Struct_2_F213AC3D3FBF57B9 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F213AC3D3FBF57B9, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_1835577754EE1930_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_DF7301AD498E79F8(::MoleMole::Config::BaseProperty a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_DF7301AD498E79F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1096E16F50B74F35(::MoleMole::Config::BaseProperty a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_1096E16F50B74F35_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D53CFBC920232CE(::Class_1_92FC772495A5D164* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_92FC772495A5D164*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_6D53CFBC920232CE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_95BEA9F1D54CC18E(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_95BEA9F1D54CC18E_OFFSET))(this, a1);
	}

	::Struct_2_F213AC3D3FBF57B9& Method_1_B733E73C841BE2C0(::Struct_2_F213AC3D3FBF57B9& a1, ::System::Single a2, ::MoleMole::Config::BaseProperty a3, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a4)
	{
		return ((::Struct_2_F213AC3D3FBF57B9&(*)(::PVOID, ::Struct_2_F213AC3D3FBF57B9&, ::System::Single, ::MoleMole::Config::BaseProperty, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_B733E73C841BE2C0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5C23018870BC2339(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_5C23018870BC2339_OFFSET))(this, a1);
	}

	::System::Double Method_1_51B20602B9E0D6EE(::MoleMole::Config::BaseProperty a1, ::System::String* a2)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_51B20602B9E0D6EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1EA0894A9616ED1B(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_1EA0894A9616ED1B_OFFSET))(this, a1);
	}

	::System::Void Method_1_23FAEB8BD5CBBC53(::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_F213AC3D3FBF57B9>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_F213AC3D3FBF57B9>*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_23FAEB8BD5CBBC53_OFFSET))(this, a1);
	}

	::System::Void Method_1_E604ABD9D5C64B1C(::MoleMole::Config::BaseProperty a1, ::System::String* a2, ::Struct_2_6ACACA0DC05B90E7& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::Struct_2_6ACACA0DC05B90E7&))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_E604ABD9D5C64B1C_OFFSET))(this, a1, a2, a3);
	}

	::Share::EPropertyType Method_1_90225DDC39F101C4(::MoleMole::Config::BaseProperty a1)
	{
		return ((::Share::EPropertyType(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_90225DDC39F101C4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_F213AC3D3FBF57B9>* Method_1_AA9CF42DF07C1038()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_F213AC3D3FBF57B9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_AA9CF42DF07C1038_OFFSET))(this);
	}

	::System::Boolean Method_1_F226850BB68C24B0(::MoleMole::Config::BaseProperty a1, ::System::Double a2, ::System::Double a3, ::System::Double& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::Double, ::System::Double, ::System::Double&))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_F226850BB68C24B0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_1835577754EE1930_1(::Struct_2_F213AC3D3FBF57B9& a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F213AC3D3FBF57B9&, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_1835577754EE1930_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6541F4AC01623AD9(::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F213AC3D3FBF57B9>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_F213AC3D3FBF57B9>*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_6541F4AC01623AD9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E0B6E173C55C6FD5(::Struct_2_F213AC3D3FBF57B9& a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_F213AC3D3FBF57B9&, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_E0B6E173C55C6FD5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CBCA195379CE99B9(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_CBCA195379CE99B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_09D0240BAB34ADD6(::MoleMole::Config::BaseProperty a1, ::System::Double a2, ::System::Double a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_09D0240BAB34ADD6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_257C84966B98B5F1(::System::UInt32 a1, ::System::Int32 a2, ::Class_0_16E4307DCC419505_272* a3, ::Class_0_16E4307DCC419505_721* a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::System::Boolean a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Class_0_16E4307DCC419505_272*, ::Class_0_16E4307DCC419505_721*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_257C84966B98B5F1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Double Method_1_95A7C6EFBEC4695C(::Struct_2_F213AC3D3FBF57B9 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::MoleMole::Config::PropertyModifyFunction a4, ::System::Double a5)
	{
		return ((::System::Double(*)(::PVOID, ::Struct_2_F213AC3D3FBF57B9, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_95A7C6EFBEC4695C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Double Method_1_7A3C15BAAFDEF6DF(::System::Boolean a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3)
	{
		return ((::System::Double(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_7A3C15BAAFDEF6DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Double Method_1_7E1B6AD6632C6FF9_1(::MoleMole::Config::BaseProperty a1, ::System::String* a2, ::MoleMole::Config::PropertyModifyFunction a3, ::System::Double a4)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_7E1B6AD6632C6FF9_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B9DF9B407FAC57E9(::Class_1_83CB18DF2BB6E6AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83CB18DF2BB6E6AB*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_B9DF9B407FAC57E9_OFFSET))(this, a1);
	}

	::System::String* Method_1_D14E91C58C8A620A(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_D14E91C58C8A620A_OFFSET))(this, a1);
	}

	::System::Void Method_1_90ABCF83D26F863F(::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_90ABCF83D26F863F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CFCBF55E62AFB95(::System::String* a1, ::System::Single a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_3CFCBF55E62AFB95_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_271551BF2B59B0B1(::System::Collections::Generic::List_1<::Class_1_83CB18DF2BB6E6AB*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_83CB18DF2BB6E6AB*>*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_271551BF2B59B0B1_OFFSET))(this, a1);
	}

	::System::Double Method_1_95A7C6EFBEC4695C_1(::Struct_2_F213AC3D3FBF57B9 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::MoleMole::Config::PropertyModifyFunction a4, ::System::Double a5)
	{
		return ((::System::Double(*)(::PVOID, ::Struct_2_F213AC3D3FBF57B9, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_95A7C6EFBEC4695C_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F9C5128183F2173E(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::Enum_3_65BB655811A73E3A a4, ::Class_0_16E4307DCC419505_272* a5, ::Class_0_16E4307DCC419505_721* a6, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::Enum_3_65BB655811A73E3A, ::Class_0_16E4307DCC419505_272*, ::Class_0_16E4307DCC419505_721*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_F9C5128183F2173E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Double Method_1_D267E354842733BA(::MoleMole::Config::BaseProperty a1, ::System::String* a2, ::MoleMole::Config::PropertyModifyFunction a3, ::System::Double a4)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_D267E354842733BA_OFFSET))(this, a1, a2, a3, a4);
	}

	::Struct_2_F213AC3D3FBF57B9& Method_1_2A78BE5ECA721E82(::Struct_2_F213AC3D3FBF57B9& a1, ::System::Single a2)
	{
		return ((::Struct_2_F213AC3D3FBF57B9&(*)(::PVOID, ::Struct_2_F213AC3D3FBF57B9&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_2A78BE5ECA721E82_OFFSET))(this, a1, a2);
	}

	::System::Double Method_1_ADA95A381BA16BD5(::Struct_2_F213AC3D3FBF57B9 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::MoleMole::Config::PropertyModifyFunction a4, ::System::Double a5)
	{
		return ((::System::Double(*)(::PVOID, ::Struct_2_F213AC3D3FBF57B9, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_ADA95A381BA16BD5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_8CB1989C8DB0AB32(::Class_0_16E4307DCC419505_272* a1, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_272*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_1487A3F820CB8361_METHOD_1_8CB1989C8DB0AB32_OFFSET))(this, a1, a2);
	}
};
