#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RELICBASETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D392520)
#define RPG_GAMECORE_RELICBASETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D392C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicBaseTypeRow_TypeDefinitionIndex = 14479;

	class RelicBaseTypeRow : public ::System::Object
	{
	public:
		::System::String* BaseTypeIconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* ValidPropertyList; // 0x18
		::RPG::GameCore::RelicType Type; // 0x20
		::RPG::Client::TextID BaseTypeText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicBaseTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicBaseTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
