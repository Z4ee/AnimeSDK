#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E3044AFF91E5082A;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_CFE8E4989832E4BB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC8B50)
#define CLASS_1_CFE8E4989832E4BB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC8B90)
#define CLASS_1_CFE8E4989832E4BB___C___REFRESHISCOMPLETE_B__7_0_OFFSET UNITYSDK_OFFSET(0x15DC8BA0)

inline static constexpr unsigned int Class_1_CFE8E4989832E4BB___c_TypeDefinitionIndex = 79562;

class Class_1_CFE8E4989832E4BB___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_E3044AFF91E5082A*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::Class_1_E3044AFF91E5082A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE8E4989832E4BB___c_TypeDefinitionIndex)->GetStaticField(0x33040);
	}
	static ::Class_1_CFE8E4989832E4BB___c** StaticGet___9()
	{
		return (::Class_1_CFE8E4989832E4BB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFE8E4989832E4BB___c_TypeDefinitionIndex)->GetStaticField(0x33048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFE8E4989832E4BB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFE8E4989832E4BB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __RefreshIsComplete_b__7_0(::Class_1_E3044AFF91E5082A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E3044AFF91E5082A*))((::PBYTE)hIl2Cpp + CLASS_1_CFE8E4989832E4BB___C___REFRESHISCOMPLETE_B__7_0_OFFSET))(this, a1);
	}
};
