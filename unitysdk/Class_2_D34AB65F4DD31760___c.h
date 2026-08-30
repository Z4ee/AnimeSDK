#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_D34AB65F4DD31760___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC14FE60)
#define CLASS_2_D34AB65F4DD31760___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC14FEA0)
#define CLASS_2_D34AB65F4DD31760___C__SWITCHENHANCED_B__14_0_OFFSET UNITYSDK_OFFSET(0xC14FEB0)

inline static constexpr unsigned int Class_2_D34AB65F4DD31760___c_TypeDefinitionIndex = 62824;

class Class_2_D34AB65F4DD31760___c : public ::System::Object
{
public:
	static ::Class_2_D34AB65F4DD31760___c** StaticGet___9()
	{
		return (::Class_2_D34AB65F4DD31760___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D34AB65F4DD31760___c_TypeDefinitionIndex)->GetStaticField(0x5EFA0);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__14_0()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D34AB65F4DD31760___c_TypeDefinitionIndex)->GetStaticField(0x5EFA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D34AB65F4DD31760___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D34AB65F4DD31760___C__CTOR_OFFSET))(this);
	}

	::System::Void _SwitchEnhanced_b__14_0(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_D34AB65F4DD31760___C__SWITCHENHANCED_B__14_0_OFFSET))(this, a1);
	}
};
