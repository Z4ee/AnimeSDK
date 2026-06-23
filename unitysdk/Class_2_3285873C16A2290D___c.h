#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_3285873C16A2290D___C_METHOD_1_FAF809643E9055ED_OFFSET UNITYSDK_OFFSET(0x15D52110)
#define CLASS_2_3285873C16A2290D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D520C0)
#define CLASS_2_3285873C16A2290D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D52100)

inline static constexpr unsigned int Class_2_3285873C16A2290D___c_TypeDefinitionIndex = 79620;

class Class_2_3285873C16A2290D___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__8_1()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3285873C16A2290D___c_TypeDefinitionIndex)->GetStaticField(0x43BB0);
	}
	static ::Class_2_3285873C16A2290D___c** StaticGet___9()
	{
		return (::Class_2_3285873C16A2290D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3285873C16A2290D___c_TypeDefinitionIndex)->GetStaticField(0x43BB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3285873C16A2290D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3285873C16A2290D___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_FAF809643E9055ED()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3285873C16A2290D___C_METHOD_1_FAF809643E9055ED_OFFSET))(this);
	}
};
