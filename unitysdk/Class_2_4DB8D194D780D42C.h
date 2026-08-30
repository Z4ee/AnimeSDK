#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_4DB8D194D780D42C_GET_ROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1822F100)
#define CLASS_2_4DB8D194D780D42C_GET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0x1822F0E0)
#define CLASS_2_4DB8D194D780D42C_GET_SUBMODECLASS_OFFSET UNITYSDK_OFFSET(0x1822F0D0)
#define CLASS_2_4DB8D194D780D42C_SET_ROGUEMODE_OFFSET UNITYSDK_OFFSET(0x1822F110)
#define CLASS_2_4DB8D194D780D42C_SET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0x1822F0F0)
#define CLASS_2_4DB8D194D780D42C__CTOR_OFFSET UNITYSDK_OFFSET(0x1822F120)

inline static constexpr unsigned int Class_2_4DB8D194D780D42C_TypeDefinitionIndex = 56208;

class Class_2_4DB8D194D780D42C : public ::System::Attribute
{
public:
	::System::Type* _SubModeClass_k__BackingField; // 0x10
	::RPG::GameCore::StageType _StageType_k__BackingField; // 0x18
	::RPG::GameCore::RogueMode _RogueMode_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_4DB8D194D780D42C__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_SubModeClass()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DB8D194D780D42C_GET_SUBMODECLASS_OFFSET))(this);
	}

	::RPG::GameCore::StageType get_StageType()
	{
		return ((::RPG::GameCore::StageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DB8D194D780D42C_GET_STAGETYPE_OFFSET))(this);
	}

	::System::Void set_StageType(::RPG::GameCore::StageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + CLASS_2_4DB8D194D780D42C_SET_STAGETYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::RogueMode get_RogueMode()
	{
		return ((::RPG::GameCore::RogueMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DB8D194D780D42C_GET_ROGUEMODE_OFFSET))(this);
	}

	::System::Void set_RogueMode(::RPG::GameCore::RogueMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMode))((::PBYTE)hIl2Cpp + CLASS_2_4DB8D194D780D42C_SET_ROGUEMODE_OFFSET))(this, a1);
	}
};
