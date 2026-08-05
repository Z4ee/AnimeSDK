#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37.h"

class Class_2_208CC9941471731A_1022;
namespace MoleMole { class ConfigNewbie_NewbieGroup; }
namespace MoleMole { class ConfigNewbie_NewbieStep; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UINewbiePopWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_2_00AA8DEB4906FE64_METHOD_2_05DA483D48EF9A48_1_OFFSET UNITYSDK_OFFSET(0x135E0A50)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_05DA483D48EF9A48_OFFSET UNITYSDK_OFFSET(0x135DB650)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_088C875BBADB7C63_OFFSET UNITYSDK_OFFSET(0x135D9070)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_099D6A5E8A82B69F_OFFSET UNITYSDK_OFFSET(0x135DC1F0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_0BF63477FF35C0E1_OFFSET UNITYSDK_OFFSET(0x135DF440)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_10DA236D7F5B18F9_OFFSET UNITYSDK_OFFSET(0x135D8EB0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_160341DB9A01E525_OFFSET UNITYSDK_OFFSET(0x135DE0D0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_1ADC5E4C222F6999_OFFSET UNITYSDK_OFFSET(0x135DB3B0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_1C80B3F93E449177_OFFSET UNITYSDK_OFFSET(0x135DB720)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x135DB5F0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_2AA97C04E9588384_OFFSET UNITYSDK_OFFSET(0x135DD2B0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_304E1F814D6DE3F4_OFFSET UNITYSDK_OFFSET(0x135D9920)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_3533927922F32390_OFFSET UNITYSDK_OFFSET(0x135DE690)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_391FC88C022178EF_OFFSET UNITYSDK_OFFSET(0x135DF260)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_3932FF1A46D6B74B_OFFSET UNITYSDK_OFFSET(0x135D9C20)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_3B9C5E09D0519937_OFFSET UNITYSDK_OFFSET(0x135DD9C0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x135D88B0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_4DF701F4AA395DAE_OFFSET UNITYSDK_OFFSET(0x135DFB10)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_4F8969A8A9AE4ED3_OFFSET UNITYSDK_OFFSET(0x135DB0E0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_52E456B60C3C2D81_OFFSET UNITYSDK_OFFSET(0x135E0860)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_5F31F925103D7A52_OFFSET UNITYSDK_OFFSET(0x135DF0F0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x135DA0D0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_69ACE982C3BD50BB_OFFSET UNITYSDK_OFFSET(0x135DC460)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_69D195E959716BFC_OFFSET UNITYSDK_OFFSET(0x135DC750)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_6C08DBBFEA758101_OFFSET UNITYSDK_OFFSET(0x135E06D0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x135D8600)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_70DF42255A8EE1AD_OFFSET UNITYSDK_OFFSET(0x135E0160)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_742DD6055A698FD8_OFFSET UNITYSDK_OFFSET(0x135DF920)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_7FABE1C1D06A7279_OFFSET UNITYSDK_OFFSET(0x135DC9A0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_86EBB25BE32B4451_OFFSET UNITYSDK_OFFSET(0x135D92D0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_8C939FF9C7E0C448_OFFSET UNITYSDK_OFFSET(0x135DBD40)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_8DE3B9C25631CF42_OFFSET UNITYSDK_OFFSET(0x135DD490)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_91E12F3559DF024B_OFFSET UNITYSDK_OFFSET(0x135D99E0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_93DE8C792406809A_OFFSET UNITYSDK_OFFSET(0x135E0BC0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x135DB340)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_969EC24E083C85B5_OFFSET UNITYSDK_OFFSET(0x135DD640)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x135E0B20)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_9B1FBE43FD1968DB_OFFSET UNITYSDK_OFFSET(0x135DEC90)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_9C32243954B9532F_OFFSET UNITYSDK_OFFSET(0x135DE900)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_9EAE1A47132304F8_OFFSET UNITYSDK_OFFSET(0x135DF770)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_A690678E534E1AF3_OFFSET UNITYSDK_OFFSET(0x135DCCE0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x135DABF0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_A9805CA46D68009E_OFFSET UNITYSDK_OFFSET(0x135DDF60)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_AF4E83C3893A9F6A_OFFSET UNITYSDK_OFFSET(0x135E1030)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_BA51C07CF2D1E921_OFFSET UNITYSDK_OFFSET(0x135DFF50)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_BFD016A24BFEA3E5_OFFSET UNITYSDK_OFFSET(0x135DAA40)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_C25FAAC34AF73232_OFFSET UNITYSDK_OFFSET(0x135DDC60)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x135E0B30)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x135DEC00)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_CAAE4CA499A3E35D_OFFSET UNITYSDK_OFFSET(0x135DF9D0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x135D8310)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_D8C2E46698ED8D0B_OFFSET UNITYSDK_OFFSET(0x135DC840)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_DBBEB514B9CCAA6D_OFFSET UNITYSDK_OFFSET(0x135DBB70)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_EBFF523C6303C922_OFFSET UNITYSDK_OFFSET(0x135E1090)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_ED46731285C868B8_OFFSET UNITYSDK_OFFSET(0x135DCE90)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_1_OFFSET UNITYSDK_OFFSET(0x135DEA70)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_2_OFFSET UNITYSDK_OFFSET(0x135DFDE0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x135DE520)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_F19BA6C9247B9CB9_OFFSET UNITYSDK_OFFSET(0x135DEF20)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x135DAD80)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_FCA11275BFA57619_OFFSET UNITYSDK_OFFSET(0x135DF3E0)
#define CLASS_2_00AA8DEB4906FE64__CCTOR_OFFSET UNITYSDK_OFFSET(0x135D8EA0)
#define CLASS_2_00AA8DEB4906FE64__CTOR_OFFSET UNITYSDK_OFFSET(0x135D8C40)

inline static constexpr unsigned int Class_2_00AA8DEB4906FE64_TypeDefinitionIndex = 44301;

class Class_2_00AA8DEB4906FE64 : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00AA8DEB4906FE64_TypeDefinitionIndex)->GetStaticField(0xCF00);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigNewbie_NewbieGroup*>* Field_2_11; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_B136CFD8FB6B8F37>* Field_2_9; // 0x20
	::System::Collections::Generic::List_1<::Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30>* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_4; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_10; // 0x40
	::MoleMole::UINewbiePopWindowController* Field_2_1; // 0x48
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_0; // 0x50
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1022*>* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_2_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_2_10DA236D7F5B18F9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_10DA236D7F5B18F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_86EBB25BE32B4451(::Class_1_27F786FF2A30778C<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27F786FF2A30778C<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_86EBB25BE32B4451_OFFSET))(this, a1);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	static ::MoleMole::ConfigNewbie_NewbieGroup* Method_2_BFD016A24BFEA3E5()
	{
		return ((::MoleMole::ConfigNewbie_NewbieGroup*(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_BFD016A24BFEA3E5_OFFSET))();
	}

	::System::Void Method_2_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	static ::System::Boolean Method_2_1ADC5E4C222F6999()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_1ADC5E4C222F6999_OFFSET))();
	}

	::System::Void Method_2_05DA483D48EF9A48(::System::Int32 a1, ::MoleMole::UIBaseController* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_05DA483D48EF9A48_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_1C80B3F93E449177(::Class_2_208CC9941471731A_1022* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1022*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_1C80B3F93E449177_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DBBEB514B9CCAA6D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_DBBEB514B9CCAA6D_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_69ACE982C3BD50BB(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_69ACE982C3BD50BB_OFFSET))(a1);
	}

	::System::Boolean Method_2_69D195E959716BFC(::Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_69D195E959716BFC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8C2E46698ED8D0B(::System::Collections::Generic::HashSet_1<::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_D8C2E46698ED8D0B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7FABE1C1D06A7279(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_7FABE1C1D06A7279_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A690678E534E1AF3(::System::Int32 a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_A690678E534E1AF3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_ED46731285C868B8(::Class_2_208CC9941471731A_1022* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1022*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_ED46731285C868B8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::MoleMole::ConfigNewbie_NewbieGroup* Method_2_969EC24E083C85B5(::System::Int32 a1)
	{
		return ((::MoleMole::ConfigNewbie_NewbieGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_969EC24E083C85B5_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3B9C5E09D0519937(::System::Int32 a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_3B9C5E09D0519937_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_91E12F3559DF024B(::Class_2_208CC9941471731A_1022* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1022*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_91E12F3559DF024B_OFFSET))(this, a1);
	}

	::System::Void Method_2_099D6A5E8A82B69F(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_099D6A5E8A82B69F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A9805CA46D68009E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_A9805CA46D68009E_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_OFFSET))();
	}

	static ::System::Boolean Method_2_3533927922F32390(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_3533927922F32390_OFFSET))(a1);
	}

	::System::Void Method_2_9C32243954B9532F(::MoleMole::UINewbiePopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_9C32243954B9532F_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_9B1FBE43FD1968DB(::Class_1_27F786FF2A30778C<::System::Int32>* a1, ::Class_1_27F786FF2A30778C<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27F786FF2A30778C<::System::Int32>*, ::Class_1_27F786FF2A30778C<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_9B1FBE43FD1968DB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F19BA6C9247B9CB9(::Enum_3_DBF2701137F18AA6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_F19BA6C9247B9CB9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5F31F925103D7A52(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_5F31F925103D7A52_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_304E1F814D6DE3F4(::Class_2_208CC9941471731A_1022* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1022*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_304E1F814D6DE3F4_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_391FC88C022178EF(::MoleMole::UIGeneralNewsBubbleRowWidgetController* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_391FC88C022178EF_OFFSET))(a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_160341DB9A01E525(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_160341DB9A01E525_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCA11275BFA57619(::System::String* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_FCA11275BFA57619_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0BF63477FF35C0E1(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_0BF63477FF35C0E1_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_9EAE1A47132304F8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_9EAE1A47132304F8_OFFSET))();
	}

	::System::Boolean Method_2_2AA97C04E9588384(::Class_2_208CC9941471731A_1022* a1, ::Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1022*, ::Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30&))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_2AA97C04E9588384_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_742DD6055A698FD8(::System::Int32 a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_742DD6055A698FD8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4F8969A8A9AE4ED3(::Class_2_208CC9941471731A_1022* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1022*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_4F8969A8A9AE4ED3_OFFSET))(this, a1);
	}

	::System::Void Method_2_CAAE4CA499A3E35D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_CAAE4CA499A3E35D_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_EDFD49C942C75D6C_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_2_OFFSET))();
	}

	static ::MoleMole::ConfigNewbie_NewbieStep* Method_2_BA51C07CF2D1E921()
	{
		return ((::MoleMole::ConfigNewbie_NewbieStep*(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_BA51C07CF2D1E921_OFFSET))();
	}

	::System::Boolean Method_2_088C875BBADB7C63(::System::String* a1, ::MoleMole::UIBaseController* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_088C875BBADB7C63_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3932FF1A46D6B74B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_3932FF1A46D6B74B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C939FF9C7E0C448(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_8C939FF9C7E0C448_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DF701F4AA395DAE(::System::Int32 a1, ::MoleMole::UIBaseController* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_4DF701F4AA395DAE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_70DF42255A8EE1AD(::System::String* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1022*>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1022*>*&))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_70DF42255A8EE1AD_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_6C08DBBFEA758101(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_6C08DBBFEA758101_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8DE3B9C25631CF42(::Class_2_208CC9941471731A_1022* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1022*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_8DE3B9C25631CF42_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	static ::System::Void Method_2_52E456B60C3C2D81(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_52E456B60C3C2D81_OFFSET))(a1);
	}

	::System::Void Method_2_05DA483D48EF9A48_1(::System::Int32 a1, ::MoleMole::UIBaseController* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_05DA483D48EF9A48_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1022*>* Method_2_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1022*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_977A5C8234F34C98_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_93DE8C792406809A(::System::Collections::Generic::IList_1<::System::Int32>* a1, ::MoleMole::UIBaseController* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_93DE8C792406809A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_AF4E83C3893A9F6A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_AF4E83C3893A9F6A_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_EBFF523C6303C922(::Enum_3_DBF2701137F18AA6 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_EBFF523C6303C922_OFFSET))(a1);
	}

	::System::Void Method_2_C25FAAC34AF73232(::Class_2_208CC9941471731A_1022* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1022*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_C25FAAC34AF73232_OFFSET))(this, a1);
	}
};
