#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfProperty.h"
#include "unitysdk/RPG/GameCore/ElfPropertyOperation.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFPROPERTYMODIFIER_METHOD_2_0693FB6B704123DC_OFFSET UNITYSDK_OFFSET(0x1889D920)
#define RPG_GAMECORE_ELFPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1889DAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfPropertyModifier_TypeDefinitionIndex = 17556;

	class ElfPropertyModifier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfProperty Property; // 0x10
		::RPG::GameCore::ElfPropertyOperation Operation; // 0x14
		::System::String* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0693FB6B704123DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfPropertyModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfPropertyModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPROPERTYMODIFIER_METHOD_2_0693FB6B704123DC_OFFSET))(a1, a2);
		}
	};
}
