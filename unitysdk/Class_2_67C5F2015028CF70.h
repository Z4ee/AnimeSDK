#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/Struct_2_82079FEACF9406E9.h"

class Class_0_16E4307DCC419505_494;
class Class_0_16E4307DCC419505_495;
class Class_0_16E4307DCC419505_496;
class Class_1_CB933669B1B3A35B;
class Class_1_D27BF54F25500E5F;
class Class_1_E7BD46EB43F1A06F;
class Class_1_FC03A5979CDB9817;
class Class_1_FF65FA96463E7784;
class Class_2_079CFDB940F77F49;
class Class_3_6974676991F6AE7F;
namespace RPG::Client { class MockAnimator; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_67C5F2015028CF70_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1551B3B0)
#define CLASS_2_67C5F2015028CF70_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x15519E40)
#define CLASS_2_67C5F2015028CF70_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0x15519ED0)
#define CLASS_2_67C5F2015028CF70_GET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x15519F30)
#define CLASS_2_67C5F2015028CF70_METHOD_2_002CCF446C4C66C2_OFFSET UNITYSDK_OFFSET(0x155193B0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_021F29D215C40ECC_OFFSET UNITYSDK_OFFSET(0x1551B5B0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x15519430)
#define CLASS_2_67C5F2015028CF70_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x15517F50)
#define CLASS_2_67C5F2015028CF70_METHOD_2_0A18A473C19B1A6D_OFFSET UNITYSDK_OFFSET(0x1551ABA0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_0B6D58343199C42A_OFFSET UNITYSDK_OFFSET(0x15518350)
#define CLASS_2_67C5F2015028CF70_METHOD_2_1183B3B73E7A53E4_OFFSET UNITYSDK_OFFSET(0x15518520)
#define CLASS_2_67C5F2015028CF70_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15519440)
#define CLASS_2_67C5F2015028CF70_METHOD_2_1482A97F588F58C1_OFFSET UNITYSDK_OFFSET(0x15519610)
#define CLASS_2_67C5F2015028CF70_METHOD_2_192FD0E0087FC305_OFFSET UNITYSDK_OFFSET(0x1551A0D0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_214DDF4D3EA2A67D_OFFSET UNITYSDK_OFFSET(0x15517220)
#define CLASS_2_67C5F2015028CF70_METHOD_2_239DA303D67E343C_OFFSET UNITYSDK_OFFSET(0x15518800)
#define CLASS_2_67C5F2015028CF70_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1551B700)
#define CLASS_2_67C5F2015028CF70_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1551AF10)
#define CLASS_2_67C5F2015028CF70_METHOD_2_2C1A1DB5A297B7E7_OFFSET UNITYSDK_OFFSET(0x15516E20)
#define CLASS_2_67C5F2015028CF70_METHOD_2_2E7C0D86C81DC9BF_OFFSET UNITYSDK_OFFSET(0x15516AE0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_3CDD0248353333ED_OFFSET UNITYSDK_OFFSET(0x1551A690)
#define CLASS_2_67C5F2015028CF70_METHOD_2_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x155162C0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x15518900)
#define CLASS_2_67C5F2015028CF70_METHOD_2_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1551B6F0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_43E6437DFFF97D19_OFFSET UNITYSDK_OFFSET(0x15518220)
#define CLASS_2_67C5F2015028CF70_METHOD_2_497778D7CE5A903D_OFFSET UNITYSDK_OFFSET(0x15518C50)
#define CLASS_2_67C5F2015028CF70_METHOD_2_4A70D7AAB499694A_OFFSET UNITYSDK_OFFSET(0x15516110)
#define CLASS_2_67C5F2015028CF70_METHOD_2_4F16AEBA724E7F13_1_OFFSET UNITYSDK_OFFSET(0x15517A70)
#define CLASS_2_67C5F2015028CF70_METHOD_2_4F16AEBA724E7F13_OFFSET UNITYSDK_OFFSET(0x15517060)
#define CLASS_2_67C5F2015028CF70_METHOD_2_62AD46C5448EE4B5_OFFSET UNITYSDK_OFFSET(0x1551B620)
#define CLASS_2_67C5F2015028CF70_METHOD_2_6AEE51845DFA6D71_OFFSET UNITYSDK_OFFSET(0x15519280)
#define CLASS_2_67C5F2015028CF70_METHOD_2_6D443C2C40B77A2D_OFFSET UNITYSDK_OFFSET(0x15518AD0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x1551B4B0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_6F2BB45B1EEFFC53_OFFSET UNITYSDK_OFFSET(0x15517110)
#define CLASS_2_67C5F2015028CF70_METHOD_2_751C17657FB7EB8A_OFFSET UNITYSDK_OFFSET(0x15516210)
#define CLASS_2_67C5F2015028CF70_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x155192D0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_82B886502AF8E904_OFFSET UNITYSDK_OFFSET(0x15518680)
#define CLASS_2_67C5F2015028CF70_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x155193A0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x15519270)
#define CLASS_2_67C5F2015028CF70_METHOD_2_9783E52440E7E2CF_OFFSET UNITYSDK_OFFSET(0x155168D0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15517E90)
#define CLASS_2_67C5F2015028CF70_METHOD_2_A9BD8CB8875AC0A7_OFFSET UNITYSDK_OFFSET(0x15517B20)
#define CLASS_2_67C5F2015028CF70_METHOD_2_AA44140107A997F1_OFFSET UNITYSDK_OFFSET(0x15516F50)
#define CLASS_2_67C5F2015028CF70_METHOD_2_AF910DB459DDFBCC_OFFSET UNITYSDK_OFFSET(0x15518490)
#define CLASS_2_67C5F2015028CF70_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15516430)
#define CLASS_2_67C5F2015028CF70_METHOD_2_B61FF41D45EBDE24_OFFSET UNITYSDK_OFFSET(0x1551A130)
#define CLASS_2_67C5F2015028CF70_METHOD_2_BF7707C04361A205_OFFSET UNITYSDK_OFFSET(0x15519F20)
#define CLASS_2_67C5F2015028CF70_METHOD_2_C3710CFF5A9E854E_OFFSET UNITYSDK_OFFSET(0x155164E0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0x1551A3D0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15519260)
#define CLASS_2_67C5F2015028CF70_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x155195C0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_D1B1E19AC459D83C_OFFSET UNITYSDK_OFFSET(0x1551A600)
#define CLASS_2_67C5F2015028CF70_METHOD_2_DFCBB7847A56A016_OFFSET UNITYSDK_OFFSET(0x15517340)
#define CLASS_2_67C5F2015028CF70_METHOD_2_E621D97D3B11AD66_OFFSET UNITYSDK_OFFSET(0x155183F0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_E67B5FBE55A05FCB_OFFSET UNITYSDK_OFFSET(0x155174A0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x155191F0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_E7F88AD4D61A5711_OFFSET UNITYSDK_OFFSET(0x1551AFE0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_E9BCC4C7DCC8C682_OFFSET UNITYSDK_OFFSET(0x15519AA0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_ECA7333ABCD628C6_OFFSET UNITYSDK_OFFSET(0x1551A260)
#define CLASS_2_67C5F2015028CF70_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x15517EE0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_EF343326A0C7462C_OFFSET UNITYSDK_OFFSET(0x1551A4E0)
#define CLASS_2_67C5F2015028CF70_METHOD_2_F45B19D3B45B936F_OFFSET UNITYSDK_OFFSET(0x15516C10)
#define CLASS_2_67C5F2015028CF70_METHOD_2_F6E7F4E1BEE09F2A_OFFSET UNITYSDK_OFFSET(0x15519F50)
#define CLASS_2_67C5F2015028CF70_METHOD_2_FEA438F16C040CED_OFFSET UNITYSDK_OFFSET(0x15516B80)
#define CLASS_2_67C5F2015028CF70_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x15519E80)
#define CLASS_2_67C5F2015028CF70_SET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x15519F40)
#define CLASS_2_67C5F2015028CF70_TICK_OFFSET UNITYSDK_OFFSET(0x15519DD0)
#define CLASS_2_67C5F2015028CF70__CTOR_OFFSET UNITYSDK_OFFSET(0x1551B710)
#define CLASS_2_67C5F2015028CF70__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1551AF20)

