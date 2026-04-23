#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_657;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_6909BB516E50EA23___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x90D4650)
#define CLASS_2_6909BB516E50EA23___C__CTOR_OFFSET UNITYSDK_OFFSET(0x90D4690)
#define CLASS_2_6909BB516E50EA23___C___ONPLAYERFINISH_B__32_0_OFFSET UNITYSDK_OFFSET(0x90D46A0)

inline static constexpr unsigned int Class_2_6909BB516E50EA23___c_TypeDefinitionIndex = 68315;

class Class_2_6909BB516E50EA23___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_657*>** StaticGet___9__32_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::Class_1_D17272E82AE804C2_657*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6909BB516E50EA23___c_TypeDefinitionIndex)->GetStaticField(0x5F970);
	}
	static ::Class_2_6909BB516E50EA23___c** StaticGet___9()
	{
		return (::Class_2_6909BB516E50EA23___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6909BB516E50EA23___c_TypeDefinitionIndex)->GetStaticField(0x5F978);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6909BB516E50EA23___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6909BB516E50EA23___C__CTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_657* __OnPlayerFinish_b__32_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> item)
	{
		return ((::Class_1_D17272E82AE804C2_657*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_2_6909BB516E50EA23___C___ONPLAYERFINISH_B__32_0_OFFSET))(this, item);
	}
};
