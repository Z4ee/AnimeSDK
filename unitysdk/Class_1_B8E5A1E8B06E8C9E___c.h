#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_37C86F8E7774C578;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B8E5A1E8B06E8C9E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C1D70)
#define CLASS_1_B8E5A1E8B06E8C9E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156C1DB0)
#define CLASS_1_B8E5A1E8B06E8C9E___C__HANDLEASSISTANTRECOMMENDCHANGED_B__40_0_OFFSET UNITYSDK_OFFSET(0x156C1DC0)

inline static constexpr unsigned int Class_1_B8E5A1E8B06E8C9E___c_TypeDefinitionIndex = 79465;

class Class_1_B8E5A1E8B06E8C9E___c : public ::System::Object
{
public:
	static ::Class_1_B8E5A1E8B06E8C9E___c** StaticGet___9()
	{
		return (::Class_1_B8E5A1E8B06E8C9E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8E5A1E8B06E8C9E___c_TypeDefinitionIndex)->GetStaticField(0x55640);
	}
	static ::System::Func_2<::Class_1_37C86F8E7774C578*, ::System::Boolean>** StaticGet___9__40_0()
	{
		return (::System::Func_2<::Class_1_37C86F8E7774C578*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8E5A1E8B06E8C9E___c_TypeDefinitionIndex)->GetStaticField(0x55648);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _HandleAssistantRecommendChanged_b__40_0(::Class_1_37C86F8E7774C578* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_37C86F8E7774C578*))((::PBYTE)hIl2Cpp + CLASS_1_B8E5A1E8B06E8C9E___C__HANDLEASSISTANTRECOMMENDCHANGED_B__40_0_OFFSET))(this, a1);
	}
};
