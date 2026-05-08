#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_674DF043414AEF12___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12A3E0A0)
#define CLASS_1_674DF043414AEF12___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A3E050)
#define CLASS_1_674DF043414AEF12___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A3E090)

inline static constexpr unsigned int Class_1_674DF043414AEF12___c_TypeDefinitionIndex = 41353;

class Class_1_674DF043414AEF12___c : public ::System::Object
{
public:
	static ::Class_1_674DF043414AEF12___c** StaticGet___9()
	{
		return (::Class_1_674DF043414AEF12___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_674DF043414AEF12___c_TypeDefinitionIndex)->GetStaticField(0x3FC00);
	}
	static ::System::Action** StaticGet___9__5_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_674DF043414AEF12___c_TypeDefinitionIndex)->GetStaticField(0x3FC08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_674DF043414AEF12___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674DF043414AEF12___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_674DF043414AEF12___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
