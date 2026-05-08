#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/Struct_2_50968EFA8638B3BF.h"

class Class_0_16E4307DCC419505_277;
class Class_4_5B32B6042C9283CB;
class Class_4_7B5A65E248106C68;
class Class_5_AF65C3A968E836D2;
class Class_5_F638703ACD0FA08E;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7FDD8CFB2ED4CC7F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x106A4CC0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_00CF90939841E387_OFFSET UNITYSDK_OFFSET(0x106A60C0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_03629A776AA38507_OFFSET UNITYSDK_OFFSET(0x106A6010)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_044286EEA0C2802C_OFFSET UNITYSDK_OFFSET(0x106A7510)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_19269CDA781BBC64_OFFSET UNITYSDK_OFFSET(0x106A73B0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x106A59D0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_4057D796AB024FE2_OFFSET UNITYSDK_OFFSET(0x106A5D40)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_6CE927D4066CD159_OFFSET UNITYSDK_OFFSET(0x106A5BB0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_71F7E8D8FBB7C526_OFFSET UNITYSDK_OFFSET(0x106A7770)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_9794AF8A2551DBF5_OFFSET UNITYSDK_OFFSET(0x106A5A70)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_98E9F1354AC2E777_OFFSET UNITYSDK_OFFSET(0x106A5080)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_A0929A6D8D26F716_OFFSET UNITYSDK_OFFSET(0x106A5590)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_B7846A12B111FEB5_OFFSET UNITYSDK_OFFSET(0x106A6780)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x106A84E0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_C7BC1FDFCE58E43F_OFFSET UNITYSDK_OFFSET(0x106A56F0)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_D529CA2C32D0A8DF_OFFSET UNITYSDK_OFFSET(0x106A5520)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_E4BF5E0E1E925BB8_OFFSET UNITYSDK_OFFSET(0x106A5B00)
#define CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_E7ADAB321B8D521A_OFFSET UNITYSDK_OFFSET(0x106A83A0)
#define CLASS_3_7FDD8CFB2ED4CC7F__CCTOR_OFFSET UNITYSDK_OFFSET(0x106A5510)
#define CLASS_3_7FDD8CFB2ED4CC7F__CTOR_OFFSET UNITYSDK_OFFSET(0x106A54A0)

inline static constexpr unsigned int Class_3_7FDD8CFB2ED4CC7F_TypeDefinitionIndex = 45409;

class Class_3_7FDD8CFB2ED4CC7F : public ::Class_2_5560EE9F1F33A604
{
public:
	static ::System::Int32* StaticGet_Field_3_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_7FDD8CFB2ED4CC7F_TypeDefinitionIndex)->GetStaticField(0x95C0);
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

	static ::System::Void Method_3_D529CA2C32D0A8DF(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_D529CA2C32D0A8DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A0929A6D8D26F716(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_A0929A6D8D26F716_OFFSET))(a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_3_9794AF8A2551DBF5(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Int32(*)(::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_9794AF8A2551DBF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C7BC1FDFCE58E43F(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_C7BC1FDFCE58E43F_OFFSET))(a1);
	}

	static ::System::Void Method_3_E4BF5E0E1E925BB8(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_E4BF5E0E1E925BB8_OFFSET))(a1);
	}

	static ::System::Void Method_3_6CE927D4066CD159(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_6CE927D4066CD159_OFFSET))(a1);
	}

	::System::Void Method_3_4057D796AB024FE2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_4057D796AB024FE2_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_03629A776AA38507(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_03629A776AA38507_OFFSET))(a1);
	}

	static ::System::Void Method_3_00CF90939841E387(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_00CF90939841E387_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::HollowCell Method_3_B7846A12B111FEB5(::Class_4_7B5A65E248106C68* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::Class_4_7B5A65E248106C68*, ::Class_5_AF65C3A968E836D2*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_B7846A12B111FEB5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_19269CDA781BBC64(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_19269CDA781BBC64_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_71F7E8D8FBB7C526(::MoleMole::HollowChessboard::HollowEntity*& a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::Struct_2_50968EFA8638B3BF a3, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_277*>* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowEntity*&, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_50968EFA8638B3BF, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_277*>*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_71F7E8D8FBB7C526_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_E7ADAB321B8D521A(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_E7ADAB321B8D521A_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_044286EEA0C2802C(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_044286EEA0C2802C_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7FDD8CFB2ED4CC7F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
