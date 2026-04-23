#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_344EBF2097F86C15;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_344EBF2097F86C15___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AEF360)
#define CLASS_1_344EBF2097F86C15___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11AEF390)
#define CLASS_1_344EBF2097F86C15___C__SETIGNOREEXTERNALCOLLISION_B__6_0_OFFSET UNITYSDK_OFFSET(0x11AEF3A0)
#define CLASS_1_344EBF2097F86C15___C__SETIGNOREEXTERNALCOLLISION_B__6_1_OFFSET UNITYSDK_OFFSET(0x11AEF3D0)

inline static constexpr unsigned int Class_1_344EBF2097F86C15___c_TypeDefinitionIndex = 70592;

class Class_1_344EBF2097F86C15___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_344EBF2097F86C15*, ::Class_2_9DD8A46984F1AFFD*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_1_344EBF2097F86C15*, ::Class_2_9DD8A46984F1AFFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_344EBF2097F86C15___c_TypeDefinitionIndex)->GetStaticField(0x457A0);
	}
	static ::System::Action_2<::Class_1_344EBF2097F86C15*, ::Class_2_9DD8A46984F1AFFD*>** StaticGet___9__6_1()
	{
		return (::System::Action_2<::Class_1_344EBF2097F86C15*, ::Class_2_9DD8A46984F1AFFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_344EBF2097F86C15___c_TypeDefinitionIndex)->GetStaticField(0x457A8);
	}
	static ::Class_1_344EBF2097F86C15___c** StaticGet___9()
	{
		return (::Class_1_344EBF2097F86C15___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_344EBF2097F86C15___c_TypeDefinitionIndex)->GetStaticField(0x457B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15___C__CTOR_OFFSET))(this);
	}

	::System::Void _SetIgnoreExternalCollision_b__6_0(::Class_1_344EBF2097F86C15* self, ::Class_2_9DD8A46984F1AFFD* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_344EBF2097F86C15*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15___C__SETIGNOREEXTERNALCOLLISION_B__6_0_OFFSET))(this, self, ent);
	}

	::System::Void _SetIgnoreExternalCollision_b__6_1(::Class_1_344EBF2097F86C15* self, ::Class_2_9DD8A46984F1AFFD* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_344EBF2097F86C15*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_344EBF2097F86C15___C__SETIGNOREEXTERNALCOLLISION_B__6_1_OFFSET))(this, self, ent);
	}
};
