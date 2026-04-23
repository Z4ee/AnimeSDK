#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_49213828B4BC8F63;
class Class_1_70A81001BF2D6960_Class_3_C9ABD9C89B357622;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CF741C7505FDF9F1_GET_CACHEGOALWEIGHTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x17BFF4B0)
#define CLASS_1_CF741C7505FDF9F1_GET_ISFORCAT_OFFSET UNITYSDK_OFFSET(0x17BFF4F0)
#define CLASS_1_CF741C7505FDF9F1_GET_JUMPCNTSAFTERCACHE_OFFSET UNITYSDK_OFFSET(0x17BFF4D0)
#define CLASS_1_CF741C7505FDF9F1_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x17BFF380)
#define CLASS_1_CF741C7505FDF9F1_METHOD_1_423126E9C255DCEB_OFFSET UNITYSDK_OFFSET(0x17BFF1D0)
#define CLASS_1_CF741C7505FDF9F1_METHOD_1_93DBB8C2DD231312_OFFSET UNITYSDK_OFFSET(0x17BFF410)
#define CLASS_1_CF741C7505FDF9F1_METHOD_1_BCCDA5621BFCE6D1_OFFSET UNITYSDK_OFFSET(0x17BFF210)
#define CLASS_1_CF741C7505FDF9F1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17BFF460)
#define CLASS_1_CF741C7505FDF9F1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17BFF4A0)
#define CLASS_1_CF741C7505FDF9F1_SET_CACHEGOALWEIGHTCALCULATOR_OFFSET UNITYSDK_OFFSET(0x17BFF4C0)
#define CLASS_1_CF741C7505FDF9F1_SET_ISFORCAT_OFFSET UNITYSDK_OFFSET(0x17BFF500)
#define CLASS_1_CF741C7505FDF9F1_SET_JUMPCNTSAFTERCACHE_OFFSET UNITYSDK_OFFSET(0x17BFF4E0)
#define CLASS_1_CF741C7505FDF9F1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFF510)

inline static constexpr unsigned int Class_1_CF741C7505FDF9F1_TypeDefinitionIndex = 34624;

class Class_1_CF741C7505FDF9F1 : public ::System::Object
{
public:
	::Class_1_70A81001BF2D6960_Class_3_C9ABD9C89B357622* _CacheGoalWeightCalculator_k__BackingField; // 0x10
	::System::UInt32 _JumpCntsAfterCache_k__BackingField; // 0x18
	::System::Boolean Field_1_0; // 0x1C
	::System::Boolean _IsForCat_k__BackingField; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* Method_1_423126E9C255DCEB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_METHOD_1_423126E9C255DCEB_OFFSET))(this);
	}

	::System::Boolean Method_1_BCCDA5621BFCE6D1(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_METHOD_1_BCCDA5621BFCE6D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93DBB8C2DD231312(::Class_1_70A81001BF2D6960_Class_3_C9ABD9C89B357622* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70A81001BF2D6960_Class_3_C9ABD9C89B357622*))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_METHOD_1_93DBB8C2DD231312_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::Class_1_70A81001BF2D6960_Class_3_C9ABD9C89B357622* get_CacheGoalWeightCalculator()
	{
		return ((::Class_1_70A81001BF2D6960_Class_3_C9ABD9C89B357622*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_GET_CACHEGOALWEIGHTCALCULATOR_OFFSET))(this);
	}

	::System::Void set_CacheGoalWeightCalculator(::Class_1_70A81001BF2D6960_Class_3_C9ABD9C89B357622* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70A81001BF2D6960_Class_3_C9ABD9C89B357622*))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_SET_CACHEGOALWEIGHTCALCULATOR_OFFSET))(this, value);
	}

	::System::UInt32 get_JumpCntsAfterCache()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_GET_JUMPCNTSAFTERCACHE_OFFSET))(this);
	}

	::System::Void set_JumpCntsAfterCache(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_SET_JUMPCNTSAFTERCACHE_OFFSET))(this, value);
	}

	::System::Boolean get_IsForCat()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_GET_ISFORCAT_OFFSET))(this);
	}

	::System::Void set_IsForCat(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CF741C7505FDF9F1_SET_ISFORCAT_OFFSET))(this, value);
	}
};
