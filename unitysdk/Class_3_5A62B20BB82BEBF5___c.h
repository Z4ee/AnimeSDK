#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_5A62B20BB82BEBF5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15624BD0)
#define CLASS_3_5A62B20BB82BEBF5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15624C10)
#define CLASS_3_5A62B20BB82BEBF5___C__INFOMODIFIEREFFECTTARGETS_B__19_0_OFFSET UNITYSDK_OFFSET(0x15624C20)

inline static constexpr unsigned int Class_3_5A62B20BB82BEBF5___c_TypeDefinitionIndex = 77093;

class Class_3_5A62B20BB82BEBF5___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::String*>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5A62B20BB82BEBF5___c_TypeDefinitionIndex)->GetStaticField(0x194D0);
	}
	static ::Class_3_5A62B20BB82BEBF5___c** StaticGet___9()
	{
		return (::Class_3_5A62B20BB82BEBF5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5A62B20BB82BEBF5___c_TypeDefinitionIndex)->GetStaticField(0x194D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5A62B20BB82BEBF5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A62B20BB82BEBF5___C__CTOR_OFFSET))(this);
	}

	::System::String* _InfoModifierEffectTargets_b__19_0(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_3_5A62B20BB82BEBF5___C__INFOMODIFIEREFFECTTARGETS_B__19_0_OFFSET))(this, a1);
	}
};
