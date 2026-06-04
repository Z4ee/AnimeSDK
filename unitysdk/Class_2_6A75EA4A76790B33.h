#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_455124A410922D9D.h"
#include "unitysdk/Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_331;
class Class_0_16E4307DCC419505_336;
class Class_1_44E98D8B63E395F0;
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

#define CLASS_2_6A75EA4A76790B33_METHOD_2_0D61B878F1A21897_OFFSET UNITYSDK_OFFSET(0xAABE810)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_16AD6477D6792656_OFFSET UNITYSDK_OFFSET(0xAABD360)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xAABA260)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_283508AC3D988C69_OFFSET UNITYSDK_OFFSET(0xAAC4D40)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_2CAADC051AEB67F9_OFFSET UNITYSDK_OFFSET(0xAAC02A0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_3265AEC5435DDEBE_OFFSET UNITYSDK_OFFSET(0xAABEE20)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_33AC5C72E0EF495B_OFFSET UNITYSDK_OFFSET(0xAAC3730)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_37FF57DC5E531832_OFFSET UNITYSDK_OFFSET(0xAABEDE0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xAABFDD0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_3D645CB6A14BF31F_OFFSET UNITYSDK_OFFSET(0xAABF4C0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0xAAC38A0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_42D6E69C89AE0FFA_OFFSET UNITYSDK_OFFSET(0xAAC24C0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0xAABEE60)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_4404A5BA7570FF5E_OFFSET UNITYSDK_OFFSET(0xAABF810)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_47EFDF992485ECD9_OFFSET UNITYSDK_OFFSET(0xAAC09A0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xAAC3120)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_4A5B7F5AD941470C_OFFSET UNITYSDK_OFFSET(0xAAC0CC0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xAAC0300)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_503E0E56081CDC57_OFFSET UNITYSDK_OFFSET(0xAABFA50)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_559BC39C2D7E6187_OFFSET UNITYSDK_OFFSET(0xAABE740)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_5AD0E9E26907DC8D_OFFSET UNITYSDK_OFFSET(0xAABEAF0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_5F0110E23404ABD2_OFFSET UNITYSDK_OFFSET(0xAAC05D0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_70C9B102CEA5DBB2_OFFSET UNITYSDK_OFFSET(0xAABAB40)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_7261355B8F7C0386_OFFSET UNITYSDK_OFFSET(0xAABAA10)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_72A7CD49F8E09611_OFFSET UNITYSDK_OFFSET(0xAABFB10)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_7641951E8337159E_OFFSET UNITYSDK_OFFSET(0xAAC32C0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_7C6F016D2D77B037_OFFSET UNITYSDK_OFFSET(0xAAC0D70)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_932B91D24BB04156_OFFSET UNITYSDK_OFFSET(0xAAC3580)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xAAC3130)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_958CA3E3D2C57BAA_OFFSET UNITYSDK_OFFSET(0xAAC03D0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_9B19043D8462B3E5_OFFSET UNITYSDK_OFFSET(0xAABF920)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_9C405B3AD04BC56B_OFFSET UNITYSDK_OFFSET(0xAABA4F0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_9E9904F55E8DE4E4_OFFSET UNITYSDK_OFFSET(0xAABA8E0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_A087E300DD2D3DE5_OFFSET UNITYSDK_OFFSET(0xAAC4DF0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0xAAC3F60)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_B31940FB2128D653_OFFSET UNITYSDK_OFFSET(0xAABA270)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_B5E22388974E906E_OFFSET UNITYSDK_OFFSET(0xAABF110)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0xAAC02F0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_BE892E937D48E7C2_OFFSET UNITYSDK_OFFSET(0xAABA870)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_C48C857453ECAFF7_OFFSET UNITYSDK_OFFSET(0xAABA400)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAAC12B0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_CE0DC006D21BE898_OFFSET UNITYSDK_OFFSET(0xAAC3820)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_DDE5C3833280C5F2_OFFSET UNITYSDK_OFFSET(0xAAC0090)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_DDEBCDCDB6097768_OFFSET UNITYSDK_OFFSET(0xAAC0E50)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0xAAC0250)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_EAB78F1B45066989_OFFSET UNITYSDK_OFFSET(0xAAC07C0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_EB53E884371F2DD4_OFFSET UNITYSDK_OFFSET(0xAAC1E50)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0xAABAA80)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_EEE02DEC95431962_OFFSET UNITYSDK_OFFSET(0xAAC0F10)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_F15EBD88E7E0FA35_OFFSET UNITYSDK_OFFSET(0xAABB390)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_F2467244EC8CC05A_OFFSET UNITYSDK_OFFSET(0xAABA300)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0xAABFC90)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_F8E6145ED0829339_OFFSET UNITYSDK_OFFSET(0xAAC3180)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_F9A09DBD28C2DDAC_OFFSET UNITYSDK_OFFSET(0xAAC2AC0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_F9EC5F6D1485A575_OFFSET UNITYSDK_OFFSET(0xAAC12F0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_FF69C3BC5505054C_OFFSET UNITYSDK_OFFSET(0xAABEDA0)
#define CLASS_2_6A75EA4A76790B33__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAC55B0)
#define CLASS_2_6A75EA4A76790B33__CTOR_OFFSET UNITYSDK_OFFSET(0xAAC5090)

