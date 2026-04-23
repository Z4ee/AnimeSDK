#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_8805A8000FB9DCF8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124C92A0)
#define CLASS_2_8805A8000FB9DCF8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124C92E0)
#define CLASS_2_8805A8000FB9DCF8___C__SETVISIBILITY_B__31_0_OFFSET UNITYSDK_OFFSET(0x124C92F0)

inline static constexpr unsigned int Class_2_8805A8000FB9DCF8___c_TypeDefinitionIndex = 66116;

class Class_2_8805A8000FB9DCF8___c : public ::System::Object
{
public:
	static ::Class_2_8805A8000FB9DCF8___c** StaticGet___9()
	{
		return (::Class_2_8805A8000FB9DCF8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8805A8000FB9DCF8___c_TypeDefinitionIndex)->GetStaticField(0x60710);
	}
	static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__31_0()
	{
		return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8805A8000FB9DCF8___c_TypeDefinitionIndex)->GetStaticField(0x60718);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8805A8000FB9DCF8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8805A8000FB9DCF8___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetVisibility_b__31_0(::System::Boolean v)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8805A8000FB9DCF8___C__SETVISIBILITY_B__31_0_OFFSET))(this, v);
	}
};
