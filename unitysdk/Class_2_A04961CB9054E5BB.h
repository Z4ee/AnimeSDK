#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_A04961CB9054E5BB_GET_ROGUEMODE_OFFSET UNITYSDK_OFFSET(0xAFDDAD0)
#define CLASS_2_A04961CB9054E5BB_GET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0xAFDDAB0)
#define CLASS_2_A04961CB9054E5BB_GET_SUBMODECLASS_OFFSET UNITYSDK_OFFSET(0xAFDDAA0)
#define CLASS_2_A04961CB9054E5BB_SET_ROGUEMODE_OFFSET UNITYSDK_OFFSET(0xAFDDAE0)
#define CLASS_2_A04961CB9054E5BB_SET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0xAFDDAC0)
#define CLASS_2_A04961CB9054E5BB__CTOR_OFFSET UNITYSDK_OFFSET(0xAFDDAF0)

inline static constexpr unsigned int Class_2_A04961CB9054E5BB_TypeDefinitionIndex = 51621;

class Class_2_A04961CB9054E5BB : public ::System::Attribute
{
public:
	::System::Type* _SubModeClass_k__BackingField; // 0x10
	::RPG::GameCore::RogueMode _RogueMode_k__BackingField; // 0x18
	::RPG::GameCore::StageType _StageType_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_A04961CB9054E5BB__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_SubModeClass()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A04961CB9054E5BB_GET_SUBMODECLASS_OFFSET))(this);
	}

	::RPG::GameCore::StageType get_StageType()
	{
		return ((::RPG::GameCore::StageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A04961CB9054E5BB_GET_STAGETYPE_OFFSET))(this);
	}

	::System::Void set_StageType(::RPG::GameCore::StageType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + CLASS_2_A04961CB9054E5BB_SET_STAGETYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::RogueMode get_RogueMode()
	{
		return ((::RPG::GameCore::RogueMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A04961CB9054E5BB_GET_ROGUEMODE_OFFSET))(this);
	}

	::System::Void set_RogueMode(::RPG::GameCore::RogueMode value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMode))((::PBYTE)hIl2Cpp + CLASS_2_A04961CB9054E5BB_SET_ROGUEMODE_OFFSET))(this, value);
	}
};
