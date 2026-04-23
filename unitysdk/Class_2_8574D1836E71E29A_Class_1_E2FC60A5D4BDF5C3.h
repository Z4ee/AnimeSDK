#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_8574D1836E71E29A_CLASS_1_E2FC60A5D4BDF5C3_CLEAR_OFFSET UNITYSDK_OFFSET(0x90F5A60)
#define CLASS_2_8574D1836E71E29A_CLASS_1_E2FC60A5D4BDF5C3_COMPARETO_OFFSET UNITYSDK_OFFSET(0x90F5AB0)
#define CLASS_2_8574D1836E71E29A_CLASS_1_E2FC60A5D4BDF5C3__CTOR_OFFSET UNITYSDK_OFFSET(0x90F5B60)

inline static constexpr unsigned int Class_2_8574D1836E71E29A_Class_1_E2FC60A5D4BDF5C3_TypeDefinitionIndex = 55101;

class Class_2_8574D1836E71E29A_Class_1_E2FC60A5D4BDF5C3 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_3; // 0x20
	::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* Field_1_1; // 0x28
	::System::Single Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_CLASS_1_E2FC60A5D4BDF5C3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_CLASS_1_E2FC60A5D4BDF5C3_CLEAR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_2_8574D1836E71E29A_Class_1_E2FC60A5D4BDF5C3* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_8574D1836E71E29A_Class_1_E2FC60A5D4BDF5C3*))((::PBYTE)hIl2Cpp + CLASS_2_8574D1836E71E29A_CLASS_1_E2FC60A5D4BDF5C3_COMPARETO_OFFSET))(this, a1);
	}
};
