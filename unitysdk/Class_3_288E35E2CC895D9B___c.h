#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_0DC61513D73BCE61;
class Class_4_2E17BADFF2021901;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_288E35E2CC895D9B___C_METHOD_1_F034CF7076BBEAB3_OFFSET UNITYSDK_OFFSET(0x15D30850)
#define CLASS_3_288E35E2CC895D9B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D30800)
#define CLASS_3_288E35E2CC895D9B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D30840)

inline static constexpr unsigned int Class_3_288E35E2CC895D9B___c_TypeDefinitionIndex = 78780;

class Class_3_288E35E2CC895D9B___c : public ::System::Object
{
public:
	static ::Class_3_288E35E2CC895D9B___c** StaticGet___9()
	{
		return (::Class_3_288E35E2CC895D9B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_288E35E2CC895D9B___c_TypeDefinitionIndex)->GetStaticField(0x43B60);
	}
	static ::System::Action_2<::Class_4_2E17BADFF2021901*, ::Class_4_0DC61513D73BCE61*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::Class_4_2E17BADFF2021901*, ::Class_4_0DC61513D73BCE61*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_288E35E2CC895D9B___c_TypeDefinitionIndex)->GetStaticField(0x43B68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_288E35E2CC895D9B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_288E35E2CC895D9B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F034CF7076BBEAB3(::Class_4_2E17BADFF2021901* a1, ::Class_4_0DC61513D73BCE61* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_2E17BADFF2021901*, ::Class_4_0DC61513D73BCE61*))((::PBYTE)hIl2Cpp + CLASS_3_288E35E2CC895D9B___C_METHOD_1_F034CF7076BBEAB3_OFFSET))(this, a1, a2);
	}
};
