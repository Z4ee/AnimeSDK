#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6B109FE0CB0E3F53_GET_GENDER_OFFSET UNITYSDK_OFFSET(0x8F45770)
#define CLASS_1_6B109FE0CB0E3F53_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8F45750)
#define CLASS_1_6B109FE0CB0E3F53_SET_GENDER_OFFSET UNITYSDK_OFFSET(0x8F45780)
#define CLASS_1_6B109FE0CB0E3F53_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8F45760)
#define CLASS_1_6B109FE0CB0E3F53__CTOR_OFFSET UNITYSDK_OFFSET(0x8F45790)

inline static constexpr unsigned int Class_1_6B109FE0CB0E3F53_TypeDefinitionIndex = 47911;

class Class_1_6B109FE0CB0E3F53 : public ::System::Object
{
public:
	::System::String* _Name_k__BackingField; // 0x10
	::RPG::GameCore::GenderType _Gender_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B109FE0CB0E3F53__CTOR_OFFSET))(this);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B109FE0CB0E3F53_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6B109FE0CB0E3F53_SET_NAME_OFFSET))(this, value);
	}

	::RPG::GameCore::GenderType get_Gender()
	{
		return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B109FE0CB0E3F53_GET_GENDER_OFFSET))(this);
	}

	::System::Void set_Gender(::RPG::GameCore::GenderType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_6B109FE0CB0E3F53_SET_GENDER_OFFSET))(this, value);
	}
};
