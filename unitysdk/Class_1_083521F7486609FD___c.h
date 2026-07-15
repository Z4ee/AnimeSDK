#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20A9882BBF853CEE;

#define CLASS_1_083521F7486609FD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B6D5F0)
#define CLASS_1_083521F7486609FD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6D620)
#define CLASS_1_083521F7486609FD___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x16B6D630)

inline static constexpr unsigned int Class_1_083521F7486609FD___c_TypeDefinitionIndex = 57134;

class Class_1_083521F7486609FD___c : public ::System::Object
{
public:
	static ::Class_1_083521F7486609FD___c** StaticGet___9()
	{
		return (::Class_1_083521F7486609FD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_083521F7486609FD___c_TypeDefinitionIndex)->GetStaticField(0x5FEF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__37_0(::Class_1_20A9882BBF853CEE* a1, ::Class_1_20A9882BBF853CEE* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_20A9882BBF853CEE*, ::Class_1_20A9882BBF853CEE*))((::PBYTE)hIl2Cpp + CLASS_1_083521F7486609FD___C___CCTOR_B__37_0_OFFSET))(this, a1, a2);
	}
};
