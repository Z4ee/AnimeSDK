#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_D85E5E0CE519F26A;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_0F09057DF4F3DE6D___C_METHOD_1_8AC175EE11DDE09E_OFFSET UNITYSDK_OFFSET(0x124E6B10)
#define CLASS_3_0F09057DF4F3DE6D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124E6AC0)
#define CLASS_3_0F09057DF4F3DE6D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124E6B00)

inline static constexpr unsigned int Class_3_0F09057DF4F3DE6D___c_TypeDefinitionIndex = 66960;

class Class_3_0F09057DF4F3DE6D___c : public ::System::Object
{
public:
	static ::Class_3_0F09057DF4F3DE6D___c** StaticGet___9()
	{
		return (::Class_3_0F09057DF4F3DE6D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0F09057DF4F3DE6D___c_TypeDefinitionIndex)->GetStaticField(0x45D10);
	}
	static ::System::Action_1<::Class_3_D85E5E0CE519F26A*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_D85E5E0CE519F26A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0F09057DF4F3DE6D___c_TypeDefinitionIndex)->GetStaticField(0x45D18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8AC175EE11DDE09E(::Class_3_D85E5E0CE519F26A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D85E5E0CE519F26A*))((::PBYTE)hIl2Cpp + CLASS_3_0F09057DF4F3DE6D___C_METHOD_1_8AC175EE11DDE09E_OFFSET))(this, a1);
	}
};
