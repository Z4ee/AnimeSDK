#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_31712AE156B3D5A3_CLASS_1_E2FC60A5D4BDF5C3_CLEAR_OFFSET UNITYSDK_OFFSET(0x19B81200)
#define CLASS_2_31712AE156B3D5A3_CLASS_1_E2FC60A5D4BDF5C3_COMPARETO_OFFSET UNITYSDK_OFFSET(0x19B81250)
#define CLASS_2_31712AE156B3D5A3_CLASS_1_E2FC60A5D4BDF5C3__CTOR_OFFSET UNITYSDK_OFFSET(0x19B81300)

inline static constexpr unsigned int Class_2_31712AE156B3D5A3_Class_1_E2FC60A5D4BDF5C3_TypeDefinitionIndex = 59866;

class Class_2_31712AE156B3D5A3_Class_1_E2FC60A5D4BDF5C3 : public ::System::Object
{
public:
	::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* DBALOLNOLGL; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
	::System::String* ANHNKKIHIBL; // 0x20
	::System::String* PFJFIJDPKNF; // 0x28
	::System::Single MNAKIEOGPDK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31712AE156B3D5A3_CLASS_1_E2FC60A5D4BDF5C3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31712AE156B3D5A3_CLASS_1_E2FC60A5D4BDF5C3_CLEAR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_2_31712AE156B3D5A3_Class_1_E2FC60A5D4BDF5C3* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_31712AE156B3D5A3_Class_1_E2FC60A5D4BDF5C3*))((::PBYTE)hIl2Cpp + CLASS_2_31712AE156B3D5A3_CLASS_1_E2FC60A5D4BDF5C3_COMPARETO_OFFSET))(this, a1);
	}
};
