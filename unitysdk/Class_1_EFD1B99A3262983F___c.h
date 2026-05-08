#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ServerListInfo; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_EFD1B99A3262983F___C_METHOD_1_FCB0DDB128418743_OFFSET UNITYSDK_OFFSET(0x136937D0)
#define CLASS_1_EFD1B99A3262983F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13693780)
#define CLASS_1_EFD1B99A3262983F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x136937C0)

inline static constexpr unsigned int Class_1_EFD1B99A3262983F___c_TypeDefinitionIndex = 79246;

class Class_1_EFD1B99A3262983F___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::ServerListInfo*>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::MoleMole::ServerListInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EFD1B99A3262983F___c_TypeDefinitionIndex)->GetStaticField(0x44200);
	}
	static ::Class_1_EFD1B99A3262983F___c** StaticGet___9()
	{
		return (::Class_1_EFD1B99A3262983F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EFD1B99A3262983F___c_TypeDefinitionIndex)->GetStaticField(0x44208);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_FCB0DDB128418743(::MoleMole::ServerListInfo* a1, ::MoleMole::ServerListInfo* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ServerListInfo*, ::MoleMole::ServerListInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F___C_METHOD_1_FCB0DDB128418743_OFFSET))(this, a1, a2);
	}
};
