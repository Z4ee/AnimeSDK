#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_867B6CE75953535A;
class Class_1_9C5FD87C0FC0CB53;
class Class_3_1A9D32B2B1D681B8;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B4A7348E6F08B12E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17FA29F0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_05022A5583A6D8E7_OFFSET UNITYSDK_OFFSET(0x17FA4130)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_138508F5F5843035_OFFSET UNITYSDK_OFFSET(0x17FA3770)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x17FA2C20)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_2D965250E71F6EFC_OFFSET UNITYSDK_OFFSET(0x17FA3CE0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_36D20622B6E50FD6_OFFSET UNITYSDK_OFFSET(0x17FA48D0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_50A46EF80A524C98_OFFSET UNITYSDK_OFFSET(0x17FA3BA0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_5C9C00039770DDEA_OFFSET UNITYSDK_OFFSET(0x17FA6800)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_611A64DF3D6962B6_OFFSET UNITYSDK_OFFSET(0x17FA5B90)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_8B59D7F636464C6D_OFFSET UNITYSDK_OFFSET(0x17FA6940)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x17FA2B80)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0x17FA53E0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_B4F62DAE6410B22A_OFFSET UNITYSDK_OFFSET(0x17FA55E0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_D1A9A27748E46319_OFFSET UNITYSDK_OFFSET(0x17FA35E0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_F3FBF1431D678942_OFFSET UNITYSDK_OFFSET(0x17FA4340)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_FAF6B2EBCBEEA5B9_OFFSET UNITYSDK_OFFSET(0x17FA5510)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_FDE98962EC6197E2_OFFSET UNITYSDK_OFFSET(0x17FA2F70)
#define CLASS_1_B4A7348E6F08B12E__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA2980)
#define CLASS_1_B4A7348E6F08B12E___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x17FA6E60)

inline static constexpr unsigned int Class_1_B4A7348E6F08B12E_TypeDefinitionIndex = 38560;

class Class_1_B4A7348E6F08B12E : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A* Field_1_0; // 0x10
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x18
	::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean>* Field_1_2; // 0x20
	::RPG::GameCore::MatchThreePropType Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_1_FDE98962EC6197E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_FDE98962EC6197E2_OFFSET))(this);
	}

	::System::Void Method_1_138508F5F5843035(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_138508F5F5843035_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_05022A5583A6D8E7(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_05022A5583A6D8E7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F3FBF1431D678942(::RPG::GameCore::MatchThreePropType a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_F3FBF1431D678942_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_36D20622B6E50FD6(::RPG::GameCore::MatchThreePropType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_36D20622B6E50FD6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_9C72894CB5D45A5A_OFFSET))(this);
	}

	::System::Boolean Method_1_50A46EF80A524C98(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_50A46EF80A524C98_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2D965250E71F6EFC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_2D965250E71F6EFC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FAF6B2EBCBEEA5B9(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_FAF6B2EBCBEEA5B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B4F62DAE6410B22A(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_B4F62DAE6410B22A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_611A64DF3D6962B6(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_611A64DF3D6962B6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_8B59D7F636464C6D(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_8B59D7F636464C6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C9C00039770DDEA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_5C9C00039770DDEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1A9A27748E46319()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_D1A9A27748E46319_OFFSET))(this);
	}

	::Class_1_9C5FD87C0FC0CB53* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_9C5FD87C0FC0CB53*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_995B4AEB9D9468D5_OFFSET))(this);
	}

	::System::Boolean __ctor_b__0_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> gridPos)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E___CTOR_B__0_0_OFFSET))(this, gridPos);
	}
};
