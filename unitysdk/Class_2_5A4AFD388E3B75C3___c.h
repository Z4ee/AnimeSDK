#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_5A4AFD388E3B75C3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3767F0)
#define CLASS_2_5A4AFD388E3B75C3___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC376820)
#define CLASS_2_5A4AFD388E3B75C3___C___PREPARETIPSDATA_B__4_0_OFFSET UNITYSDK_OFFSET(0xC376830)

inline static constexpr unsigned int Class_2_5A4AFD388E3B75C3___c_TypeDefinitionIndex = 62900;

class Class_2_5A4AFD388E3B75C3___c : public ::System::Object
{
public:
	static ::Class_2_5A4AFD388E3B75C3___c** StaticGet___9()
	{
		return (::Class_2_5A4AFD388E3B75C3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5A4AFD388E3B75C3___c_TypeDefinitionIndex)->GetStaticField(0xC5B0);
	}
	static ::System::Comparison_1<::RPG::GameCore::BattleFailureTipsConfigRow*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::BattleFailureTipsConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5A4AFD388E3B75C3___c_TypeDefinitionIndex)->GetStaticField(0xC5B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __PrepareTipsData_b__4_0(::RPG::GameCore::BattleFailureTipsConfigRow* a1, ::RPG::GameCore::BattleFailureTipsConfigRow* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleFailureTipsConfigRow*, ::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3___C___PREPARETIPSDATA_B__4_0_OFFSET))(this, a1, a2);
	}
};
