#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1196;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_C3AC14C2FF8CD7D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B06F00)
#define CLASS_2_C3AC14C2FF8CD7D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B06F30)
#define CLASS_2_C3AC14C2FF8CD7D6___C___REFRESHAVATARHUDPANELSIBLINGINDEX_B__10_0_OFFSET UNITYSDK_OFFSET(0x15B06F40)

inline static constexpr unsigned int Class_2_C3AC14C2FF8CD7D6___c_TypeDefinitionIndex = 71449;

class Class_2_C3AC14C2FF8CD7D6___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_1196*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_1196*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C3AC14C2FF8CD7D6___c_TypeDefinitionIndex)->GetStaticField(0x6BCC0);
	}
	static ::Class_2_C3AC14C2FF8CD7D6___c** StaticGet___9()
	{
		return (::Class_2_C3AC14C2FF8CD7D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C3AC14C2FF8CD7D6___c_TypeDefinitionIndex)->GetStaticField(0x6BCC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RefreshAvatarHUDPanelSiblingIndex_b__10_0(::Class_0_16E4307DCC419505_1196* a1, ::Class_0_16E4307DCC419505_1196* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_1196*, ::Class_0_16E4307DCC419505_1196*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___C___REFRESHAVATARHUDPANELSIBLINGINDEX_B__10_0_OFFSET))(this, a1, a2);
	}
};
