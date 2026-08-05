#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_29A17F430E183330;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_15825A60D2088167___C_METHOD_1_F9CACB0AE4F2192A_OFFSET UNITYSDK_OFFSET(0x119C9D50)
#define CLASS_3_15825A60D2088167___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119C9D00)
#define CLASS_3_15825A60D2088167___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119C9D40)

inline static constexpr unsigned int Class_3_15825A60D2088167___c_TypeDefinitionIndex = 79842;

class Class_3_15825A60D2088167___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_29A17F430E183330*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_29A17F430E183330*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_15825A60D2088167___c_TypeDefinitionIndex)->GetStaticField(0x46240);
	}
	static ::Class_3_15825A60D2088167___c** StaticGet___9()
	{
		return (::Class_3_15825A60D2088167___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_15825A60D2088167___c_TypeDefinitionIndex)->GetStaticField(0x46248);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_15825A60D2088167___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15825A60D2088167___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F9CACB0AE4F2192A(::Class_3_29A17F430E183330* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_29A17F430E183330*))((::PBYTE)hIl2Cpp + CLASS_3_15825A60D2088167___C_METHOD_1_F9CACB0AE4F2192A_OFFSET))(this, a1);
	}
};
