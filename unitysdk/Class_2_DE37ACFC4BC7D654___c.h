#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_DE37ACFC4BC7D654___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135029C0)
#define CLASS_2_DE37ACFC4BC7D654___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13502A00)
#define CLASS_2_DE37ACFC4BC7D654___C___SETUPEQUIPITEMPANELS_B__9_0_OFFSET UNITYSDK_OFFSET(0x13502A10)

inline static constexpr unsigned int Class_2_DE37ACFC4BC7D654___c_TypeDefinitionIndex = 67499;

class Class_2_DE37ACFC4BC7D654___c : public ::System::Object
{
public:
	static ::Class_2_DE37ACFC4BC7D654___c** StaticGet___9()
	{
		return (::Class_2_DE37ACFC4BC7D654___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DE37ACFC4BC7D654___c_TypeDefinitionIndex)->GetStaticField(0x3CB00);
	}
	static ::System::Func_2<::RPG::GameCore::BattleGridFightEquipData*, ::System::Int32>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::RPG::GameCore::BattleGridFightEquipData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DE37ACFC4BC7D654___c_TypeDefinitionIndex)->GetStaticField(0x3CB08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SetupEquipItemPanels_b__9_0(::RPG::GameCore::BattleGridFightEquipData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + CLASS_2_DE37ACFC4BC7D654___C___SETUPEQUIPITEMPANELS_B__9_0_OFFSET))(this, a1);
	}
};
