#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B04DB8B805F5DADF;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_CB49007976699286___C_METHOD_1_799C70B77CCF98DC_OFFSET UNITYSDK_OFFSET(0xDAFD270)
#define CLASS_3_CB49007976699286___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAFD220)
#define CLASS_3_CB49007976699286___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAFD260)

inline static constexpr unsigned int Class_3_CB49007976699286___c_TypeDefinitionIndex = 67805;

class Class_3_CB49007976699286___c : public ::System::Object
{
public:
	static ::Class_3_CB49007976699286___c** StaticGet___9()
	{
		return (::Class_3_CB49007976699286___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CB49007976699286___c_TypeDefinitionIndex)->GetStaticField(0x39EB0);
	}
	static ::System::Action_2<::Class_3_B04DB8B805F5DADF*, ::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_3_B04DB8B805F5DADF*, ::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CB49007976699286___c_TypeDefinitionIndex)->GetStaticField(0x39EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CB49007976699286___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB49007976699286___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_799C70B77CCF98DC(::Class_3_B04DB8B805F5DADF* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B04DB8B805F5DADF*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_CB49007976699286___C_METHOD_1_799C70B77CCF98DC_OFFSET))(this, a1, a2);
	}
};
