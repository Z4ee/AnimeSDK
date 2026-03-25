#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20A9882BBF853CEE;

#define CLASS_1_54124C7961E65E42___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BF1850)
#define CLASS_1_54124C7961E65E42___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10BF1880)
#define CLASS_1_54124C7961E65E42___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x10BF1890)

inline static constexpr unsigned int Class_1_54124C7961E65E42___c_TypeDefinitionIndex = 48413;

class Class_1_54124C7961E65E42___c : public ::System::Object
{
public:
	static ::Class_1_54124C7961E65E42___c** StaticGet___9()
	{
		return (::Class_1_54124C7961E65E42___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54124C7961E65E42___c_TypeDefinitionIndex)->GetStaticField(0x2C0B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__37_0(::Class_1_20A9882BBF853CEE* a, ::Class_1_20A9882BBF853CEE* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_20A9882BBF853CEE*, ::Class_1_20A9882BBF853CEE*))((::PBYTE)hIl2Cpp + CLASS_1_54124C7961E65E42___C___CCTOR_B__37_0_OFFSET))(this, a, b);
	}
};
