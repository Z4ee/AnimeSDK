#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2E8C3F3A14243FF8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A9AAE0)
#define CLASS_2_2E8C3F3A14243FF8___C__CONFIRMLOAN_B__7_2_OFFSET UNITYSDK_OFFSET(0x19A9AB30)
#define CLASS_2_2E8C3F3A14243FF8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9AB20)

inline static constexpr unsigned int Class_2_2E8C3F3A14243FF8___c_TypeDefinitionIndex = 75983;

class Class_2_2E8C3F3A14243FF8___c : public ::System::Object
{
public:
	static ::Class_2_2E8C3F3A14243FF8___c** StaticGet___9()
	{
		return (::Class_2_2E8C3F3A14243FF8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E8C3F3A14243FF8___c_TypeDefinitionIndex)->GetStaticField(0x573C0);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__7_2()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2E8C3F3A14243FF8___c_TypeDefinitionIndex)->GetStaticField(0x573C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8___C__CTOR_OFFSET))(this);
	}

	::System::Void _ConfirmLoan_b__7_2(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8___C__CONFIRMLOAN_B__7_2_OFFSET))(this, a1);
	}
};
