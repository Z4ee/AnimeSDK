#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_646CCD18043C3F6C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B45DB50)
#define CLASS_2_646CCD18043C3F6C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B45DB90)
#define CLASS_2_646CCD18043C3F6C___C__UPDATEROLE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B45DBA0)

inline static constexpr unsigned int Class_2_646CCD18043C3F6C___c_TypeDefinitionIndex = 65260;

class Class_2_646CCD18043C3F6C___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_646CCD18043C3F6C___c_TypeDefinitionIndex)->GetStaticField(0x633B0);
	}
	static ::Class_2_646CCD18043C3F6C___c** StaticGet___9()
	{
		return (::Class_2_646CCD18043C3F6C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_646CCD18043C3F6C___c_TypeDefinitionIndex)->GetStaticField(0x633B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _UpdateRole_b__4_0(::RPG::Client::GridFightEquipItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + CLASS_2_646CCD18043C3F6C___C__UPDATEROLE_B__4_0_OFFSET))(this, a1);
	}
};
