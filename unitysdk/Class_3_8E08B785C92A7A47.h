#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/Class_3_8E08B785C92A7A47_Struct_2_59BA2C2903936958.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_31;
class Class_5_7DE03FFC38B69B91;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_8E08B785C92A7A47_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x185D76F0)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_0672B3AC819E074A_OFFSET UNITYSDK_OFFSET(0x185D86C0)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_1A557D2E7BE4FEB7_OFFSET UNITYSDK_OFFSET(0x185D8370)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_1D7D6C5174BF59CE_1_OFFSET UNITYSDK_OFFSET(0x185D8600)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_1D7D6C5174BF59CE_OFFSET UNITYSDK_OFFSET(0x185D80C0)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x185D82D0)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x185D8790)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x185D7AC0)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_3A7CEC3F286901FB_OFFSET UNITYSDK_OFFSET(0x185D8910)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_5C0F4CFE9C6CAB7B_OFFSET UNITYSDK_OFFSET(0x185D8B00)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_9FDD6A4674A7DB23_OFFSET UNITYSDK_OFFSET(0x185D7940)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_A5275D533375A06A_OFFSET UNITYSDK_OFFSET(0x185D8180)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_AD924E857521173D_OFFSET UNITYSDK_OFFSET(0x185D7D00)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x185D7E80)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_C11BD1C5060B3B1A_OFFSET UNITYSDK_OFFSET(0x185D8830)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_C271FCC75F0C9CC8_OFFSET UNITYSDK_OFFSET(0x185D8B10)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_C274938ACDC3EAE4_OFFSET UNITYSDK_OFFSET(0x185D7DC0)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_C50826CD2FD86DD8_OFFSET UNITYSDK_OFFSET(0x185D7F20)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_DC8BC0188E571FFD_OFFSET UNITYSDK_OFFSET(0x185D8AA0)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_E7558A1DFF7208C8_OFFSET UNITYSDK_OFFSET(0x185D85F0)
#define CLASS_3_8E08B785C92A7A47_METHOD_3_F2A1C4986462644D_OFFSET UNITYSDK_OFFSET(0x185D8260)
#define CLASS_3_8E08B785C92A7A47__CTOR_OFFSET UNITYSDK_OFFSET(0x185D7B20)

inline static constexpr unsigned int Class_3_8E08B785C92A7A47_TypeDefinitionIndex = 68570;

class Class_3_8E08B785C92A7A47 : public ::Class_2_5560EE9F1F33A604
{
public:
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_8E08B785C92A7A47_Struct_2_59BA2C2903936958>* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_8E08B785C92A7A47_Struct_2_59BA2C2903936958>* Field_3_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_9FDD6A4674A7DB23(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_9FDD6A4674A7DB23_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_AD924E857521173D(::Class_5_7DE03FFC38B69B91* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_AD924E857521173D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C274938ACDC3EAE4(::Class_5_7DE03FFC38B69B91* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_C274938ACDC3EAE4_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_C50826CD2FD86DD8(::Class_5_7DE03FFC38B69B91* a1, ::System::String* a2, ::Class_1_43BD383C98B4C0C5_31* a3)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::String*, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_C50826CD2FD86DD8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_1D7D6C5174BF59CE(::Class_5_7DE03FFC38B69B91* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_1D7D6C5174BF59CE_OFFSET))(a1, a2);
	}

	::System::Void Method_3_A5275D533375A06A(::Class_5_7DE03FFC38B69B91* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_7DE03FFC38B69B91*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_A5275D533375A06A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F2A1C4986462644D(::Class_5_7DE03FFC38B69B91* a1, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::HollowCell>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_7DE03FFC38B69B91*, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_F2A1C4986462644D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_1A557D2E7BE4FEB7(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_1A557D2E7BE4FEB7_OFFSET))(this, a1);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_E7558A1DFF7208C8_OFFSET))(this);
	}

	static ::System::Void Method_3_1D7D6C5174BF59CE_1(::Class_5_7DE03FFC38B69B91* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_1D7D6C5174BF59CE_1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_3_0672B3AC819E074A(::Class_5_7DE03FFC38B69B91* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_0672B3AC819E074A_OFFSET))(a1);
	}

	::System::Void Method_3_2685B6183E614529_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_2685B6183E614529_2_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_C11BD1C5060B3B1A(::Class_5_7DE03FFC38B69B91* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_C11BD1C5060B3B1A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_3A7CEC3F286901FB(::Class_5_7DE03FFC38B69B91* a1)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_3A7CEC3F286901FB_OFFSET))(a1);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_5C0F4CFE9C6CAB7B_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_DC8BC0188E571FFD(::Class_5_7DE03FFC38B69B91* a1)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_DC8BC0188E571FFD_OFFSET))(a1);
	}

	static ::System::Void Method_3_C271FCC75F0C9CC8(::Class_5_7DE03FFC38B69B91* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8E08B785C92A7A47_METHOD_3_C271FCC75F0C9CC8_OFFSET))(a1, a2);
	}
};
