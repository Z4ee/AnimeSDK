#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_0A5DA237EA1EBA1E;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F045B8C450CAFB48___C_METHOD_1_5F9ED0A931125344_OFFSET UNITYSDK_OFFSET(0x12367C60)
#define CLASS_3_F045B8C450CAFB48___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12367C10)
#define CLASS_3_F045B8C450CAFB48___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12367C50)

inline static constexpr unsigned int Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex = 72614;

class Class_3_F045B8C450CAFB48___c : public ::System::Object
{
public:
	static ::Class_3_F045B8C450CAFB48___c** StaticGet___9()
	{
		return (::Class_3_F045B8C450CAFB48___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex)->GetStaticField(0x3D5B0);
	}
	static ::System::Action_1<::Class_3_0A5DA237EA1EBA1E*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_0A5DA237EA1EBA1E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex)->GetStaticField(0x3D5B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5F9ED0A931125344(::Class_3_0A5DA237EA1EBA1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0A5DA237EA1EBA1E*))((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C_METHOD_1_5F9ED0A931125344_OFFSET))(this, a1);
	}
};
