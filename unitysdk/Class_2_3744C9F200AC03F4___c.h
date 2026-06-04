#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3744C9F200AC03F4_Class_1_81099EFECC2F2A3F;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_3744C9F200AC03F4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA46C060)
#define CLASS_2_3744C9F200AC03F4___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA46C090)
#define CLASS_2_3744C9F200AC03F4___C__HASCUSTOMTOPPANEL_B__0_0_OFFSET UNITYSDK_OFFSET(0xA46C0A0)

inline static constexpr unsigned int Class_2_3744C9F200AC03F4___c_TypeDefinitionIndex = 67313;

class Class_2_3744C9F200AC03F4___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_3744C9F200AC03F4_Class_1_81099EFECC2F2A3F*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_3744C9F200AC03F4_Class_1_81099EFECC2F2A3F*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3744C9F200AC03F4___c_TypeDefinitionIndex)->GetStaticField(0x5ACE0);
	}
	static ::Class_2_3744C9F200AC03F4___c** StaticGet___9()
	{
		return (::Class_2_3744C9F200AC03F4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3744C9F200AC03F4___c_TypeDefinitionIndex)->GetStaticField(0x5ACE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3744C9F200AC03F4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744C9F200AC03F4___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasCustomTopPanel_b__0_0(::Class_2_3744C9F200AC03F4_Class_1_81099EFECC2F2A3F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_3744C9F200AC03F4_Class_1_81099EFECC2F2A3F*))((::PBYTE)hIl2Cpp + CLASS_2_3744C9F200AC03F4___C__HASCUSTOMTOPPANEL_B__0_0_OFFSET))(this, a1);
	}
};
