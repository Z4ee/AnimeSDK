#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_24E67696AA5A0DC5___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14EA50B0)
#define CLASS_2_24E67696AA5A0DC5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EA5060)
#define CLASS_2_24E67696AA5A0DC5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14EA50A0)

inline static constexpr unsigned int Class_2_24E67696AA5A0DC5___c_TypeDefinitionIndex = 70069;

class Class_2_24E67696AA5A0DC5___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__33_19()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_24E67696AA5A0DC5___c_TypeDefinitionIndex)->GetStaticField(0x39870);
	}
	static ::Class_2_24E67696AA5A0DC5___c** StaticGet___9()
	{
		return (::Class_2_24E67696AA5A0DC5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_24E67696AA5A0DC5___c_TypeDefinitionIndex)->GetStaticField(0x39878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_24E67696AA5A0DC5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E67696AA5A0DC5___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E67696AA5A0DC5___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
