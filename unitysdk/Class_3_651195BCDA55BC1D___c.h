#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_651195BCDA55BC1D___C_METHOD_1_133882B0AF594CA1_OFFSET UNITYSDK_OFFSET(0xFD4FCD0)
#define CLASS_3_651195BCDA55BC1D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD4FC80)
#define CLASS_3_651195BCDA55BC1D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFD4FCC0)

inline static constexpr unsigned int Class_3_651195BCDA55BC1D___c_TypeDefinitionIndex = 38107;

class Class_3_651195BCDA55BC1D___c : public ::System::Object
{
public:
	static ::Class_3_651195BCDA55BC1D___c** StaticGet___9()
	{
		return (::Class_3_651195BCDA55BC1D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_651195BCDA55BC1D___c_TypeDefinitionIndex)->GetStaticField(0x427A0);
	}
	static ::System::Action_1<::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_651195BCDA55BC1D___c_TypeDefinitionIndex)->GetStaticField(0x427A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_133882B0AF594CA1(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D___C_METHOD_1_133882B0AF594CA1_OFFSET))(this, a1);
	}
};
