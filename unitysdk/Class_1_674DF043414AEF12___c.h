#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_674DF043414AEF12___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12A078B0)
#define CLASS_1_674DF043414AEF12___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A07860)
#define CLASS_1_674DF043414AEF12___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A078A0)

inline static constexpr unsigned int Class_1_674DF043414AEF12___c_TypeDefinitionIndex = 69357;

class Class_1_674DF043414AEF12___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__5_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_674DF043414AEF12___c_TypeDefinitionIndex)->GetStaticField(0x46850);
	}
	static ::Class_1_674DF043414AEF12___c** StaticGet___9()
	{
		return (::Class_1_674DF043414AEF12___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_674DF043414AEF12___c_TypeDefinitionIndex)->GetStaticField(0x46858);
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
