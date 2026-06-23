#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_3F1E6598B55A097B;
class Class_4_BB83D219B093AD9E;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_E8C09267563E5A3F___C_METHOD_1_7CDD42DDE04DB44D_OFFSET UNITYSDK_OFFSET(0x15D4BAA0)
#define CLASS_3_E8C09267563E5A3F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D4BA50)
#define CLASS_3_E8C09267563E5A3F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4BA90)

inline static constexpr unsigned int Class_3_E8C09267563E5A3F___c_TypeDefinitionIndex = 81224;

class Class_3_E8C09267563E5A3F___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_4_3F1E6598B55A097B*, ::Class_4_BB83D219B093AD9E*>** StaticGet___9__1_0()
	{
		return (::System::Action_2<::Class_4_3F1E6598B55A097B*, ::Class_4_BB83D219B093AD9E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E8C09267563E5A3F___c_TypeDefinitionIndex)->GetStaticField(0x43B80);
	}
	static ::Class_3_E8C09267563E5A3F___c** StaticGet___9()
	{
		return (::Class_3_E8C09267563E5A3F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E8C09267563E5A3F___c_TypeDefinitionIndex)->GetStaticField(0x43B88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E8C09267563E5A3F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8C09267563E5A3F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7CDD42DDE04DB44D(::Class_4_3F1E6598B55A097B* a1, ::Class_4_BB83D219B093AD9E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_3F1E6598B55A097B*, ::Class_4_BB83D219B093AD9E*))((::PBYTE)hIl2Cpp + CLASS_3_E8C09267563E5A3F___C_METHOD_1_7CDD42DDE04DB44D_OFFSET))(this, a1, a2);
	}
};
