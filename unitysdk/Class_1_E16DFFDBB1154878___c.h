#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CD04D3296DF4C842_2;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_E16DFFDBB1154878___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7D8A10)
#define CLASS_1_E16DFFDBB1154878___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D8A50)
#define CLASS_1_E16DFFDBB1154878___C__UPDATEREMOVABLETASKS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C7D8A60)

inline static constexpr unsigned int Class_1_E16DFFDBB1154878___c_TypeDefinitionIndex = 37313;

class Class_1_E16DFFDBB1154878___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_3_CD04D3296DF4C842_2*>** StaticGet___9__5_0()
	{
		return (::System::Predicate_1<::Class_3_CD04D3296DF4C842_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E16DFFDBB1154878___c_TypeDefinitionIndex)->GetStaticField(0x1A7E0);
	}
	static ::Class_1_E16DFFDBB1154878___c** StaticGet___9()
	{
		return (::Class_1_E16DFFDBB1154878___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E16DFFDBB1154878___c_TypeDefinitionIndex)->GetStaticField(0x1A7E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E16DFFDBB1154878___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E16DFFDBB1154878___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _UpdateRemovableTasks_b__5_0(::Class_3_CD04D3296DF4C842_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_CD04D3296DF4C842_2*))((::PBYTE)hIl2Cpp + CLASS_1_E16DFFDBB1154878___C__UPDATEREMOVABLETASKS_B__5_0_OFFSET))(this, a1);
	}
};
