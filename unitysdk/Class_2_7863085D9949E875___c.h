#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_7863085D9949E875___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x981EE70)
#define CLASS_2_7863085D9949E875___C__CTOR_OFFSET UNITYSDK_OFFSET(0x981EEB0)
#define CLASS_2_7863085D9949E875___C__UPDATEROLE_B__4_0_OFFSET UNITYSDK_OFFSET(0x981EEC0)

inline static constexpr unsigned int Class_2_7863085D9949E875___c_TypeDefinitionIndex = 60027;

class Class_2_7863085D9949E875___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7863085D9949E875___c_TypeDefinitionIndex)->GetStaticField(0xC2B0);
	}
	static ::Class_2_7863085D9949E875___c** StaticGet___9()
	{
		return (::Class_2_7863085D9949E875___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7863085D9949E875___c_TypeDefinitionIndex)->GetStaticField(0xC2B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _UpdateRole_b__4_0(::RPG::Client::GridFightEquipItemData* x)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875___C__UPDATEROLE_B__4_0_OFFSET))(this, x);
	}
};
