#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1F84CFE380A91B33;
class Class_1_D33B7D6901AE39E9;
class Class_3_1A9D32B2B1D681B8;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_0AC72F8C133641A7_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A049FE0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1A04A200)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_33AC99260D443777_OFFSET UNITYSDK_OFFSET(0x1A04ABB0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_471DE2274AF991C0_OFFSET UNITYSDK_OFFSET(0x1A04B5D0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_514504F252C645B0_OFFSET UNITYSDK_OFFSET(0x1A04AEA0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_51E46EE22D289D45_OFFSET UNITYSDK_OFFSET(0x1A04BDA0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_5C9C00039770DDEA_OFFSET UNITYSDK_OFFSET(0x1A04D240)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_6112A48C9E0801E1_OFFSET UNITYSDK_OFFSET(0x1A04C870)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0x1A04A560)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_9A75A9725EC1A883_OFFSET UNITYSDK_OFFSET(0x1A04CEF0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0x1A04C670)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_9D6C85109864ED0C_OFFSET UNITYSDK_OFFSET(0x1A04A170)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_AF60D10E8BC623DF_OFFSET UNITYSDK_OFFSET(0x1A04B010)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_AF8383E406337273_OFFSET UNITYSDK_OFFSET(0x1A04D390)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x1A04AA00)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_E4DC29FDF68EBA85_OFFSET UNITYSDK_OFFSET(0x1A04B7F0)
#define CLASS_1_0AC72F8C133641A7_METHOD_1_FAF6B2EBCBEEA5B9_OFFSET UNITYSDK_OFFSET(0x1A04C7A0)
#define CLASS_1_0AC72F8C133641A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A049F60)
#define CLASS_1_0AC72F8C133641A7___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A04D480)

inline static constexpr unsigned int Class_1_0AC72F8C133641A7_TypeDefinitionIndex = 40136;

class Class_1_0AC72F8C133641A7 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* Field_1_0; // 0x10
	::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean>* Field_1_1; // 0x18
	::Class_3_1A9D32B2B1D681B8* Field_1_2; // 0x20
	::RPG::GameCore::MatchThreePropType Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_1_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_97285E397E8F5091_OFFSET))(this);
	}

	::System::Void Method_1_33AC99260D443777(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_33AC99260D443777_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_471DE2274AF991C0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_471DE2274AF991C0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E4DC29FDF68EBA85(::RPG::GameCore::MatchThreePropType a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_E4DC29FDF68EBA85_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_51E46EE22D289D45(::RPG::GameCore::MatchThreePropType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_51E46EE22D289D45_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_9C72894CB5D45A5A_OFFSET))(this);
	}

	::System::Boolean Method_1_514504F252C645B0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_514504F252C645B0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AF60D10E8BC623DF(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_AF60D10E8BC623DF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FAF6B2EBCBEEA5B9(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_FAF6B2EBCBEEA5B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6112A48C9E0801E1(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_6112A48C9E0801E1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A75A9725EC1A883(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_9A75A9725EC1A883_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AF8383E406337273(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_AF8383E406337273_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C9C00039770DDEA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_5C9C00039770DDEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_B768DA94E3FD91D9_OFFSET))(this);
	}

	::Class_1_1F84CFE380A91B33* Method_1_9D6C85109864ED0C()
	{
		return ((::Class_1_1F84CFE380A91B33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7_METHOD_1_9D6C85109864ED0C_OFFSET))(this);
	}

	::System::Boolean __ctor_b__0_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_0AC72F8C133641A7___CTOR_B__0_0_OFFSET))(this, a1);
	}
};
