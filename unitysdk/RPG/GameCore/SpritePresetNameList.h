#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPRITEPRESETNAMELIST_METHOD_2_47D407819B81FB41_OFFSET UNITYSDK_OFFSET(0x1B0A4380)
#define RPG_GAMECORE_SPRITEPRESETNAMELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A4470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpritePresetNameList_TypeDefinitionIndex = 23558;

	class SpritePresetNameList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* NameList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETNAMELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_47D407819B81FB41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpritePresetNameList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpritePresetNameList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETNAMELIST_METHOD_2_47D407819B81FB41_OFFSET))(a1, a2);
		}
	};
}
