#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/Struct_2_50968EFA8638B3BF.h"

class Class_0_16E4307DCC419505_209;
class Class_4_5B32B6042C9283CB;
class Class_4_7B5A65E248106C68;
class Class_5_F638703ACD0FA08E;
class Class_5_FCAF801AC482D3B5;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7FDD8CFB2ED4CC7F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13CBE7C0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_00CF90939841E387_OFFSET UNITYSDK_OFFSET(0x13CC0D30)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_03629A776AA38507_OFFSET UNITYSDK_OFFSET(0x13CBF030)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_044286EEA0C2802C_OFFSET UNITYSDK_OFFSET(0x13CC0400)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_19269CDA781BBC64_OFFSET UNITYSDK_OFFSET(0x13CC02A0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13CC0930)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_6CE927D4066CD159_OFFSET UNITYSDK_OFFSET(0x13CC0660)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_71F7E8D8FBB7C526_OFFSET UNITYSDK_OFFSET(0x13CBF5C0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_7B0937CF905FF793_OFFSET UNITYSDK_OFFSET(0x13CC09D0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_9794AF8A2551DBF5_OFFSET UNITYSDK_OFFSET(0x13CC0CA0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_98E9F1354AC2E777_OFFSET UNITYSDK_OFFSET(0x13CBEB90)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_A0929A6D8D26F716_OFFSET UNITYSDK_OFFSET(0x13CBF0E0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_B7846A12B111FEB5_OFFSET UNITYSDK_OFFSET(0x13CC13F0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x13CBF520)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_C7BC1FDFCE58E43F_OFFSET UNITYSDK_OFFSET(0x13CBF240)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_D529CA2C32D0A8DF_OFFSET UNITYSDK_OFFSET(0x13CC2020)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_E4BF5E0E1E925BB8_OFFSET UNITYSDK_OFFSET(0x13CC01F0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_E7ADAB321B8D521A_OFFSET UNITYSDK_OFFSET(0x13CC07F0)
#define CLASS_3_7FDD8CFB2ED4CC7F__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CBF020)
#define CLASS_3_7FDD8CFB2ED4CC7F__CTOR_OFFSET UNITYSDK_OFFSET(0x13CBEFB0)

inline static constexpr unsigned int Class_3_7FDD8CFB2ED4CC7F_TypeDefinitionIndex = 74648;

class Class_3_7FDD8CFB2ED4CC7F : public ::Class_2_5560EE9F1F33A604
{
public:
	static ::System::Int32* StaticGet_Field_3_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_7FDD8CFB2ED4CC7F_TypeDefinitionIndex)->GetStaticField(0x113A0);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x40
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_98E9F1354AC2E777(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_98E9F1354AC2E777_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_03629A776AA38507(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_03629A776AA38507_OFFSET))(a1);
	}

	static ::System::Void Method_3_A0929A6D8D26F716(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_A0929A6D8D26F716_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_71F7E8D8FBB7C526(::MoleMole::HollowChessboard::HollowEntity*& a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::Struct_2_50968EFA8638B3BF a3, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_209*>* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowEntity*&, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_50968EFA8638B3BF, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_209*>*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_71F7E8D8FBB7C526_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_E4BF5E0E1E925BB8(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_E4BF5E0E1E925BB8_OFFSET))(a1);
	}

	static ::System::Void Method_3_19269CDA781BBC64(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_19269CDA781BBC64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6CE927D4066CD159(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_6CE927D4066CD159_OFFSET))(a1);
	}

	::System::Void Method_3_E7ADAB321B8D521A(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_E7ADAB321B8D521A_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_7B0937CF905FF793(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_7B0937CF905FF793_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_044286EEA0C2802C(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_044286EEA0C2802C_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_9794AF8A2551DBF5(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Int32(*)(::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_9794AF8A2551DBF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_00CF90939841E387(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_00CF90939841E387_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::HollowCell Method_3_B7846A12B111FEB5(::Class_4_7B5A65E248106C68* a1, ::Class_5_FCAF801AC482D3B5* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::Class_4_7B5A65E248106C68*, ::Class_5_FCAF801AC482D3B5*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_B7846A12B111FEB5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_D529CA2C32D0A8DF(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_D529CA2C32D0A8DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C7BC1FDFCE58E43F(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_C7BC1FDFCE58E43F_OFFSET))(a1);
	}
};
