#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4C3E2542F8C9B910_Struct_2_5396005F9A53A130.h"
#include "unitysdk/Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/Struct_2_50968EFA8638B3BF.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_277;
class Class_4_7B5A65E248106C68;
class Class_4_B99AA5AE371451AA;
class Class_5_1C775D1A5A638660;
class Class_5_EC49DC305E06FE39;
class Class_5_F638703ACD0FA08E;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AA2E165835D86318_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x127C6AF0)
#define CLASS_3_AA2E165835D86318_METHOD_3_08C578DC970E5EED_OFFSET UNITYSDK_OFFSET(0x127C9C50)
#define CLASS_3_AA2E165835D86318_METHOD_3_0BBBABF30AF24CF5_OFFSET UNITYSDK_OFFSET(0x127C7CA0)
#define CLASS_3_AA2E165835D86318_METHOD_3_145D78F368B63EDE_OFFSET UNITYSDK_OFFSET(0x127CA5A0)
#define CLASS_3_AA2E165835D86318_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x127C9A10)
#define CLASS_3_AA2E165835D86318_METHOD_3_2774A47E2C534FDB_OFFSET UNITYSDK_OFFSET(0x127C76D0)
#define CLASS_3_AA2E165835D86318_METHOD_3_377E6E8F710C5BB9_OFFSET UNITYSDK_OFFSET(0x127CA740)
#define CLASS_3_AA2E165835D86318_METHOD_3_39468678C9BF10F3_OFFSET UNITYSDK_OFFSET(0x127C8240)
#define CLASS_3_AA2E165835D86318_METHOD_3_42340AD55179E540_OFFSET UNITYSDK_OFFSET(0x127C8AE0)
#define CLASS_3_AA2E165835D86318_METHOD_3_47C7A531EE659929_OFFSET UNITYSDK_OFFSET(0x127C8010)
#define CLASS_3_AA2E165835D86318_METHOD_3_488B22A0B55DFD1B_OFFSET UNITYSDK_OFFSET(0x127C8400)
#define CLASS_3_AA2E165835D86318_METHOD_3_551D31BFE6A9A3B6_OFFSET UNITYSDK_OFFSET(0x127C82F0)
#define CLASS_3_AA2E165835D86318_METHOD_3_5C0F4CFE9C6CAB7B_1_OFFSET UNITYSDK_OFFSET(0x127C83F0)
#define CLASS_3_AA2E165835D86318_METHOD_3_5C0F4CFE9C6CAB7B_2_OFFSET UNITYSDK_OFFSET(0x127C98D0)
#define CLASS_3_AA2E165835D86318_METHOD_3_5C0F4CFE9C6CAB7B_3_OFFSET UNITYSDK_OFFSET(0x127C9CC0)
#define CLASS_3_AA2E165835D86318_METHOD_3_5C0F4CFE9C6CAB7B_4_OFFSET UNITYSDK_OFFSET(0x127CA9A0)
#define CLASS_3_AA2E165835D86318_METHOD_3_5C0F4CFE9C6CAB7B_OFFSET UNITYSDK_OFFSET(0x127C82E0)
#define CLASS_3_AA2E165835D86318_METHOD_3_81904ECFA304C59B_OFFSET UNITYSDK_OFFSET(0x127CA9B0)
#define CLASS_3_AA2E165835D86318_METHOD_3_819198B83792FDCF_OFFSET UNITYSDK_OFFSET(0x127C9780)
#define CLASS_3_AA2E165835D86318_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x127C7450)
#define CLASS_3_AA2E165835D86318_METHOD_3_B36DBE2F13B1DA6D_OFFSET UNITYSDK_OFFSET(0x127C9810)
#define CLASS_3_AA2E165835D86318_METHOD_3_B4FEBE6444009BBC_OFFSET UNITYSDK_OFFSET(0x127C9420)
#define CLASS_3_AA2E165835D86318_METHOD_3_B6CA8127DAB057EC_OFFSET UNITYSDK_OFFSET(0x127C9AB0)
#define CLASS_3_AA2E165835D86318_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x127C9960)
#define CLASS_3_AA2E165835D86318_METHOD_3_BAF4B2914959AFF3_OFFSET UNITYSDK_OFFSET(0x127CA1B0)
#define CLASS_3_AA2E165835D86318_METHOD_3_C18C48FFD77EB03B_OFFSET UNITYSDK_OFFSET(0x127C9CD0)
#define CLASS_3_AA2E165835D86318_METHOD_3_C50473E3420B327F_OFFSET UNITYSDK_OFFSET(0x127C7570)
#define CLASS_3_AA2E165835D86318_METHOD_3_C85589C1253AFFD1_OFFSET UNITYSDK_OFFSET(0x127C81B0)
#define CLASS_3_AA2E165835D86318_METHOD_3_C942D98B60641864_OFFSET UNITYSDK_OFFSET(0x127C9490)
#define CLASS_3_AA2E165835D86318_METHOD_3_CE65ECE6257B0F32_OFFSET UNITYSDK_OFFSET(0x127C98E0)
#define CLASS_3_AA2E165835D86318_METHOD_3_D51B57322AA430CA_OFFSET UNITYSDK_OFFSET(0x127C7150)
#define CLASS_3_AA2E165835D86318_METHOD_3_DE306E259BDEF761_OFFSET UNITYSDK_OFFSET(0x127CA860)
#define CLASS_3_AA2E165835D86318_METHOD_3_DF4ACBA719C54EC6_OFFSET UNITYSDK_OFFSET(0x127C8BA0)
#define CLASS_3_AA2E165835D86318_METHOD_3_E7558A1DFF7208C8_1_OFFSET UNITYSDK_OFFSET(0x127C8230)
#define CLASS_3_AA2E165835D86318_METHOD_3_E7558A1DFF7208C8_2_OFFSET UNITYSDK_OFFSET(0x127C9A00)
#define CLASS_3_AA2E165835D86318_METHOD_3_E7558A1DFF7208C8_3_OFFSET UNITYSDK_OFFSET(0x127CA720)
#define CLASS_3_AA2E165835D86318_METHOD_3_E7558A1DFF7208C8_4_OFFSET UNITYSDK_OFFSET(0x127CA730)
#define CLASS_3_AA2E165835D86318_METHOD_3_E7558A1DFF7208C8_OFFSET UNITYSDK_OFFSET(0x127C7C90)
#define CLASS_3_AA2E165835D86318_METHOD_3_FFCB1A532C94B961_OFFSET UNITYSDK_OFFSET(0x127C84B0)
#define CLASS_3_AA2E165835D86318__CTOR_OFFSET UNITYSDK_OFFSET(0x127C7500)

