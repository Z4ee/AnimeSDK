#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_831;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_02025C06DD644D05___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC4C530)
#define CLASS_2_02025C06DD644D05___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC4C560)
#define CLASS_2_02025C06DD644D05___C___ONBATTLECHANGEAVATARHUDPANELSHOW_B__9_0_OFFSET UNITYSDK_OFFSET(0xAC4C570)

inline static constexpr unsigned int Class_2_02025C06DD644D05___c_TypeDefinitionIndex = 58556;

class Class_2_02025C06DD644D05___c : public ::System::Object
{
public:
	static ::Class_2_02025C06DD644D05___c** StaticGet___9()
	{
		return (::Class_2_02025C06DD644D05___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_02025C06DD644D05___c_TypeDefinitionIndex)->GetStaticField(0x37080);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_831*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_831*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_02025C06DD644D05___c_TypeDefinitionIndex)->GetStaticField(0x37088);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __OnBattleChangeAvatarHUDPanelShow_b__9_0(::Class_0_16E4307DCC419505_831* a, ::Class_0_16E4307DCC419505_831* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_831*, ::Class_0_16E4307DCC419505_831*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05___C___ONBATTLECHANGEAVATARHUDPANELSHOW_B__9_0_OFFSET))(this, a, b);
	}
};
