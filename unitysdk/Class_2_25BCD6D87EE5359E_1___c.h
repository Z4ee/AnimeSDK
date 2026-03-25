#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_25BCD6D87EE5359E_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11965F30)
#define CLASS_2_25BCD6D87EE5359E_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11965F70)
#define CLASS_2_25BCD6D87EE5359E_1___C__UPDATEROLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x11965F80)

inline static constexpr unsigned int Class_2_25BCD6D87EE5359E_1___c_TypeDefinitionIndex = 52747;

class Class_2_25BCD6D87EE5359E_1___c : public ::System::Object
{
public:
	static ::Class_2_25BCD6D87EE5359E_1___c** StaticGet___9()
	{
		return (::Class_2_25BCD6D87EE5359E_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_25BCD6D87EE5359E_1___c_TypeDefinitionIndex)->GetStaticField(0x485C0);
	}
	static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_25BCD6D87EE5359E_1___c_TypeDefinitionIndex)->GetStaticField(0x485C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_25BCD6D87EE5359E_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25BCD6D87EE5359E_1___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _UpdateRole_b__2_0(::RPG::Client::GridFightEquipItemData* x)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25BCD6D87EE5359E_1___C__UPDATEROLE_B__2_0_OFFSET))(this, x);
	}
};
