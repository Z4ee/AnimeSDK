#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F41D242A20F8FE06;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_239C00D96B628A0E___C_METHOD_1_329E658EDAF0BBD5_OFFSET UNITYSDK_OFFSET(0xFE28DA0)
#define CLASS_3_239C00D96B628A0E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE28D50)
#define CLASS_3_239C00D96B628A0E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFE28D90)

inline static constexpr unsigned int Class_3_239C00D96B628A0E___c_TypeDefinitionIndex = 71944;

class Class_3_239C00D96B628A0E___c : public ::System::Object
{
public:
	static ::Class_3_239C00D96B628A0E___c** StaticGet___9()
	{
		return (::Class_3_239C00D96B628A0E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_239C00D96B628A0E___c_TypeDefinitionIndex)->GetStaticField(0x3D2A0);
	}
	static ::System::Action_1<::Class_3_F41D242A20F8FE06*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::Class_3_F41D242A20F8FE06*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_239C00D96B628A0E___c_TypeDefinitionIndex)->GetStaticField(0x3D2A8);
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
