#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_0693CD0AFBBF2A3B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8807E20)
#define CLASS_3_0693CD0AFBBF2A3B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8807E60)
#define CLASS_3_0693CD0AFBBF2A3B___C__SELECTENTITYIDS_B__4_0_OFFSET UNITYSDK_OFFSET(0x8807E70)

inline static constexpr unsigned int Class_3_0693CD0AFBBF2A3B___c_TypeDefinitionIndex = 63172;

class Class_3_0693CD0AFBBF2A3B___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0693CD0AFBBF2A3B___c_TypeDefinitionIndex)->GetStaticField(0x48B40);
	}
	static ::Class_3_0693CD0AFBBF2A3B___c** StaticGet___9()
	{
		return (::Class_3_0693CD0AFBBF2A3B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_0693CD0AFBBF2A3B___c_TypeDefinitionIndex)->GetStaticField(0x48B48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0693CD0AFBBF2A3B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0693CD0AFBBF2A3B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SelectEntityIDs_b__4_0(::Class_2_49CAB3DE74280C58* e)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_3_0693CD0AFBBF2A3B___C__SELECTENTITYIDS_B__4_0_OFFSET))(this, e);
	}
};
