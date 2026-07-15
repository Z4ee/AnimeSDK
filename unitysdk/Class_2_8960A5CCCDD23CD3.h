#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4CD8A1ACD565F336.h"

namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }

#define CLASS_2_8960A5CCCDD23CD3_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x1649D110)
#define CLASS_2_8960A5CCCDD23CD3_GET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0x1649D0F0)
#define CLASS_2_8960A5CCCDD23CD3_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x1649D120)
#define CLASS_2_8960A5CCCDD23CD3_SET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0x1649D100)
#define CLASS_2_8960A5CCCDD23CD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1649D140)
#define CLASS_2_8960A5CCCDD23CD3__CTOR_OFFSET UNITYSDK_OFFSET(0x1649D130)

inline static constexpr unsigned int Class_2_8960A5CCCDD23CD3_TypeDefinitionIndex = 57693;

class Class_2_8960A5CCCDD23CD3 : public ::Class_1_4CD8A1ACD565F336
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8960A5CCCDD23CD3_TypeDefinitionIndex)->GetStaticField(0x8000);
	}
	::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x28
	::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBindingMap_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8960A5CCCDD23CD3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8960A5CCCDD23CD3__CCTOR_OFFSET))();
	}

	::RPG::GameCore::LittleGameLevelVarBindingMap* get_LevelVarBindingMap()
	{
		return ((::RPG::GameCore::LittleGameLevelVarBindingMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8960A5CCCDD23CD3_GET_LEVELVARBINDINGMAP_OFFSET))(this);
	}

	::System::Void set_LevelVarBindingMap(::RPG::GameCore::LittleGameLevelVarBindingMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_2_8960A5CCCDD23CD3_SET_LEVELVARBINDINGMAP_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelLittleGameInfo* get_ContainerInfo()
	{
		return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8960A5CCCDD23CD3_GET_CONTAINERINFO_OFFSET))(this);
	}

	::System::Void set_ContainerInfo(::RPG::GameCore::LevelLittleGameInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_8960A5CCCDD23CD3_SET_CONTAINERINFO_OFFSET))(this, a1);
	}
};
