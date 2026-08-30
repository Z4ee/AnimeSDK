#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_323C8864E5E81CB3;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_32D4B2F060FD435D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172AD260)
#define CLASS_1_32D4B2F060FD435D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x172AD2A0)
#define CLASS_1_32D4B2F060FD435D___C__GETAGENDACONFIGS_B__6_0_OFFSET UNITYSDK_OFFSET(0x172AD2B0)

inline static constexpr unsigned int Class_1_32D4B2F060FD435D___c_TypeDefinitionIndex = 80408;

class Class_1_32D4B2F060FD435D___c : public ::System::Object
{
public:
	static ::Class_1_32D4B2F060FD435D___c** StaticGet___9()
	{
		return (::Class_1_32D4B2F060FD435D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32D4B2F060FD435D___c_TypeDefinitionIndex)->GetStaticField(0x230D0);
	}
	static ::System::Comparison_1<::Class_1_323C8864E5E81CB3*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::Class_1_323C8864E5E81CB3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32D4B2F060FD435D___c_TypeDefinitionIndex)->GetStaticField(0x230D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32D4B2F060FD435D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32D4B2F060FD435D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetAgendaConfigs_b__6_0(::Class_1_323C8864E5E81CB3* a1, ::Class_1_323C8864E5E81CB3* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_323C8864E5E81CB3*, ::Class_1_323C8864E5E81CB3*))((::PBYTE)hIl2Cpp + CLASS_1_32D4B2F060FD435D___C__GETAGENDACONFIGS_B__6_0_OFFSET))(this, a1, a2);
	}
};
