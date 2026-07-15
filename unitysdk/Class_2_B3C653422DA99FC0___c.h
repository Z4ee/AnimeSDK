#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_B3C653422DA99FC0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D28D30)
#define CLASS_2_B3C653422DA99FC0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D28D70)
#define CLASS_2_B3C653422DA99FC0___C___TRYGETPROPERTYDESC_B__7_0_OFFSET UNITYSDK_OFFSET(0x14D28D80)

inline static constexpr unsigned int Class_2_B3C653422DA99FC0___c_TypeDefinitionIndex = 62368;

class Class_2_B3C653422DA99FC0___c : public ::System::Object
{
public:
	static ::Class_2_B3C653422DA99FC0___c** StaticGet___9()
	{
		return (::Class_2_B3C653422DA99FC0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3C653422DA99FC0___c_TypeDefinitionIndex)->GetStaticField(0x6BC50);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3C653422DA99FC0___c_TypeDefinitionIndex)->GetStaticField(0x6BC58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B3C653422DA99FC0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3C653422DA99FC0___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __TryGetPropertyDesc_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_2_B3C653422DA99FC0___C___TRYGETPROPERTYDESC_B__7_0_OFFSET))(this, a1);
	}
};