inline static constexpr unsigned int Class_3_AA2E165835D86318_TypeDefinitionIndex = 58856;

class Class_3_AA2E165835D86318 : public ::Class_2_5560EE9F1F33A604
{
public:
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x40
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x48
	::Nap::NapECS::EcsFilter* Field_3_3; // 0x50
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x58
	::Nap::NapECS::EcsFilter* Field_3_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_D51B57322AA430CA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_D51B57322AA430CA_OFFSET))(this, a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_C50473E3420B327F(::MoleMole::HollowChessboard::HollowCell a1, ::System::Int32 a2, ::Class_1_4C3E2542F8C9B910_Struct_2_5396005F9A53A130& a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::Class_1_4C3E2542F8C9B910_Struct_2_5396005F9A53A130&))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_C50473E3420B327F_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_2774A47E2C534FDB(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7, ::System::String* a8, ::System::Boolean a9, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* a10, ::System::Nullable_1<::System::Int64> a11)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>*, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_2774A47E2C534FDB_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_E7558A1DFF7208C8_OFFSET))(this);
	}

	static ::System::Void Method_3_0BBBABF30AF24CF5(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_0BBBABF30AF24CF5_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_47C7A531EE659929(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2, ::Class_0_16E4307DCC419505_277* a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&, ::Class_0_16E4307DCC419505_277*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_47C7A531EE659929_OFFSET))(a1, a2, a3);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8_1()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_E7558A1DFF7208C8_1_OFFSET))(this);
	}

	::System::Void Method_3_39468678C9BF10F3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_39468678C9BF10F3_OFFSET))(this, a1);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_5C0F4CFE9C6CAB7B_OFFSET))(this, a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_551D31BFE6A9A3B6(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_551D31BFE6A9A3B6_OFFSET))(a1, a2);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B_1(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_5C0F4CFE9C6CAB7B_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_488B22A0B55DFD1B(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_488B22A0B55DFD1B_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_B4FEBE6444009BBC(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_B4FEBE6444009BBC_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_C942D98B60641864(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a6, ::System::Boolean a7, ::MoleMole::UIHollowChessPieceParticle_TransformType a8, ::System::Nullable_1<::Foundation::Unreal::FTransform> a9)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::String*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_C942D98B60641864_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_3_819198B83792FDCF(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_819198B83792FDCF_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_B36DBE2F13B1DA6D(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_B36DBE2F13B1DA6D_OFFSET))(a1);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B_2(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_5C0F4CFE9C6CAB7B_2_OFFSET))(this, a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_CE65ECE6257B0F32(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2, ::Class_0_16E4307DCC419505_277* a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&, ::Class_0_16E4307DCC419505_277*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_CE65ECE6257B0F32_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8_2()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_E7558A1DFF7208C8_2_OFFSET))(this);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_B6CA8127DAB057EC(::Class_4_B99AA5AE371451AA* a1, ::Class_5_EC49DC305E06FE39* a2, ::Class_5_F638703ACD0FA08E* a3)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::Class_5_EC49DC305E06FE39*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_B6CA8127DAB057EC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_42340AD55179E540(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_42340AD55179E540_OFFSET))(a1, a2);
	}

	::System::Void Method_3_08C578DC970E5EED(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_08C578DC970E5EED_OFFSET))(this, a1);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B_3(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_5C0F4CFE9C6CAB7B_3_OFFSET))(this, a1);
	}

	static ::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689 Method_3_C85589C1253AFFD1(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2)
	{
		return ((::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_C85589C1253AFFD1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BAF4B2914959AFF3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_BAF4B2914959AFF3_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_145D78F368B63EDE(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::String* a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_145D78F368B63EDE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_FFCB1A532C94B961(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_FFCB1A532C94B961_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_B1936CE4DA97AA45_OFFSET))();
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8_3()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_E7558A1DFF7208C8_3_OFFSET))(this);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8_4()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_E7558A1DFF7208C8_4_OFFSET))(this);
	}

	static ::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689 Method_3_C18C48FFD77EB03B(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2)
	{
		return ((::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_C18C48FFD77EB03B_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_377E6E8F710C5BB9(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::String* a3, ::System::Int32 a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_377E6E8F710C5BB9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_DF4ACBA719C54EC6(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_DF4ACBA719C54EC6_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_DE306E259BDEF761(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_DE306E259BDEF761_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B_4(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_5C0F4CFE9C6CAB7B_4_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_81904ECFA304C59B(::Class_5_1C775D1A5A638660* a1)
	{
		return ((::System::Void(*)(::Class_5_1C775D1A5A638660*))((::PBYTE)hIl2Cpp + CLASS_3_AA2E165835D86318_METHOD_3_81904ECFA304C59B_OFFSET))(a1);
	}
};