inline static constexpr unsigned int Class_2_6A75EA4A76790B33_TypeDefinitionIndex = 46606;

class Class_2_6A75EA4A76790B33 : public ::Class_1_455124A410922D9D<::Class_2_6A75EA4A76790B33*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::ValueTuple_2<::System::String*, ::System::String*>>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::ValueTuple_2<::System::String*, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A75EA4A76790B33_TypeDefinitionIndex)->GetStaticField(0x3400);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A75EA4A76790B33_TypeDefinitionIndex)->GetStaticField(0x3408);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A75EA4A76790B33_TypeDefinitionIndex)->GetStaticField(0x3410);
	}
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A75EA4A76790B33_TypeDefinitionIndex)->GetStaticField(0x24B0);
	}
	::RPG::Client::LRUCache_2<::System::String*, ::System::Tuple_2<::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*>*>* Field_2_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*>* Field_2_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Field_2_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::String*>* Field_2_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_8; // 0x30
	::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::Int32>* Field_2_9; // 0x38
	::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>* Field_2_10; // 0x40
	::Class_1_8C728FF5E0D9FC84* Field_2_11; // 0x48
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_12; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::String*>*>* Field_2_13; // 0x58
	::System::Collections::Generic::List_1<::Class_1_44E98D8B63E395F0*>* Field_2_14; // 0x60
	::Class_1_FE03A3C217EBE85C<::System::String*, ::System::Int32>* Field_2_15; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* Field_2_16; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::String*>* Field_2_17; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_18; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33__CCTOR_OFFSET))();
	}

	::Class_1_8C728FF5E0D9FC84* Method_2_24748FC20F375725()
	{
		return ((::Class_1_8C728FF5E0D9FC84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_B31940FB2128D653()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_B31940FB2128D653_OFFSET))(this);
	}

	::System::Void Method_2_F2467244EC8CC05A(::RPG::GameCore::EnviromentControlPriority a1, ::System::String* a2, ::Class_1_EAF7984A8FAD6BE4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::String*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_F2467244EC8CC05A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9E9904F55E8DE4E4(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_9E9904F55E8DE4E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7261355B8F7C0386(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_7261355B8F7C0386_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9C405B3AD04BC56B(::System::String* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_9C405B3AD04BC56B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BE892E937D48E7C2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_BE892E937D48E7C2_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_EC03BF13D7F40502_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_70C9B102CEA5DBB2(::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_70C9B102CEA5DBB2_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_F15EBD88E7E0FA35(::System::String* a1, ::EnviromentSystemV2Space::EnvProfileV2* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_F15EBD88E7E0FA35_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_16AD6477D6792656(::System::String* a1, ::EnviromentSystemV2Space::EnvProfileV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_16AD6477D6792656_OFFSET))(this, a1, a2);
	}

	::RPG::Client::IAssetOperation* Method_2_559BC39C2D7E6187(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_559BC39C2D7E6187_OFFSET))(this, a1, a2);
	}

	::EnviromentSystemV2Space::EnvProfileV2* Method_2_0D61B878F1A21897(::System::String* a1, ::System::Boolean a2)
	{
		return ((::EnviromentSystemV2Space::EnvProfileV2*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_0D61B878F1A21897_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5AD0E9E26907DC8D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_5AD0E9E26907DC8D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::String*>* Method_2_FF69C3BC5505054C()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_FF69C3BC5505054C_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* Method_2_37FF57DC5E531832()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_37FF57DC5E531832_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_2_3265AEC5435DDEBE()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_3265AEC5435DDEBE_OFFSET))(this);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_2_B5E22388974E906E(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_B5E22388974E906E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3D645CB6A14BF31F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_3D645CB6A14BF31F_OFFSET))(this, a1);
	}

	::System::Void Method_2_4404A5BA7570FF5E(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_4404A5BA7570FF5E_OFFSET))(this, a1);
	}

	::System::String* Method_2_9B19043D8462B3E5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_9B19043D8462B3E5_OFFSET))(this);
	}

	::System::String* Method_2_503E0E56081CDC57(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_503E0E56081CDC57_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* Method_2_72A7CD49F8E09611(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_72A7CD49F8E09611_OFFSET))(this, a1);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_EA7C9571288E1295()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_EA7C9571288E1295_OFFSET))(this);
	}

	::System::Void Method_2_2CAADC051AEB67F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_2CAADC051AEB67F9_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Method_2_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_BAE31916328829B3_OFFSET))(this);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDE5C3833280C5F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_DDE5C3833280C5F2_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_331* Method_2_958CA3E3D2C57BAA(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::Class_0_16E4307DCC419505_336* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority, ::Class_0_16E4307DCC419505_336*, ::EnviromentSystemV2Space::OutputType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_958CA3E3D2C57BAA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_331* Method_2_5F0110E23404ABD2(::System::String* a1, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a2, ::RPG::GameCore::EnviromentControlPriority a3, ::EnviromentSystemV2Space::OutputType a4, ::Class_0_16E4307DCC419505_336* a5, ::System::Action* a6)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*, ::RPG::GameCore::EnviromentControlPriority, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_336*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_5F0110E23404ABD2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_0_16E4307DCC419505_331* Method_2_EAB78F1B45066989(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_336* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5, ::System::Boolean a6)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean, ::Class_0_16E4307DCC419505_336*, ::EnviromentSystemV2Space::OutputType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_EAB78F1B45066989_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_47EFDF992485ECD9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_47EFDF992485ECD9_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDEBCDCDB6097768(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_DDEBCDCDB6097768_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4A5B7F5AD941470C(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_4A5B7F5AD941470C_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_331* Method_2_7C6F016D2D77B037(::Class_0_16E4307DCC419505_336* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::EnviromentSystemV2Space::OutputType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_7C6F016D2D77B037_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_EEE02DEC95431962(::System::String* a1, ::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_EEE02DEC95431962_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_331* Method_2_F9EC5F6D1485A575(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_F9EC5F6D1485A575_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_42D6E69C89AE0FFA(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_42D6E69C89AE0FFA_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_331* Method_2_F9A09DBD28C2DDAC(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_F9A09DBD28C2DDAC_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_331* Method_2_EB53E884371F2DD4(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_331*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_EB53E884371F2DD4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_44E98D8B63E395F0*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_44E98D8B63E395F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_44E98D8B63E395F0* Method_2_F8E6145ED0829339(::System::String* a1)
	{
		return ((::Class_1_44E98D8B63E395F0*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_F8E6145ED0829339_OFFSET))(this, a1);
	}

	::System::Void Method_2_7641951E8337159E(::System::String* a1, ::Class_1_44E98D8B63E395F0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_44E98D8B63E395F0*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_7641951E8337159E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_932B91D24BB04156(::System::String* a1, ::Class_1_44E98D8B63E395F0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_44E98D8B63E395F0*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_932B91D24BB04156_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_33AC5C72E0EF495B(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_33AC5C72E0EF495B_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C48C857453ECAFF7(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_C48C857453ECAFF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE0DC006D21BE898(::RPG::GameCore::EnviromentControlPriority a1, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_CE0DC006D21BE898_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Int32 Method_2_283508AC3D988C69(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_283508AC3D988C69_OFFSET))(this, a1);
	}

	::System::String* Method_2_A087E300DD2D3DE5(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::String*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_A087E300DD2D3DE5_OFFSET))(this, a1);
	}
};
