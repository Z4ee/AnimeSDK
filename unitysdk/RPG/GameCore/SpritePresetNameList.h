#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPRITEPRESETNAMELIST_METHOD_2_D7C6BE3E7049D48C_OFFSET UNITYSDK_OFFSET(0x18E851B0)
#define RPG_GAMECORE_SPRITEPRESETNAMELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18E852B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpritePresetNameList_TypeDefinitionIndex = 23450;

	class SpritePresetNameList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* NameList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETNAMELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D7C6BE3E7049D48C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpritePresetNameList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpritePresetNameList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETNAMELIST_METHOD_2_D7C6BE3E7049D48C_OFFSET))(a1, a2);
		}
	};
}
