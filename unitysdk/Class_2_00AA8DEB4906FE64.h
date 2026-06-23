#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37_2.h"

class Class_2_208CC9941471731A_877;
namespace MoleMole { class ConfigNewbie_NewbieGroup; }
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
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_2_00AA8DEB4906FE64_METHOD_2_05DA483D48EF9A48_1_OFFSET UNITYSDK_OFFSET(0x149530B0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_05DA483D48EF9A48_OFFSET UNITYSDK_OFFSET(0x14951850)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_088C875BBADB7C63_OFFSET UNITYSDK_OFFSET(0x1494D8C0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_099D6A5E8A82B69F_OFFSET UNITYSDK_OFFSET(0x14952A80)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_10DA236D7F5B18F9_OFFSET UNITYSDK_OFFSET(0x14950870)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_160341DB9A01E525_OFFSET UNITYSDK_OFFSET(0x1494CF60)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_1ADC5E4C222F6999_OFFSET UNITYSDK_OFFSET(0x14953C60)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_1C80B3F93E449177_OFFSET UNITYSDK_OFFSET(0x1494E090)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1494D3B0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_2AA97C04E9588384_OFFSET UNITYSDK_OFFSET(0x1494F000)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x14951DE0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_304E1F814D6DE3F4_OFFSET UNITYSDK_OFFSET(0x14950320)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_3533927922F32390_OFFSET UNITYSDK_OFFSET(0x14951430)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_391FC88C022178EF_OFFSET UNITYSDK_OFFSET(0x1494F1E0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_3B9C5E09D0519937_OFFSET UNITYSDK_OFFSET(0x14953840)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x1494C620)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_4DF701F4AA395DAE_OFFSET UNITYSDK_OFFSET(0x1494D540)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_52E456B60C3C2D81_OFFSET UNITYSDK_OFFSET(0x14952CF0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_5F31F925103D7A52_OFFSET UNITYSDK_OFFSET(0x14950F70)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_6694DE53B26FBE31_OFFSET UNITYSDK_OFFSET(0x149503E0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_69ACE982C3BD50BB_OFFSET UNITYSDK_OFFSET(0x14954990)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_6C08DBBFEA758101_OFFSET UNITYSDK_OFFSET(0x149512B0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x1494C380)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_742DD6055A698FD8_OFFSET UNITYSDK_OFFSET(0x1494D800)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_7FABE1C1D06A7279_OFFSET UNITYSDK_OFFSET(0x14952740)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_86EBB25BE32B4451_OFFSET UNITYSDK_OFFSET(0x1494FCD0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_8DE3B9C25631CF42_OFFSET UNITYSDK_OFFSET(0x14953EA0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_91E12F3559DF024B_OFFSET UNITYSDK_OFFSET(0x1494F5D0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_93DE8C792406809A_OFFSET UNITYSDK_OFFSET(0x14954040)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_94255A0D482F4C9D_OFFSET UNITYSDK_OFFSET(0x1494EA40)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1494E670)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_969EC24E083C85B5_OFFSET UNITYSDK_OFFSET(0x14954610)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x1494D3A0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_992D5FB404042522_OFFSET UNITYSDK_OFFSET(0x1494CC20)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_9B1FBE43FD1968DB_OFFSET UNITYSDK_OFFSET(0x1494F360)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_9C32243954B9532F_OFFSET UNITYSDK_OFFSET(0x14951140)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_9EAE1A47132304F8_OFFSET UNITYSDK_OFFSET(0x14951C30)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_A60D9D779F74E75E_OFFSET UNITYSDK_OFFSET(0x14950A30)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_A690678E534E1AF3_OFFSET UNITYSDK_OFFSET(0x149516A0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x1494E6E0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_A9805CA46D68009E_OFFSET UNITYSDK_OFFSET(0x149536D0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_AC4DDF9BF4BFC2C9_OFFSET UNITYSDK_OFFSET(0x14951920)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_B82DA55328B0AE0E_OFFSET UNITYSDK_OFFSET(0x1494DB20)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_BA07C7FDDAAF238B_OFFSET UNITYSDK_OFFSET(0x1494F810)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x14953180)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_BFD016A24BFEA3E5_OFFSET UNITYSDK_OFFSET(0x1494EE50)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_C25FAAC34AF73232_OFFSET UNITYSDK_OFFSET(0x14950C80)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14953BD0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x149534D0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_CAAE4CA499A3E35D_OFFSET UNITYSDK_OFFSET(0x1494D410)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x1494C090)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_D8C2E46698ED8D0B_OFFSET UNITYSDK_OFFSET(0x14951980)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_DBBEB514B9CCAA6D_OFFSET UNITYSDK_OFFSET(0x14952EE0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_EABA0F7FDCD28A1D_OFFSET UNITYSDK_OFFSET(0x14953AE0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_EBFF523C6303C922_OFFSET UNITYSDK_OFFSET(0x14951AE0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_1_OFFSET UNITYSDK_OFFSET(0x14953560)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_2_OFFSET UNITYSDK_OFFSET(0x149544A0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1494E4E0)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_F19BA6C9247B9CB9_OFFSET UNITYSDK_OFFSET(0x1494E870)
#define CLASS_2_00AA8DEB4906FE64_METHOD_2_FCA11275BFA57619_OFFSET UNITYSDK_OFFSET(0x149510E0)
#define CLASS_2_00AA8DEB4906FE64__CCTOR_OFFSET UNITYSDK_OFFSET(0x1494CC10)
#define CLASS_2_00AA8DEB4906FE64__CTOR_OFFSET UNITYSDK_OFFSET(0x1494C9B0)

inline static constexpr unsigned int Class_2_00AA8DEB4906FE64_TypeDefinitionIndex = 84899;

class Class_2_00AA8DEB4906FE64 : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_00AA8DEB4906FE64_TypeDefinitionIndex)->GetStaticField(0xCEB0);
	}
	::System::Collections::Generic::List_1<::Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30>* Field_2_5; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_877*>* Field_2_4; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_8; // 0x30
	::MoleMole::UINewbiePopWindowController* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_6; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigNewbie_NewbieGroup*>* Field_2_7; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_B136CFD8FB6B8F37_2>* Field_2_9; // 0x58

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

	::System::Void Method_2_992D5FB404042522(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_992D5FB404042522_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_877*>* Method_2_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_877*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_977A5C8234F34C98_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CAAE4CA499A3E35D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_CAAE4CA499A3E35D_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_742DD6055A698FD8(::System::Int32 a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_742DD6055A698FD8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_088C875BBADB7C63(::System::String* a1, ::MoleMole::UIBaseController* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_088C875BBADB7C63_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_2_F19BA6C9247B9CB9(::Enum_3_7A4252233BCEB3A9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_7A4252233BCEB3A9))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_F19BA6C9247B9CB9_OFFSET))(this, a1);
	}

	static ::MoleMole::ConfigNewbie_NewbieGroup* Method_2_BFD016A24BFEA3E5()
	{
		return ((::MoleMole::ConfigNewbie_NewbieGroup*(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_BFD016A24BFEA3E5_OFFSET))();
	}

	::System::Boolean Method_2_2AA97C04E9588384(::Class_2_208CC9941471731A_877* a1, ::Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_877*, ::Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30&))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_2AA97C04E9588384_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_391FC88C022178EF(::MoleMole::UIGeneralNewsBubbleRowWidgetController* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_391FC88C022178EF_OFFSET))(a1);
	}

	::System::Void Method_2_9B1FBE43FD1968DB(::Class_1_8CC15846339E7FB0<::System::Int32>* a1, ::Class_1_8CC15846339E7FB0<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::System::Int32>*, ::Class_1_8CC15846339E7FB0<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_9B1FBE43FD1968DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BA07C7FDDAAF238B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_BA07C7FDDAAF238B_OFFSET))(this, a1);
	}

	::System::Void Method_2_86EBB25BE32B4451(::Class_1_8CC15846339E7FB0<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_86EBB25BE32B4451_OFFSET))(this, a1);
	}

	::System::Void Method_2_10DA236D7F5B18F9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_10DA236D7F5B18F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_91E12F3559DF024B(::Class_2_208CC9941471731A_877* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_877*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_91E12F3559DF024B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1C80B3F93E449177(::Class_2_208CC9941471731A_877* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_877*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_1C80B3F93E449177_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5F31F925103D7A52(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_5F31F925103D7A52_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B82DA55328B0AE0E(::System::String* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_877*>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_877*>*&))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_B82DA55328B0AE0E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FCA11275BFA57619(::System::String* a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_FCA11275BFA57619_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9C32243954B9532F(::MoleMole::UINewbiePopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_9C32243954B9532F_OFFSET))(this, a1);
	}

	::System::Void Method_2_160341DB9A01E525(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_160341DB9A01E525_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6C08DBBFEA758101(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_6C08DBBFEA758101_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	static ::System::Boolean Method_2_3533927922F32390(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_3533927922F32390_OFFSET))(a1);
	}

	::System::Boolean Method_2_A690678E534E1AF3(::System::Int32 a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_A690678E534E1AF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_05DA483D48EF9A48(::System::Int32 a1, ::MoleMole::UIBaseController* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_05DA483D48EF9A48_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_304E1F814D6DE3F4(::Class_2_208CC9941471731A_877* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_877*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_304E1F814D6DE3F4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AC4DDF9BF4BFC2C9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_AC4DDF9BF4BFC2C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8C2E46698ED8D0B(::System::Collections::Generic::HashSet_1<::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_D8C2E46698ED8D0B_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_EBFF523C6303C922(::Enum_3_7A4252233BCEB3A9 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_7A4252233BCEB3A9))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_EBFF523C6303C922_OFFSET))(a1);
	}

	::System::Void Method_2_6694DE53B26FBE31(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_6694DE53B26FBE31_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_2_9EAE1A47132304F8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_9EAE1A47132304F8_OFFSET))();
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_7FABE1C1D06A7279(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_7FABE1C1D06A7279_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_52E456B60C3C2D81(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_52E456B60C3C2D81_OFFSET))(a1);
	}

	::System::Void Method_2_05DA483D48EF9A48_1(::System::Int32 a1, ::MoleMole::UIBaseController* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_05DA483D48EF9A48_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C25FAAC34AF73232(::Class_2_208CC9941471731A_877* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_877*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_C25FAAC34AF73232_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_EDFD49C942C75D6C_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_1_OFFSET))();
	}

	::System::Void Method_2_A9805CA46D68009E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_A9805CA46D68009E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_3B9C5E09D0519937(::System::Int32 a1, ::MoleMole::UIBaseController* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_3B9C5E09D0519937_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_EABA0F7FDCD28A1D(::Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_00AA8DEB4906FE64_Struct_2_0EBDDECBE2941A30))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_EABA0F7FDCD28A1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_2_1ADC5E4C222F6999()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_1ADC5E4C222F6999_OFFSET))();
	}

	::System::Boolean Method_2_8DE3B9C25631CF42(::Class_2_208CC9941471731A_877* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_877*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_8DE3B9C25631CF42_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DF701F4AA395DAE(::System::Int32 a1, ::MoleMole::UIBaseController* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_4DF701F4AA395DAE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_099D6A5E8A82B69F(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_099D6A5E8A82B69F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Boolean Method_2_93DE8C792406809A(::System::Collections::Generic::IList_1<::System::Int32>* a1, ::MoleMole::UIBaseController* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_93DE8C792406809A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_EDFD49C942C75D6C_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_EDFD49C942C75D6C_2_OFFSET))();
	}

	::System::Boolean Method_2_94255A0D482F4C9D(::Class_2_208CC9941471731A_877* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_877*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_94255A0D482F4C9D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A60D9D779F74E75E(::Class_2_208CC9941471731A_877* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_877*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_A60D9D779F74E75E_OFFSET))(this, a1);
	}

	::MoleMole::ConfigNewbie_NewbieGroup* Method_2_969EC24E083C85B5(::System::Int32 a1)
	{
		return ((::MoleMole::ConfigNewbie_NewbieGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_969EC24E083C85B5_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_69ACE982C3BD50BB(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_69ACE982C3BD50BB_OFFSET))(a1);
	}

	::System::Void Method_2_DBBEB514B9CCAA6D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_METHOD_2_DBBEB514B9CCAA6D_OFFSET))(this, a1);
	}
};
