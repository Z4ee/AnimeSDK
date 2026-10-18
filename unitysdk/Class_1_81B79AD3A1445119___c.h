#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_81B79AD3A1445119___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154F5F90)
#define CLASS_1_81B79AD3A1445119___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154F5FD0)
#define CLASS_1_81B79AD3A1445119___C___ENDMATCHANDADVANCE_B__19_1_OFFSET UNITYSDK_OFFSET(0x154F5FE0)

inline static constexpr unsigned int Class_1_81B79AD3A1445119___c_TypeDefinitionIndex = 81848;

class Class_1_81B79AD3A1445119___c : public ::System::Object
{
public:
	static ::Class_1_81B79AD3A1445119___c** StaticGet___9()
	{
		return (::Class_1_81B79AD3A1445119___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81B79AD3A1445119___c_TypeDefinitionIndex)->GetStaticField(0x3EE10);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__19_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81B79AD3A1445119___c_TypeDefinitionIndex)->GetStaticField(0x3EE18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81B79AD3A1445119___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81B79AD3A1445119___C__CTOR_OFFSET))(this);
	}

	::System::Void __EndMatchAndAdvance_b__19_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_81B79AD3A1445119___C___ENDMATCHANDADVANCE_B__19_1_OFFSET))(this, a1);
	}
};
