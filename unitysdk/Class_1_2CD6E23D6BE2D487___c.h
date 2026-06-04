#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2CD6E23D6BE2D487___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143FB590)
#define CLASS_1_2CD6E23D6BE2D487___C__CTOR_OFFSET UNITYSDK_OFFSET(0x143FB5D0)
#define CLASS_1_2CD6E23D6BE2D487___C__SATISFY_B__0_0_OFFSET UNITYSDK_OFFSET(0x143FB5E0)

inline static constexpr unsigned int Class_1_2CD6E23D6BE2D487___c_TypeDefinitionIndex = 60695;

class Class_1_2CD6E23D6BE2D487___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CD6E23D6BE2D487___c_TypeDefinitionIndex)->GetStaticField(0x373D0);
	}
	static ::Class_1_2CD6E23D6BE2D487___c** StaticGet___9()
	{
		return (::Class_1_2CD6E23D6BE2D487___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CD6E23D6BE2D487___c_TypeDefinitionIndex)->GetStaticField(0x373D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CD6E23D6BE2D487___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CD6E23D6BE2D487___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Satisfy_b__0_0(::RPG::Client::GridFightEquipItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_1_2CD6E23D6BE2D487___C__SATISFY_B__0_0_OFFSET))(this, a1);
	}
};
