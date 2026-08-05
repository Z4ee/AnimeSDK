#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_EE9AE7CCEB67E962;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F045B8C450CAFB48___C_METHOD_1_5F9ED0A931125344_OFFSET UNITYSDK_OFFSET(0x1345A010)
#define CLASS_3_F045B8C450CAFB48___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13459FC0)
#define CLASS_3_F045B8C450CAFB48___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1345A000)

inline static constexpr unsigned int Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex = 84302;

class Class_3_F045B8C450CAFB48___c : public ::System::Object
{
public:
	static ::Class_3_F045B8C450CAFB48___c** StaticGet___9()
	{
		return (::Class_3_F045B8C450CAFB48___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex)->GetStaticField(0x45A90);
	}
	static ::System::Action_1<::Class_3_EE9AE7CCEB67E962*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_EE9AE7CCEB67E962*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex)->GetStaticField(0x45A98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5F9ED0A931125344(::Class_3_EE9AE7CCEB67E962* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EE9AE7CCEB67E962*))((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C_METHOD_1_5F9ED0A931125344_OFFSET))(this, a1);
	}
};
