#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_455124A410922D9D.h"
#include "unitysdk/Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_310;
class Class_0_16E4307DCC419505_315;
class Class_1_8C728FF5E0D9FC84;
class Class_1_C662E2F2A633F51D;
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

#define CLASS_2_6A75EA4A76790B33_METHOD_2_0150B3807DB2CAF8_OFFSET UNITYSDK_OFFSET(0x8DA29F0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_05ED38B9AA67768F_OFFSET UNITYSDK_OFFSET(0x8DA92E0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_08EED1EF8C8D9913_OFFSET UNITYSDK_OFFSET(0x8DA2C00)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_0D61B878F1A21897_OFFSET UNITYSDK_OFFSET(0x8DA6E00)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_19ED9DE4E1D12CB7_OFFSET UNITYSDK_OFFSET(0x8DAB5F0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x8DA2490)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_283508AC3D988C69_OFFSET UNITYSDK_OFFSET(0x8DAD180)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x8DA8150)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x8DA85A0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_2B4FB53FBE6ED250_OFFSET UNITYSDK_OFFSET(0x8DA5950)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_3138C7AA3F0F23C3_OFFSET UNITYSDK_OFFSET(0x8DA93A0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_31F672EF6F9ED729_OFFSET UNITYSDK_OFFSET(0x8DA24A0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_3265AEC5435DDEBE_OFFSET UNITYSDK_OFFSET(0x8DA7440)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_37FF57DC5E531832_OFFSET UNITYSDK_OFFSET(0x8DA7400)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x8DA8270)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_4404A5BA7570FF5E_OFFSET UNITYSDK_OFFSET(0x8DA7C80)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_473FD38FB2F2974A_OFFSET UNITYSDK_OFFSET(0x8DA38A0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x8DAB590)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_4A5B7F5AD941470C_OFFSET UNITYSDK_OFFSET(0x8DA9150)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x8DA8830)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_503E0E56081CDC57_OFFSET UNITYSDK_OFFSET(0x8DA7ED0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_559BC39C2D7E6187_OFFSET UNITYSDK_OFFSET(0x8DA6D20)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_5F0110E23404ABD2_OFFSET UNITYSDK_OFFSET(0x8DA8B30)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_63F05BE7B3086BB2_OFFSET UNITYSDK_OFFSET(0x8DA8EC0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_69E86F362D9BFD8B_OFFSET UNITYSDK_OFFSET(0x8DA2960)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_6DD11CBFF7EBF414_OFFSET UNITYSDK_OFFSET(0x8DA70C0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_72A7CD49F8E09611_OFFSET UNITYSDK_OFFSET(0x8DA7FA0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_7C6F016D2D77B037_OFFSET UNITYSDK_OFFSET(0x8DA9200)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_7F5E55A695CACE5D_OFFSET UNITYSDK_OFFSET(0x8DAB720)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x8DA7480)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0x8DA8780)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_928CB4D70C21FDF4_OFFSET UNITYSDK_OFFSET(0x8DA7AB0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_92EE57C38B49C194_OFFSET UNITYSDK_OFFSET(0x8DA2AC0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_932B91D24BB04156_OFFSET UNITYSDK_OFFSET(0x8DAB990)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_93CEBA692EDA45D2_OFFSET UNITYSDK_OFFSET(0x8DAD240)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_955CDD953CC09827_OFFSET UNITYSDK_OFFSET(0x8DA2560)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8DAB5A0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_958CA3E3D2C57BAA_OFFSET UNITYSDK_OFFSET(0x8DA8900)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_9B19043D8462B3E5_OFFSET UNITYSDK_OFFSET(0x8DA7D90)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_9C844AB9164FA35A_OFFSET UNITYSDK_OFFSET(0x8DA87D0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x8DAC380)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_B5E22388974E906E_OFFSET UNITYSDK_OFFSET(0x8DA7750)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x8DABC60)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_BA8FE0A25BA2274A_OFFSET UNITYSDK_OFFSET(0x8DA2610)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_BAE31916328829B3_OFFSET UNITYSDK_OFFSET(0x8DA8820)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_BF23D9BF5D8B87BA_OFFSET UNITYSDK_OFFSET(0x8DABBE0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_C48C857453ECAFF7_OFFSET UNITYSDK_OFFSET(0x8D9B3E0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8DA9750)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_E4086BD9021203D7_OFFSET UNITYSDK_OFFSET(0x8DAA8B0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_E80CC47E7F497487_OFFSET UNITYSDK_OFFSET(0x8DABB50)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_EAB78F1B45066989_OFFSET UNITYSDK_OFFSET(0x8DA8CF0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_EB53E884371F2DD4_OFFSET UNITYSDK_OFFSET(0x8DAA210)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0x8DA2B30)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_F9A09DBD28C2DDAC_OFFSET UNITYSDK_OFFSET(0x8DAAEE0)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_F9EC5F6D1485A575_OFFSET UNITYSDK_OFFSET(0x8DA9790)
#define CLASS_2_6A75EA4A76790B33_METHOD_2_FF69C3BC5505054C_OFFSET UNITYSDK_OFFSET(0x8DA73C0)
#define CLASS_2_6A75EA4A76790B33__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DAD9C0)
#define CLASS_2_6A75EA4A76790B33__CTOR_OFFSET UNITYSDK_OFFSET(0x8DAD4A0)

