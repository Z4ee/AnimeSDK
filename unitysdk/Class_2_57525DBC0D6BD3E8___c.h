#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_57525DBC0D6BD3E8___C_METHOD_1_0FE37BD6A2CAF4AB_OFFSET UNITYSDK_OFFSET(0xF89D8E0)
#define CLASS_2_57525DBC0D6BD3E8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF89D890)
#define CLASS_2_57525DBC0D6BD3E8___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF89D8D0)

inline static constexpr unsigned int Class_2_57525DBC0D6BD3E8___c_TypeDefinitionIndex = 41068;

class Class_2_57525DBC0D6BD3E8___c : public ::System::Object
{
public:
	static ::Class_2_57525DBC0D6BD3E8___c** StaticGet___9()
	{
		return (::Class_2_57525DBC0D6BD3E8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_57525DBC0D6BD3E8___c_TypeDefinitionIndex)->GetStaticField(0x4C730);
	}
	static ::System::Action_1<::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_57525DBC0D6BD3E8___c_TypeDefinitionIndex)->GetStaticField(0x4C738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_57525DBC0D6BD3E8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57525DBC0D6BD3E8___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0FE37BD6A2CAF4AB(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + CLASS_2_57525DBC0D6BD3E8___C_METHOD_1_0FE37BD6A2CAF4AB_OFFSET))(this, a1);
	}
};
