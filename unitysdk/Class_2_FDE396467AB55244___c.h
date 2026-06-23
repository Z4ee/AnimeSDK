#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_338;
class Class_2_AA03E26400BE4032;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_FDE396467AB55244___C_METHOD_1_2CD025FCB25A59CD_OFFSET UNITYSDK_OFFSET(0x18929F70)
#define CLASS_2_FDE396467AB55244___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x18929FB0)
#define CLASS_2_FDE396467AB55244___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18929F20)
#define CLASS_2_FDE396467AB55244___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18929F60)

inline static constexpr unsigned int Class_2_FDE396467AB55244___c_TypeDefinitionIndex = 63099;

class Class_2_FDE396467AB55244___c : public ::System::Object
{
public:
	static ::Class_2_FDE396467AB55244___c** StaticGet___9()
	{
		return (::Class_2_FDE396467AB55244___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FDE396467AB55244___c_TypeDefinitionIndex)->GetStaticField(0x3FCB0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_338*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_338*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FDE396467AB55244___c_TypeDefinitionIndex)->GetStaticField(0x3FCB8);
	}
	static ::System::Comparison_1<::Class_2_AA03E26400BE4032*>** StaticGet___9__12_0()
	{
		return (::System::Comparison_1<::Class_2_AA03E26400BE4032*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FDE396467AB55244___c_TypeDefinitionIndex)->GetStaticField(0x3FCC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FDE396467AB55244___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE396467AB55244___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_2CD025FCB25A59CD(::Class_2_AA03E26400BE4032* a1, ::Class_2_AA03E26400BE4032* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_AA03E26400BE4032*, ::Class_2_AA03E26400BE4032*))((::PBYTE)hIl2Cpp + CLASS_2_FDE396467AB55244___C_METHOD_1_2CD025FCB25A59CD_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_338* a1, ::Class_2_208CC9941471731A_338* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_338*, ::Class_2_208CC9941471731A_338*))((::PBYTE)hIl2Cpp + CLASS_2_FDE396467AB55244___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
