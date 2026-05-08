#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5A74728607476CA3;

#define CLASS_3_5A74728607476CA3___C_METHOD_1_63E22A79D2DA8C7B_OFFSET UNITYSDK_OFFSET(0x1C23D690)
#define CLASS_3_5A74728607476CA3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C23D640)
#define CLASS_3_5A74728607476CA3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C23D680)

inline static constexpr unsigned int Class_3_5A74728607476CA3___c_TypeDefinitionIndex = 9271;

class Class_3_5A74728607476CA3___c : public ::System::Object
{
public:
	static ::Class_3_5A74728607476CA3___c** StaticGet___9()
	{
		return (::Class_3_5A74728607476CA3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5A74728607476CA3___c_TypeDefinitionIndex)->GetStaticField(0x84B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5A74728607476CA3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A74728607476CA3___C__CTOR_OFFSET))(this);
	}

	::Class_3_5A74728607476CA3* Method_1_63E22A79D2DA8C7B()
	{
		return ((::Class_3_5A74728607476CA3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A74728607476CA3___C_METHOD_1_63E22A79D2DA8C7B_OFFSET))(this);
	}
};
