#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_988;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_C3AC14C2FF8CD7D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x139FE2D0)
#define CLASS_2_C3AC14C2FF8CD7D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x139FE300)
#define CLASS_2_C3AC14C2FF8CD7D6___C___REFRESHAVATARHUDPANELSIBLINGINDEX_B__10_0_OFFSET UNITYSDK_OFFSET(0x139FE310)

inline static constexpr unsigned int Class_2_C3AC14C2FF8CD7D6___c_TypeDefinitionIndex = 66790;

class Class_2_C3AC14C2FF8CD7D6___c : public ::System::Object
{
public:
	static ::Class_2_C3AC14C2FF8CD7D6___c** StaticGet___9()
	{
		return (::Class_2_C3AC14C2FF8CD7D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C3AC14C2FF8CD7D6___c_TypeDefinitionIndex)->GetStaticField(0x670E0);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_988*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_988*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C3AC14C2FF8CD7D6___c_TypeDefinitionIndex)->GetStaticField(0x670E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RefreshAvatarHUDPanelSiblingIndex_b__10_0(::Class_0_16E4307DCC419505_988* a1, ::Class_0_16E4307DCC419505_988* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_988*, ::Class_0_16E4307DCC419505_988*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___C___REFRESHAVATARHUDPANELSIBLINGINDEX_B__10_0_OFFSET))(this, a1, a2);
	}
};
