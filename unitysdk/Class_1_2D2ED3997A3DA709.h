#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2D2ED3997A3DA709_GET_GENDER_OFFSET UNITYSDK_OFFSET(0xBF0E680)
#define CLASS_1_2D2ED3997A3DA709_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBF0E660)
#define CLASS_1_2D2ED3997A3DA709_SET_GENDER_OFFSET UNITYSDK_OFFSET(0xBF0E690)
#define CLASS_1_2D2ED3997A3DA709_SET_NAME_OFFSET UNITYSDK_OFFSET(0xBF0E670)
#define CLASS_1_2D2ED3997A3DA709__CTOR_OFFSET UNITYSDK_OFFSET(0xBF0E6A0)

inline static constexpr unsigned int Class_1_2D2ED3997A3DA709_TypeDefinitionIndex = 52223;

class Class_1_2D2ED3997A3DA709 : public ::System::Object
{
public:
	::System::String* _Name_k__BackingField; // 0x10
	::RPG::GameCore::GenderType _Gender_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D2ED3997A3DA709__CTOR_OFFSET))(this);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D2ED3997A3DA709_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2D2ED3997A3DA709_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::GenderType get_Gender()
	{
		return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D2ED3997A3DA709_GET_GENDER_OFFSET))(this);
	}

	::System::Void set_Gender(::RPG::GameCore::GenderType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_2D2ED3997A3DA709_SET_GENDER_OFFSET))(this, a1);
	}
};
