#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_6CC0939E8A15669B_Class_3_C9ABD9C89B357622;
class Class_1_A72CA636B45F4DE2;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_92A2DA32F1B2DABE_GET_CACHEGOALWEIGHTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x18B72D10)
#define CLASS_1_92A2DA32F1B2DABE_GET_ISFORCAT_OFFSET UNITYSDK_OFFSET(0x18B72D50)
#define CLASS_1_92A2DA32F1B2DABE_GET_JUMPCNTSAFTERCACHE_OFFSET UNITYSDK_OFFSET(0x18B72D30)
#define CLASS_1_92A2DA32F1B2DABE_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x18B72BE0)
#define CLASS_1_92A2DA32F1B2DABE_METHOD_1_423126E9C255DCEB_OFFSET UNITYSDK_OFFSET(0x18B72AC0)
#define CLASS_1_92A2DA32F1B2DABE_METHOD_1_93DBB8C2DD231312_OFFSET UNITYSDK_OFFSET(0x18B72C70)
#define CLASS_1_92A2DA32F1B2DABE_METHOD_1_A465B8778ADBEA62_OFFSET UNITYSDK_OFFSET(0x18B72B00)
#define CLASS_1_92A2DA32F1B2DABE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B72CC0)
#define CLASS_1_92A2DA32F1B2DABE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18B72D00)
#define CLASS_1_92A2DA32F1B2DABE_SET_CACHEGOALWEIGHTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x18B72D20)
#define CLASS_1_92A2DA32F1B2DABE_SET_ISFORCAT_OFFSET UNITYSDK_OFFSET(0x18B72D60)
#define CLASS_1_92A2DA32F1B2DABE_SET_JUMPCNTSAFTERCACHE_OFFSET UNITYSDK_OFFSET(0x18B72D40)
#define CLASS_1_92A2DA32F1B2DABE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B72D70)

inline static constexpr unsigned int Class_1_92A2DA32F1B2DABE_TypeDefinitionIndex = 34907;

class Class_1_92A2DA32F1B2DABE : public ::System::Object
{
public:
	::Class_1_6CC0939E8A15669B_Class_3_C9ABD9C89B357622* _CacheGoalWeightCalculator_k__BackingField; // 0x10
	::System::Boolean _IsForCat_k__BackingField; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::UInt32 _JumpCntsAfterCache_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* Method_1_423126E9C255DCEB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_METHOD_1_423126E9C255DCEB_OFFSET))(this);
	}

	::System::Boolean Method_1_A465B8778ADBEA62(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_METHOD_1_A465B8778ADBEA62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93DBB8C2DD231312(::Class_1_6CC0939E8A15669B_Class_3_C9ABD9C89B357622* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CC0939E8A15669B_Class_3_C9ABD9C89B357622*))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_METHOD_1_93DBB8C2DD231312_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::Class_1_6CC0939E8A15669B_Class_3_C9ABD9C89B357622* get_CacheGoalWeightCalculator()
	{
		return ((::Class_1_6CC0939E8A15669B_Class_3_C9ABD9C89B357622*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_GET_CACHEGOALWEIGHTCALCULATOR_OFFSET))(this);
	}

	::System::Void set_CacheGoalWeightCalculator(::Class_1_6CC0939E8A15669B_Class_3_C9ABD9C89B357622* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CC0939E8A15669B_Class_3_C9ABD9C89B357622*))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_SET_CACHEGOALWEIGHTCALCULATOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_JumpCntsAfterCache()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_GET_JUMPCNTSAFTERCACHE_OFFSET))(this);
	}

	::System::Void set_JumpCntsAfterCache(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_SET_JUMPCNTSAFTERCACHE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsForCat()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_GET_ISFORCAT_OFFSET))(this);
	}

	::System::Void set_IsForCat(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92A2DA32F1B2DABE_SET_ISFORCAT_OFFSET))(this, a1);
	}
};