inline static constexpr unsigned int Class_2_6A75EA4A76790B33_TypeDefinitionIndex = 40114;

class Class_2_6A75EA4A76790B33 : public ::Class_1_455124A410922D9D<::Class_2_6A75EA4A76790B33*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_2_16()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A75EA4A76790B33_TypeDefinitionIndex)->GetStaticField(0x155B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_2_17()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A75EA4A76790B33_TypeDefinitionIndex)->GetStaticField(0x155B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::ValueTuple_2<::System::String*, ::System::String*>>** StaticGet_Field_2_15()
	{
		return (::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::ValueTuple_2<::System::String*, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A75EA4A76790B33_TypeDefinitionIndex)->GetStaticField(0x155C0);
	}
	static ::System::Boolean* StaticGet_Field_2_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A75EA4A76790B33_TypeDefinitionIndex)->GetStaticField(0x6450);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_3; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_2_4; // 0x18
	::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_10; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnviromentControlPriority, ::System::String*>* Field_2_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::String*>* Field_2_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::Int32>* Field_2_6; // 0x40
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_9; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Field_2_11; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::String*>*>* Field_2_12; // 0x58
	::Class_1_8C728FF5E0D9FC84* Field_2_0; // 0x60
	::Class_1_FE03A3C217EBE85C<::System::String*, ::System::Int32>* Field_2_14; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*>* Field_2_8; // 0x70
	::System::Collections::Generic::List_1<::Class_1_C662E2F2A633F51D*>* Field_2_13; // 0x78
	::RPG::Client::LRUCache_2<::System::String*, ::System::Tuple_2<::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*>*>* Field_2_7; // 0x80

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

	::System::Collections::Generic::List_1<::System::String*>* Method_2_31F672EF6F9ED729()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_31F672EF6F9ED729_OFFSET))(this);
	}

	::System::Void Method_2_955CDD953CC09827(::RPG::GameCore::EnviromentControlPriority a1, ::System::String* a2, ::Class_1_EAF7984A8FAD6BE4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::String*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_955CDD953CC09827_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0150B3807DB2CAF8(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_0150B3807DB2CAF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_92EE57C38B49C194(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_92EE57C38B49C194_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BA8FE0A25BA2274A(::System::String* a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_BA8FE0A25BA2274A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_69E86F362D9BFD8B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_69E86F362D9BFD8B_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_EC03BF13D7F40502_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_08EED1EF8C8D9913(::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Editor::EnvironmentSystemV2Editor::EnvEditorBlock*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_08EED1EF8C8D9913_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_473FD38FB2F2974A(::System::String* a1, ::EnviromentSystemV2Space::EnvProfileV2* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_473FD38FB2F2974A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2B4FB53FBE6ED250(::System::String* a1, ::EnviromentSystemV2Space::EnvProfileV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_2B4FB53FBE6ED250_OFFSET))(this, a1, a2);
	}

	::RPG::Client::IAssetOperation* Method_2_559BC39C2D7E6187(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_559BC39C2D7E6187_OFFSET))(this, a1, a2);
	}

	::EnviromentSystemV2Space::EnvProfileV2* Method_2_0D61B878F1A21897(::System::String* a1, ::System::Boolean a2)
	{
		return ((::EnviromentSystemV2Space::EnvProfileV2*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_0D61B878F1A21897_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6DD11CBFF7EBF414(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_6DD11CBFF7EBF414_OFFSET))(this, a1);
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

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_B5E22388974E906E(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_B5E22388974E906E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_928CB4D70C21FDF4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_928CB4D70C21FDF4_OFFSET))(this, a1);
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

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_91A773A85E497E9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_91A773A85E497E9E_OFFSET))(this);
	}

	::System::Void Method_2_9C844AB9164FA35A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_9C844AB9164FA35A_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>* Method_2_BAE31916328829B3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EAF7984A8FAD6BE4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_BAE31916328829B3_OFFSET))(this);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_28C834B59E1D0120_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_310* Method_2_958CA3E3D2C57BAA(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::Class_0_16E4307DCC419505_315* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5)
	{
		return ((::Class_0_16E4307DCC419505_310*(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority, ::Class_0_16E4307DCC419505_315*, ::EnviromentSystemV2Space::OutputType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_958CA3E3D2C57BAA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_310* Method_2_5F0110E23404ABD2(::System::String* a1, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a2, ::RPG::GameCore::EnviromentControlPriority a3, ::EnviromentSystemV2Space::OutputType a4, ::Class_0_16E4307DCC419505_315* a5, ::System::Action* a6)
	{
		return ((::Class_0_16E4307DCC419505_310*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*, ::RPG::GameCore::EnviromentControlPriority, ::EnviromentSystemV2Space::OutputType, ::Class_0_16E4307DCC419505_315*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_5F0110E23404ABD2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_0_16E4307DCC419505_310* Method_2_EAB78F1B45066989(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_315* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5, ::System::Boolean a6)
	{
		return ((::Class_0_16E4307DCC419505_310*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean, ::Class_0_16E4307DCC419505_315*, ::EnviromentSystemV2Space::OutputType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_EAB78F1B45066989_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_63F05BE7B3086BB2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_63F05BE7B3086BB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_05ED38B9AA67768F(::System::String* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_05ED38B9AA67768F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4A5B7F5AD941470C(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_4A5B7F5AD941470C_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_310* Method_2_7C6F016D2D77B037(::Class_0_16E4307DCC419505_315* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::Class_0_16E4307DCC419505_310*(*)(::PVOID, ::Class_0_16E4307DCC419505_315*, ::EnviromentSystemV2Space::OutputType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_7C6F016D2D77B037_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3138C7AA3F0F23C3(::System::String* a1, ::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_3138C7AA3F0F23C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_310* Method_2_F9EC5F6D1485A575(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_0_16E4307DCC419505_310*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_F9EC5F6D1485A575_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_E4086BD9021203D7(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_E4086BD9021203D7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_310* Method_2_F9A09DBD28C2DDAC(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_0_16E4307DCC419505_310*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_F9A09DBD28C2DDAC_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_310* Method_2_EB53E884371F2DD4(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_310*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_EB53E884371F2DD4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_C662E2F2A633F51D*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C662E2F2A633F51D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_C662E2F2A633F51D* Method_2_19ED9DE4E1D12CB7(::System::String* a1)
	{
		return ((::Class_1_C662E2F2A633F51D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_19ED9DE4E1D12CB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F5E55A695CACE5D(::System::String* a1, ::Class_1_C662E2F2A633F51D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_C662E2F2A633F51D*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_7F5E55A695CACE5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_932B91D24BB04156(::System::String* a1, ::Class_1_C662E2F2A633F51D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_C662E2F2A633F51D*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_932B91D24BB04156_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_E80CC47E7F497487(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_E80CC47E7F497487_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C48C857453ECAFF7(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_C48C857453ECAFF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF23D9BF5D8B87BA(::RPG::GameCore::EnviromentControlPriority a1, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_BF23D9BF5D8B87BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Int32 Method_2_283508AC3D988C69(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_283508AC3D988C69_OFFSET))(this, a1);
	}

	::System::String* Method_2_93CEBA692EDA45D2(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::String*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33_METHOD_2_93CEBA692EDA45D2_OFFSET))(this, a1);
	}
};
