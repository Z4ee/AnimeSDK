#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_77AAD4C437D6F1D1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A12610)
#define CLASS_1_77AAD4C437D6F1D1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A12650)
#define CLASS_1_77AAD4C437D6F1D1___C__IMPORTCURGAMESESSIONDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x8A12660)

inline static constexpr unsigned int Class_1_77AAD4C437D6F1D1___c_TypeDefinitionIndex = 52514;

class Class_1_77AAD4C437D6F1D1___c : public ::System::Object
{
public:
	static ::Class_1_77AAD4C437D6F1D1___c** StaticGet___9()
	{
		return (::Class_1_77AAD4C437D6F1D1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77AAD4C437D6F1D1___c_TypeDefinitionIndex)->GetStaticField(0x452F0);
	}
	static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77AAD4C437D6F1D1___c_TypeDefinitionIndex)->GetStaticField(0x452F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77AAD4C437D6F1D1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77AAD4C437D6F1D1___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _ImportCurGameSessionData_b__10_0(::RPG::Client::GridFightEquipItemData* equip)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_1_77AAD4C437D6F1D1___C__IMPORTCURGAMESESSIONDATA_B__10_0_OFFSET))(this, equip);
	}
};
