#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_C5500ADBC533E6AF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C07590)
#define CLASS_2_C5500ADBC533E6AF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C075D0)
#define CLASS_2_C5500ADBC533E6AF___C___ROLLDICEBYPRESET_B__8_0_OFFSET UNITYSDK_OFFSET(0x17C075E0)

inline static constexpr unsigned int Class_2_C5500ADBC533E6AF___c_TypeDefinitionIndex = 34293;

class Class_2_C5500ADBC533E6AF___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C5500ADBC533E6AF___c_TypeDefinitionIndex)->GetStaticField(0x6A2B0);
	}
	static ::Class_2_C5500ADBC533E6AF___c** StaticGet___9()
	{
		return (::Class_2_C5500ADBC533E6AF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C5500ADBC533E6AF___c_TypeDefinitionIndex)->GetStaticField(0x6A2B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C5500ADBC533E6AF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5500ADBC533E6AF___C__CTOR_OFFSET))(this);
	}

	::System::String* __RollDiceByPreset_b__8_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> item)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_C5500ADBC533E6AF___C___ROLLDICEBYPRESET_B__8_0_OFFSET))(this, item);
	}
};
