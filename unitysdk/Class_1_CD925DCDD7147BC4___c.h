#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CD925DCDD7147BC4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A85CF00)
#define CLASS_1_CD925DCDD7147BC4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A85CF40)
#define CLASS_1_CD925DCDD7147BC4___C___EXECUTESWITCH_B__10_4_OFFSET UNITYSDK_OFFSET(0x1A85CF50)

inline static constexpr unsigned int Class_1_CD925DCDD7147BC4___c_TypeDefinitionIndex = 77254;

class Class_1_CD925DCDD7147BC4___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Exception*>** StaticGet___9__10_4()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD925DCDD7147BC4___c_TypeDefinitionIndex)->GetStaticField(0x66580);
	}
	static ::Class_1_CD925DCDD7147BC4___c** StaticGet___9()
	{
		return (::Class_1_CD925DCDD7147BC4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD925DCDD7147BC4___c_TypeDefinitionIndex)->GetStaticField(0x66588);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4___C__CTOR_OFFSET))(this);
	}

	::System::Void __ExecuteSwitch_b__10_4(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4___C___EXECUTESWITCH_B__10_4_OFFSET))(this, a1);
	}
};
