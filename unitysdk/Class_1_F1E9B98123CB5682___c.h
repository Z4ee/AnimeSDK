#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F1E9B98123CB5682___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9529B80)
#define CLASS_1_F1E9B98123CB5682___C__CREATEGAMEREFROLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x9529BD0)
#define CLASS_1_F1E9B98123CB5682___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9529BC0)

inline static constexpr unsigned int Class_1_F1E9B98123CB5682___c_TypeDefinitionIndex = 60092;

class Class_1_F1E9B98123CB5682___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1E9B98123CB5682___c_TypeDefinitionIndex)->GetStaticField(0x54D30);
	}
	static ::Class_1_F1E9B98123CB5682___c** StaticGet___9()
	{
		return (::Class_1_F1E9B98123CB5682___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1E9B98123CB5682___c_TypeDefinitionIndex)->GetStaticField(0x54D38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::GridFightEquipItemData* _CreateGameRefRole_b__2_0(::System::UInt32 id)
	{
		return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F1E9B98123CB5682___C__CREATEGAMEREFROLE_B__2_0_OFFSET))(this, id);
	}
};
