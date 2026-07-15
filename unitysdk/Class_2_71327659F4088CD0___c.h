#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_71327659F4088CD0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x185D0C20)
#define CLASS_2_71327659F4088CD0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x185D0C60)
#define CLASS_2_71327659F4088CD0___C___CHOOSENEXTPOINT_B__16_0_OFFSET UNITYSDK_OFFSET(0x185D0C70)

inline static constexpr unsigned int Class_2_71327659F4088CD0___c_TypeDefinitionIndex = 57473;

class Class_2_71327659F4088CD0___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71327659F4088CD0___c_TypeDefinitionIndex)->GetStaticField(0x2F2C0);
	}
	static ::Class_2_71327659F4088CD0___c** StaticGet___9()
	{
		return (::Class_2_71327659F4088CD0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71327659F4088CD0___c_TypeDefinitionIndex)->GetStaticField(0x2F2C8);
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
