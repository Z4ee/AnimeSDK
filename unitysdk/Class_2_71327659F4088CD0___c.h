#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_71327659F4088CD0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10AA8190)
#define CLASS_2_71327659F4088CD0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA81D0)
#define CLASS_2_71327659F4088CD0___C___CHOOSENEXTPOINT_B__16_0_OFFSET UNITYSDK_OFFSET(0x10AA81E0)

inline static constexpr unsigned int Class_2_71327659F4088CD0___c_TypeDefinitionIndex = 48734;

class Class_2_71327659F4088CD0___c : public ::System::Object
{
public:
	static ::Class_2_71327659F4088CD0___c** StaticGet___9()
	{
		return (::Class_2_71327659F4088CD0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71327659F4088CD0___c_TypeDefinitionIndex)->GetStaticField(0x46420);
	}
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71327659F4088CD0___c_TypeDefinitionIndex)->GetStaticField(0x46428);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ChooseNextPoint_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> x, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> y)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0___C___CHOOSENEXTPOINT_B__16_0_OFFSET))(this, x, y);
	}
};
