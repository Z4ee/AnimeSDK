#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARPROPERTYVALUE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C597FE0)
#define RPG_GAMECORE_AVATARPROPERTYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C598130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPropertyValue_TypeDefinitionIndex = 12617;

	class AvatarPropertyValue : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarPropertyValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPropertyValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYVALUE_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
