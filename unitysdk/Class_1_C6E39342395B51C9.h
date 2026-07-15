#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_1EAF63C0E6A8FF1E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_1_C6E39342395B51C9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A205E0)
#define CLASS_1_C6E39342395B51C9_GET_SUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x16A206C0)
#define CLASS_1_C6E39342395B51C9_GET_UPPERGROUPMAP_OFFSET UNITYSDK_OFFSET(0x16A206A0)
#define CLASS_1_C6E39342395B51C9_METHOD_1_8E6B1A705324E469_OFFSET UNITYSDK_OFFSET(0x16A20630)
#define CLASS_1_C6E39342395B51C9_SET_SUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x16A206D0)
#define CLASS_1_C6E39342395B51C9_SET_UPPERGROUPMAP_OFFSET UNITYSDK_OFFSET(0x16A206B0)
#define CLASS_1_C6E39342395B51C9__CTOR_OFFSET UNITYSDK_OFFSET(0x16A20530)

inline static constexpr unsigned int Class_1_C6E39342395B51C9_TypeDefinitionIndex = 53504;

class Class_1_C6E39342395B51C9 : public ::System::Object
{
public:
	::Class_1_1EAF63C0E6A8FF1E* _UpperGroupMap_k__BackingField; // 0x10
	::RPG::GameCore::ActivitySubModeType _SubModeType_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_C6E39342395B51C9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6E39342395B51C9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8E6B1A705324E469(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C6E39342395B51C9_METHOD_1_8E6B1A705324E469_OFFSET))(this, a1);
	}

	::Class_1_1EAF63C0E6A8FF1E* get_UpperGroupMap()
	{
		return ((::Class_1_1EAF63C0E6A8FF1E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6E39342395B51C9_GET_UPPERGROUPMAP_OFFSET))(this);
	}

	::System::Void set_UpperGroupMap(::Class_1_1EAF63C0E6A8FF1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EAF63C0E6A8FF1E*))((::PBYTE)hIl2Cpp + CLASS_1_C6E39342395B51C9_SET_UPPERGROUPMAP_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivitySubModeType get_SubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6E39342395B51C9_GET_SUBMODETYPE_OFFSET))(this);
	}

	::System::Void set_SubModeType(::RPG::GameCore::ActivitySubModeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivitySubModeType))((::PBYTE)hIl2Cpp + CLASS_1_C6E39342395B51C9_SET_SUBMODETYPE_OFFSET))(this, a1);
	}
};
