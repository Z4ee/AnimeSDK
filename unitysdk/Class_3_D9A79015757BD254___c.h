#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4875884AB352B34E;
class Class_3_7D2A004C54221D51;
class Class_3_FE4D94DD4A55FAE5;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D9A79015757BD254___C_METHOD_1_6F536CC421CAAC45_OFFSET UNITYSDK_OFFSET(0x14437070)
#define CLASS_3_D9A79015757BD254___C_METHOD_1_AC255204606A59C2_OFFSET UNITYSDK_OFFSET(0x14437080)
#define CLASS_3_D9A79015757BD254___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14437020)
#define CLASS_3_D9A79015757BD254___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14437060)

inline static constexpr unsigned int Class_3_D9A79015757BD254___c_TypeDefinitionIndex = 72145;

class Class_3_D9A79015757BD254___c : public ::System::Object
{
public:
	static ::Class_3_D9A79015757BD254___c** StaticGet___9()
	{
		return (::Class_3_D9A79015757BD254___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D9A79015757BD254___c_TypeDefinitionIndex)->GetStaticField(0x47F30);
	}
	static ::System::Action_2<::Class_3_4875884AB352B34E*, ::Class_3_FE4D94DD4A55FAE5*>** StaticGet___9__3_1()
	{
		return (::System::Action_2<::Class_3_4875884AB352B34E*, ::Class_3_FE4D94DD4A55FAE5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D9A79015757BD254___c_TypeDefinitionIndex)->GetStaticField(0x47F38);
	}
	static ::System::Action_1<::Class_3_7D2A004C54221D51*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_7D2A004C54221D51*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D9A79015757BD254___c_TypeDefinitionIndex)->GetStaticField(0x47F40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D9A79015757BD254___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9A79015757BD254___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F536CC421CAAC45(::Class_3_7D2A004C54221D51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7D2A004C54221D51*))((::PBYTE)hIl2Cpp + CLASS_3_D9A79015757BD254___C_METHOD_1_6F536CC421CAAC45_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC255204606A59C2(::Class_3_4875884AB352B34E* a1, ::Class_3_FE4D94DD4A55FAE5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4875884AB352B34E*, ::Class_3_FE4D94DD4A55FAE5*))((::PBYTE)hIl2Cpp + CLASS_3_D9A79015757BD254___C_METHOD_1_AC255204606A59C2_OFFSET))(this, a1, a2);
	}
};
