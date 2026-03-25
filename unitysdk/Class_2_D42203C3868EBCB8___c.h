#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_D42203C3868EBCB8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D24FF0)
#define CLASS_2_D42203C3868EBCB8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D25020)
#define CLASS_2_D42203C3868EBCB8___C___PREPARETIPSDATA_B__4_0_OFFSET UNITYSDK_OFFSET(0x8D25030)

inline static constexpr unsigned int Class_2_D42203C3868EBCB8___c_TypeDefinitionIndex = 51051;

class Class_2_D42203C3868EBCB8___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::BattleFailureTipsConfigRow*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::BattleFailureTipsConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D42203C3868EBCB8___c_TypeDefinitionIndex)->GetStaticField(0x12940);
	}
	static ::Class_2_D42203C3868EBCB8___c** StaticGet___9()
	{
		return (::Class_2_D42203C3868EBCB8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D42203C3868EBCB8___c_TypeDefinitionIndex)->GetStaticField(0x12948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __PrepareTipsData_b__4_0(::RPG::GameCore::BattleFailureTipsConfigRow* lhs, ::RPG::GameCore::BattleFailureTipsConfigRow* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleFailureTipsConfigRow*, ::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + CLASS_2_D42203C3868EBCB8___C___PREPARETIPSDATA_B__4_0_OFFSET))(this, lhs, rhs);
	}
};
