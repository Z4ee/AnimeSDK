#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_F962337DE21CB9BC___C_METHOD_1_C860B930B334C9E8_OFFSET UNITYSDK_OFFSET(0x19EC5810)
#define CLASS_2_F962337DE21CB9BC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EC57C0)
#define CLASS_2_F962337DE21CB9BC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC5800)

inline static constexpr unsigned int Class_2_F962337DE21CB9BC___c_TypeDefinitionIndex = 83827;

class Class_2_F962337DE21CB9BC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::UInt32>** StaticGet___9__31_0()
	{
		return (::System::Func_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F962337DE21CB9BC___c_TypeDefinitionIndex)->GetStaticField(0x39070);
	}
	static ::Class_2_F962337DE21CB9BC___c** StaticGet___9()
	{
		return (::Class_2_F962337DE21CB9BC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F962337DE21CB9BC___c_TypeDefinitionIndex)->GetStaticField(0x39078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F962337DE21CB9BC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F962337DE21CB9BC___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_C860B930B334C9E8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F962337DE21CB9BC___C_METHOD_1_C860B930B334C9E8_OFFSET))(this);
	}
};
