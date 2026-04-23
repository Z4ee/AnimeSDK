#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_75C90E178B164D38.h"

namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }

#define CLASS_2_9ABF713DE221ED00_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x11181E30)
#define CLASS_2_9ABF713DE221ED00_GET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0x11181E10)
#define CLASS_2_9ABF713DE221ED00_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x11181E40)
#define CLASS_2_9ABF713DE221ED00_SET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0x11181E20)
#define CLASS_2_9ABF713DE221ED00__CCTOR_OFFSET UNITYSDK_OFFSET(0x11181E60)
#define CLASS_2_9ABF713DE221ED00__CTOR_OFFSET UNITYSDK_OFFSET(0x11181E50)

inline static constexpr unsigned int Class_2_9ABF713DE221ED00_TypeDefinitionIndex = 55700;

class Class_2_9ABF713DE221ED00 : public ::Class_1_75C90E178B164D38
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9ABF713DE221ED00_TypeDefinitionIndex)->GetStaticField(0x6660);
	}
	::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBindingMap_k__BackingField; // 0x28
	::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ABF713DE221ED00__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9ABF713DE221ED00__CCTOR_OFFSET))();
	}

	::RPG::GameCore::LittleGameLevelVarBindingMap* get_LevelVarBindingMap()
	{
		return ((::RPG::GameCore::LittleGameLevelVarBindingMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ABF713DE221ED00_GET_LEVELVARBINDINGMAP_OFFSET))(this);
	}

	::System::Void set_LevelVarBindingMap(::RPG::GameCore::LittleGameLevelVarBindingMap* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_2_9ABF713DE221ED00_SET_LEVELVARBINDINGMAP_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelLittleGameInfo* get_ContainerInfo()
	{
		return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ABF713DE221ED00_GET_CONTAINERINFO_OFFSET))(this);
	}

	::System::Void set_ContainerInfo(::RPG::GameCore::LevelLittleGameInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9ABF713DE221ED00_SET_CONTAINERINFO_OFFSET))(this, value);
	}
};
