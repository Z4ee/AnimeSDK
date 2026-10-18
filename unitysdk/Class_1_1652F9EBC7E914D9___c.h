#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B5BC5F7531D3B01;
class Class_1_E3044AFF91E5082A;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_1652F9EBC7E914D9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C54B0E0)
#define CLASS_1_1652F9EBC7E914D9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54B120)
#define CLASS_1_1652F9EBC7E914D9___C__GET_ISALLREQUIREDMET_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C54B130)
#define CLASS_1_1652F9EBC7E914D9___C___ITERATEOPTIONALTRACKERS_B__36_0_OFFSET UNITYSDK_OFFSET(0x1C54B190)

inline static constexpr unsigned int Class_1_1652F9EBC7E914D9___c_TypeDefinitionIndex = 41825;

class Class_1_1652F9EBC7E914D9___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_E3044AFF91E5082A*, ::System::Boolean>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Class_1_E3044AFF91E5082A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1652F9EBC7E914D9___c_TypeDefinitionIndex)->GetStaticField(0x23640);
	}
	static ::System::Func_2<::Class_1_7B5BC5F7531D3B01*, ::Class_1_E3044AFF91E5082A*>** StaticGet___9__36_0()
	{
		return (::System::Func_2<::Class_1_7B5BC5F7531D3B01*, ::Class_1_E3044AFF91E5082A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1652F9EBC7E914D9___c_TypeDefinitionIndex)->GetStaticField(0x23648);
	}
	static ::Class_1_1652F9EBC7E914D9___c** StaticGet___9()
	{
		return (::Class_1_1652F9EBC7E914D9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1652F9EBC7E914D9___c_TypeDefinitionIndex)->GetStaticField(0x23650);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_IsAllRequiredMet_b__5_0(::Class_1_E3044AFF91E5082A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E3044AFF91E5082A*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9___C__GET_ISALLREQUIREDMET_B__5_0_OFFSET))(this, a1);
	}

	::Class_1_E3044AFF91E5082A* __IterateOptionalTrackers_b__36_0(::Class_1_7B5BC5F7531D3B01* a1)
	{
		return ((::Class_1_E3044AFF91E5082A*(*)(::PVOID, ::Class_1_7B5BC5F7531D3B01*))((::PBYTE)hIl2Cpp + CLASS_1_1652F9EBC7E914D9___C___ITERATEOPTIONALTRACKERS_B__36_0_OFFSET))(this, a1);
	}
};
