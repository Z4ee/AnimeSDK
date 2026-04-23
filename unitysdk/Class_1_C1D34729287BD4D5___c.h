#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_C1D34729287BD4D5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D33CD0)
#define CLASS_1_C1D34729287BD4D5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D33D10)
#define CLASS_1_C1D34729287BD4D5___C__ISDICECONTENTHASNOFAKIND_B__7_0_OFFSET UNITYSDK_OFFSET(0x17D33D20)

inline static constexpr unsigned int Class_1_C1D34729287BD4D5___c_TypeDefinitionIndex = 34071;

class Class_1_C1D34729287BD4D5___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1D34729287BD4D5___c_TypeDefinitionIndex)->GetStaticField(0x5EF50);
	}
	static ::Class_1_C1D34729287BD4D5___c** StaticGet___9()
	{
		return (::Class_1_C1D34729287BD4D5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1D34729287BD4D5___c_TypeDefinitionIndex)->GetStaticField(0x5EF58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1D34729287BD4D5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1D34729287BD4D5___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsDiceContentHasNOfAKind_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> pair)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_C1D34729287BD4D5___C__ISDICECONTENTHASNOFAKIND_B__7_0_OFFSET))(this, pair);
	}
};
