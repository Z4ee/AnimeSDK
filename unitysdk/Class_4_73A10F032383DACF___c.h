#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_73A10F032383DACF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11913700)
#define CLASS_4_73A10F032383DACF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11913740)
#define CLASS_4_73A10F032383DACF___C__SELECTENTITYIDS_B__5_0_OFFSET UNITYSDK_OFFSET(0x11913750)

inline static constexpr unsigned int Class_4_73A10F032383DACF___c_TypeDefinitionIndex = 63178;

class Class_4_73A10F032383DACF___c : public ::System::Object
{
public:
	static ::Class_4_73A10F032383DACF___c** StaticGet___9()
	{
		return (::Class_4_73A10F032383DACF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_73A10F032383DACF___c_TypeDefinitionIndex)->GetStaticField(0x47FF0);
	}
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_73A10F032383DACF___c_TypeDefinitionIndex)->GetStaticField(0x47FF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SelectEntityIDs_b__5_0(::Class_2_49CAB3DE74280C58* x)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF___C__SELECTENTITYIDS_B__5_0_OFFSET))(this, x);
	}
};
