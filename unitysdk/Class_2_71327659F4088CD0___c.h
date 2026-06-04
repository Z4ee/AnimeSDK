#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_71327659F4088CD0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12AA7560)
#define CLASS_2_71327659F4088CD0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA75A0)
#define CLASS_2_71327659F4088CD0___C___CHOOSENEXTPOINT_B__16_0_OFFSET UNITYSDK_OFFSET(0x12AA75B0)

inline static constexpr unsigned int Class_2_71327659F4088CD0___c_TypeDefinitionIndex = 56234;

class Class_2_71327659F4088CD0___c : public ::System::Object
{
public:
	static ::Class_2_71327659F4088CD0___c** StaticGet___9()
	{
		return (::Class_2_71327659F4088CD0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71327659F4088CD0___c_TypeDefinitionIndex)->GetStaticField(0x2A4B0);
	}
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71327659F4088CD0___c_TypeDefinitionIndex)->GetStaticField(0x2A4B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ChooseNextPoint_b__16_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> a1, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_71327659F4088CD0___C___CHOOSENEXTPOINT_B__16_0_OFFSET))(this, a1, a2);
	}
};
