#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_365F1A3885A69C82;
class Class_1_3CE169FA8918702D;
class Class_1_56A1684BE394769D;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_718A51E22CB71EC4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x92B18B0)
#define CLASS_2_718A51E22CB71EC4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92B18F0)
#define CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_0_OFFSET UNITYSDK_OFFSET(0x92B1900)
#define CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_1_OFFSET UNITYSDK_OFFSET(0x92B1990)
#define CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_2_OFFSET UNITYSDK_OFFSET(0x92B19B0)

inline static constexpr unsigned int Class_2_718A51E22CB71EC4___c_TypeDefinitionIndex = 50093;

class Class_2_718A51E22CB71EC4___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_3CE169FA8918702D*>** StaticGet___9__35_1()
	{
		return (::System::Action_1<::Class_1_3CE169FA8918702D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_718A51E22CB71EC4___c_TypeDefinitionIndex)->GetStaticField(0x66460);
	}
	static ::System::Action_1<::Class_1_365F1A3885A69C82*>** StaticGet___9__35_2()
	{
		return (::System::Action_1<::Class_1_365F1A3885A69C82*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_718A51E22CB71EC4___c_TypeDefinitionIndex)->GetStaticField(0x66468);
	}
	static ::Class_2_718A51E22CB71EC4___c** StaticGet___9()
	{
		return (::Class_2_718A51E22CB71EC4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_718A51E22CB71EC4___c_TypeDefinitionIndex)->GetStaticField(0x66470);
	}
	static ::System::Action_1<::Class_1_56A1684BE394769D*>** StaticGet___9__35_0()
	{
		return (::System::Action_1<::Class_1_56A1684BE394769D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_718A51E22CB71EC4___c_TypeDefinitionIndex)->GetStaticField(0x66478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_718A51E22CB71EC4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_718A51E22CB71EC4___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnPreInit_b__35_0(::Class_1_56A1684BE394769D* module)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56A1684BE394769D*))((::PBYTE)hIl2Cpp + CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_0_OFFSET))(this, module);
	}

	::System::Void _OnPreInit_b__35_1(::Class_1_3CE169FA8918702D* rtTickModlue)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CE169FA8918702D*))((::PBYTE)hIl2Cpp + CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_1_OFFSET))(this, rtTickModlue);
	}

	::System::Void _OnPreInit_b__35_2(::Class_1_365F1A3885A69C82* collisionModule)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_365F1A3885A69C82*))((::PBYTE)hIl2Cpp + CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_2_OFFSET))(this, collisionModule);
	}
};
