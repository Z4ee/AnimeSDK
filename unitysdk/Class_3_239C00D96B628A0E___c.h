#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F41D242A20F8FE06;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_239C00D96B628A0E___C_METHOD_1_329E658EDAF0BBD5_OFFSET UNITYSDK_OFFSET(0x17E6A3D0)
#define CLASS_3_239C00D96B628A0E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E6A380)
#define CLASS_3_239C00D96B628A0E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6A3C0)

inline static constexpr unsigned int Class_3_239C00D96B628A0E___c_TypeDefinitionIndex = 72559;

class Class_3_239C00D96B628A0E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_F41D242A20F8FE06*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_3_F41D242A20F8FE06*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_239C00D96B628A0E___c_TypeDefinitionIndex)->GetStaticField(0x3EB80);
	}
	static ::Class_3_239C00D96B628A0E___c** StaticGet___9()
	{
		return (::Class_3_239C00D96B628A0E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_239C00D96B628A0E___c_TypeDefinitionIndex)->GetStaticField(0x3EB88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_239C00D96B628A0E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_239C00D96B628A0E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_329E658EDAF0BBD5(::Class_3_F41D242A20F8FE06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_3_239C00D96B628A0E___C_METHOD_1_329E658EDAF0BBD5_OFFSET))(this, a1);
	}
};
