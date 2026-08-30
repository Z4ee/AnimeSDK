#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B6839500C1F7BE75___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187D94B0)
#define CLASS_1_B6839500C1F7BE75___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187D94F0)
#define CLASS_1_B6839500C1F7BE75___C__TICKROUND_B__3_0_OFFSET UNITYSDK_OFFSET(0x187D9500)

inline static constexpr unsigned int Class_1_B6839500C1F7BE75___c_TypeDefinitionIndex = 64433;

class Class_1_B6839500C1F7BE75___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6839500C1F7BE75___c_TypeDefinitionIndex)->GetStaticField(0x37D20);
	}
	static ::Class_1_B6839500C1F7BE75___c** StaticGet___9()
	{
		return (::Class_1_B6839500C1F7BE75___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6839500C1F7BE75___c_TypeDefinitionIndex)->GetStaticField(0x37D28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _TickRound_b__3_0(::RPG::Client::GridFightEquipItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75___C__TICKROUND_B__3_0_OFFSET))(this, a1);
	}
};
