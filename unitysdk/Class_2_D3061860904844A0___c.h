#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_848;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_D3061860904844A0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x106057A0)
#define CLASS_2_D3061860904844A0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x106057D0)
#define CLASS_2_D3061860904844A0___C___SORTSUBPANELS_B__8_0_OFFSET UNITYSDK_OFFSET(0x106057E0)

inline static constexpr unsigned int Class_2_D3061860904844A0___c_TypeDefinitionIndex = 58773;

class Class_2_D3061860904844A0___c : public ::System::Object
{
public:
	static ::Class_2_D3061860904844A0___c** StaticGet___9()
	{
		return (::Class_2_D3061860904844A0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3061860904844A0___c_TypeDefinitionIndex)->GetStaticField(0x204F0);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_848*>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_848*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3061860904844A0___c_TypeDefinitionIndex)->GetStaticField(0x204F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SortSubPanels_b__8_0(::Class_0_16E4307DCC419505_848* pa, ::Class_0_16E4307DCC419505_848* pb)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_848*, ::Class_0_16E4307DCC419505_848*))((::PBYTE)hIl2Cpp + CLASS_2_D3061860904844A0___C___SORTSUBPANELS_B__8_0_OFFSET))(this, pa, pb);
	}
};
