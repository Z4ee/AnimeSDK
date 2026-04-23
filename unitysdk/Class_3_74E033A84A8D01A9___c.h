#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_74E033A84A8D01A9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x117E0E30)
#define CLASS_3_74E033A84A8D01A9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x117E0E70)
#define CLASS_3_74E033A84A8D01A9___C__INFOMODIFIEREFFECTTARGETS_B__19_0_OFFSET UNITYSDK_OFFSET(0x117E0E80)

inline static constexpr unsigned int Class_3_74E033A84A8D01A9___c_TypeDefinitionIndex = 71145;

class Class_3_74E033A84A8D01A9___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::String*>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::Class_2_49CAB3DE74280C58*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_74E033A84A8D01A9___c_TypeDefinitionIndex)->GetStaticField(0x22450);
	}
	static ::Class_3_74E033A84A8D01A9___c** StaticGet___9()
	{
		return (::Class_3_74E033A84A8D01A9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_74E033A84A8D01A9___c_TypeDefinitionIndex)->GetStaticField(0x22458);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_74E033A84A8D01A9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74E033A84A8D01A9___C__CTOR_OFFSET))(this);
	}

	::System::String* _InfoModifierEffectTargets_b__19_0(::Class_2_49CAB3DE74280C58* e)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_3_74E033A84A8D01A9___C__INFOMODIFIEREFFECTTARGETS_B__19_0_OFFSET))(this, e);
	}
};
