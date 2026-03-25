#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_867B6CE75953535A;
class Class_1_E71C5FFECE694C17;
class Class_3_1A9D32B2B1D681B8;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_0AC72F8C133641A7_EXECUTE_OFFSET UNITYSDK_OFFSET(0x169E8D80)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_138508F5F5843035_OFFSET UNITYSDK_OFFSET(0x169E9C40)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x169E8FA0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_2D965250E71F6EFC_OFFSET UNITYSDK_OFFSET(0x169EA9F0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_471DE2274AF991C0_OFFSET UNITYSDK_OFFSET(0x169EAEF0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_50A46EF80A524C98_OFFSET UNITYSDK_OFFSET(0x169EA8B0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_5C9C00039770DDEA_OFFSET UNITYSDK_OFFSET(0x169EE9E0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_611A64DF3D6962B6_OFFSET UNITYSDK_OFFSET(0x169EC900)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_8B59D7F636464C6D_OFFSET UNITYSDK_OFFSET(0x169EEBD0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x169E8F10)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0x169EC120)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_B4F62DAE6410B22A_OFFSET UNITYSDK_OFFSET(0x169EC320)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_D1A9A27748E46319_OFFSET UNITYSDK_OFFSET(0x169E9AB0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_E394F57045DCF8BF_OFFSET UNITYSDK_OFFSET(0x169EB690)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_F3FBF1431D678942_OFFSET UNITYSDK_OFFSET(0x169EB110)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_FAF6B2EBCBEEA5B9_OFFSET UNITYSDK_OFFSET(0x169EC250)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_FDE98962EC6197E2_OFFSET UNITYSDK_OFFSET(0x169E92F0)
#define CLASS_1_0AC72F8C133641A7__CTOR_OFFSET UNITYSDK_OFFSET(0x169E8D10)
#define CLASS_1_0AC72F8C133641A7___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x169EED60)

inline static constexpr unsigned int Class_1_0AC72F8C133641A7_TypeDefinitionIndex = 32770;

class Class_1_0AC72F8C133641A7 : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A* Field_1_0; // 0x10
	::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean>* Field_1_2; // 0x18
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x20
	::RPG::GameCore::MatchThreePropType Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_1_FDE98962EC6197E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_FDE98962EC6197E2_OFFSET))(this);
	}

	::System::Void Method_1_138508F5F5843035(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_138508F5F5843035_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_471DE2274AF991C0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_471DE2274AF991C0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F3FBF1431D678942(::RPG::GameCore::MatchThreePropType a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_F3FBF1431D678942_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E394F57045DCF8BF(::RPG::GameCore::MatchThreePropType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_E394F57045DCF8BF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_9C72894CB5D45A5A_OFFSET))(this);
	}

	::System::Boolean Method_1_50A46EF80A524C98(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_50A46EF80A524C98_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2D965250E71F6EFC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_2D965250E71F6EFC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FAF6B2EBCBEEA5B9(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_FAF6B2EBCBEEA5B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B4F62DAE6410B22A(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_B4F62DAE6410B22A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_611A64DF3D6962B6(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_611A64DF3D6962B6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_8B59D7F636464C6D(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_8B59D7F636464C6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C9C00039770DDEA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_5C9C00039770DDEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1A9A27748E46319()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_D1A9A27748E46319_OFFSET))(this);
	}

	::Class_1_E71C5FFECE694C17* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_E71C5FFECE694C17*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_995B4AEB9D9468D5_OFFSET))(this);
	}

	::System::Boolean __ctor_b__0_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> gridPos)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7___CTOR_B__0_0_OFFSET))(this, gridPos);
	}
};
