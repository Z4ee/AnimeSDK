#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4CD8A1ACD565F336.h"

namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }

#define CLASS_2_8960A5CCCDD23CD3_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xC3C3530)
#define CLASS_2_8960A5CCCDD23CD3_GET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0xC3C3510)
#define CLASS_2_8960A5CCCDD23CD3_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xC3C3540)
#define CLASS_2_8960A5CCCDD23CD3_SET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0xC3C3520)
#define CLASS_2_8960A5CCCDD23CD3__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3C3560)
#define CLASS_2_8960A5CCCDD23CD3__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C3550)

inline static constexpr unsigned int Class_2_8960A5CCCDD23CD3_TypeDefinitionIndex = 60511;

class Class_2_8960A5CCCDD23CD3 : public ::Class_1_4CD8A1ACD565F336
{
public:
	static ::System::Int32* StaticGet_MKBNALHKDHF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8960A5CCCDD23CD3_TypeDefinitionIndex)->GetStaticField(0x11D70);
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