inline static constexpr unsigned int Class_2_67C5F2015028CF70_TypeDefinitionIndex = 54179;

class Class_2_67C5F2015028CF70 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::SortedSet_1<::System::Int32>** StaticGet_JLBJJOCBMGC()
	{
		return (::System::Collections::Generic::SortedSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_67C5F2015028CF70_TypeDefinitionIndex)->GetStaticField(0x1F60);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_DCFFNFKEEAH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_67C5F2015028CF70_TypeDefinitionIndex)->GetStaticField(0x1F68);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GCJJPFNPGCF; // 0x18
	::Class_1_FF65FA96463E7784* HJCGFLELJFN; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_82079FEACF9406E9>* OOBEIJPEBHJ; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* LABGNEFLMFA; // 0x30
	::Class_1_FC03A5979CDB9817* IJLEOHJJHCM; // 0x38
	::Class_3_6974676991F6AE7F* DOCELMKGNMO; // 0x40
	::RPG::Client::MockAnimator* JDFCDMAPBFJ; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D27BF54F25500E5F*>* INMNMAPFKFJ; // 0x50
	::Class_2_079CFDB940F77F49* LNLOEIICNMO; // 0x58
	::Class_1_FF65FA96463E7784* KANKPNDCABI; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>* AFFCIMCMGHC; // 0x68
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_495*>* DEHHKHNEMKE; // 0x70
	::System::Collections::Generic::List_1<::Class_1_FF65FA96463E7784*>* OCHMMHHIFOK; // 0x78
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_494*>* PHBOMHANOOM; // 0x80
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* CDLDNEGOPDL; // 0x88
	::System::UInt32 MPKJHAPCKIA; // 0x90
	::System::Int32 _HitAdditiveLayerIndex_k__BackingField; // 0x94
	::System::Int32 LOLMMLGCHAM; // 0x98
	::RPG::GameCore::FixPoint CMKOMADBPCO; // 0xA0
	::System::Boolean MEDDNKNNHKF; // 0xA8
	::System::UInt32 NMKKPECEOFL; // 0xAC
	::RPG::GameCore::FixPoint PEAMDJMFLCA; // 0xB0
	::RPG::GameCore::FixPoint PIKJLANGEJA; // 0xB8
	::RPG::GameCore::FixPoint FBKHFCLBJKP; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4A70D7AAB499694A(::Class_0_16E4307DCC419505_494* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_494*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_4A70D7AAB499694A_OFFSET))(this, a1);
	}

	::System::Void Method_2_751C17657FB7EB8A(::Class_0_16E4307DCC419505_494* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_494*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_751C17657FB7EB8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_40E03D354D1ACC85_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_9783E52440E7E2CF(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_9783E52440E7E2CF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2C1A1DB5A297B7E7(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_2C1A1DB5A297B7E7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4F16AEBA724E7F13(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_4F16AEBA724E7F13_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_AA44140107A997F1(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_AA44140107A997F1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_6F2BB45B1EEFFC53(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::System::Single a4, ::Class_1_FF65FA96463E7784* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::System::Single, ::Class_1_FF65FA96463E7784*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_6F2BB45B1EEFFC53_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_214DDF4D3EA2A67D(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::Class_1_FF65FA96463E7784* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::Class_1_FF65FA96463E7784*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_214DDF4D3EA2A67D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_DFCBB7847A56A016(::System::Int32 a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_DFCBB7847A56A016_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E67B5FBE55A05FCB(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_E67B5FBE55A05FCB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_4F16AEBA724E7F13_1(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_4F16AEBA724E7F13_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_A9BD8CB8875AC0A7(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_A9BD8CB8875AC0A7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_2_C3710CFF5A9E854E(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_C3710CFF5A9E854E_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_2E7C0D86C81DC9BF(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_2E7C0D86C81DC9BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_43E6437DFFF97D19(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_43E6437DFFF97D19_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B6D58343199C42A(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_0B6D58343199C42A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E621D97D3B11AD66(::System::Int32 a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_E621D97D3B11AD66_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_FEA438F16C040CED(::System::Int32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_FEA438F16C040CED_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AF910DB459DDFBCC(::System::Int32& a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_AF910DB459DDFBCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F45B19D3B45B936F(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_F45B19D3B45B936F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1183B3B73E7A53E4(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_1183B3B73E7A53E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_82B886502AF8E904(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_82B886502AF8E904_OFFSET))(this, a1);
	}

	::System::Void Method_2_239DA303D67E343C(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_239DA303D67E343C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	static ::System::Void Method_2_6D443C2C40B77A2D(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_6D443C2C40B77A2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_497778D7CE5A903D(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_497778D7CE5A903D_OFFSET))(a1);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_6AEE51845DFA6D71()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_6AEE51845DFA6D71_OFFSET))(this);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_77577333B4681208_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_002CCF446C4C66C2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_002CCF446C4C66C2_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1482A97F588F58C1(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_1482A97F588F58C1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E9BCC4C7DCC8C682(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_E9BCC4C7DCC8C682_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_TICK_OFFSET))(this, a1);
	}

	::System::Int32 GetUnevaluatedNextState()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
	}

	::System::Single QueryStateNoramlizedStartTime(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* GetUnityAnimator()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_GETUNITYANIMATOR_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* Method_2_BF7707C04361A205()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_BF7707C04361A205_OFFSET))(this);
	}

	::System::Int32 get_HitAdditiveLayerIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_GET_HITADDITIVELAYERINDEX_OFFSET))(this);
	}

	::System::Void set_HitAdditiveLayerIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_SET_HITADDITIVELAYERINDEX_OFFSET))(this, a1);
	}

	::System::Void Method_2_F6E7F4E1BEE09F2A(::Class_1_FF65FA96463E7784* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF65FA96463E7784*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_F6E7F4E1BEE09F2A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B61FF41D45EBDE24(::Class_1_FF65FA96463E7784* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF65FA96463E7784*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_B61FF41D45EBDE24_OFFSET))(this, a1);
	}

	::System::Void Method_2_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_C436A2848092EB88_OFFSET))(this);
	}

	::System::Void Method_2_EF343326A0C7462C(::Class_0_16E4307DCC419505_495* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_495*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_EF343326A0C7462C_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1B1E19AC459D83C(::Class_0_16E4307DCC419505_495* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_495*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_D1B1E19AC459D83C_OFFSET))(this, a1);
	}

	::System::Void Method_2_ECA7333ABCD628C6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_ECA7333ABCD628C6_OFFSET))(this);
	}

	::System::Void Method_2_192FD0E0087FC305(::Class_1_FF65FA96463E7784* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF65FA96463E7784*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_192FD0E0087FC305_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CDD0248353333ED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_3CDD0248353333ED_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A18A473C19B1A6D(::Class_1_FF65FA96463E7784* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF65FA96463E7784*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_0A18A473C19B1A6D_OFFSET))(this, a1);
	}

	::Class_1_FF65FA96463E7784* Method_2_24748FC20F375725()
	{
		return ((::Class_1_FF65FA96463E7784*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_E7F88AD4D61A5711(::Class_0_16E4307DCC419505_496* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_496*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_E7F88AD4D61A5711_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6DFEF4918C679AF0(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_021F29D215C40ECC(::RPG::GameCore::RtCharacterState a1, ::Class_1_CB933669B1B3A35B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::Class_1_CB933669B1B3A35B*))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_021F29D215C40ECC_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::RtCharacterState Method_2_62AD46C5448EE4B5()
	{
		return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_62AD46C5448EE4B5_OFFSET))(this);
	}

	::Class_2_079CFDB940F77F49* Method_2_43A46E5F9FAC62B8()
	{
		return ((::Class_2_079CFDB940F77F49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::Class_1_FC03A5979CDB9817* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_FC03A5979CDB9817*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67C5F2015028CF70_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}
};
