#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_D6A7F864B88B42DF___C_METHOD_1_FAF809643E9055ED_OFFSET UNITYSDK_OFFSET(0x10F217A0)
#define CLASS_2_D6A7F864B88B42DF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F21750)
#define CLASS_2_D6A7F864B88B42DF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F21790)

inline static constexpr unsigned int Class_2_D6A7F864B88B42DF___c_TypeDefinitionIndex = 76034;

class Class_2_D6A7F864B88B42DF___c : public ::System::Object
{
public:
	static ::Class_2_D6A7F864B88B42DF___c** StaticGet___9()
	{
		return (::Class_2_D6A7F864B88B42DF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D6A7F864B88B42DF___c_TypeDefinitionIndex)->GetStaticField(0x4DB70);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__8_3()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D6A7F864B88B42DF___c_TypeDefinitionIndex)->GetStaticField(0x4DB78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D6A7F864B88B42DF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A7F864B88B42DF___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_FAF809643E9055ED()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6A7F864B88B42DF___C_METHOD_1_FAF809643E9055ED_OFFSET))(this);
	}
};
