#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLECHARACTERIDMAPPING_METHOD_2_2D35DCC7DB947536_OFFSET UNITYSDK_OFFSET(0x189322D0)
#define RPG_GAMECORE_FREESTYLECHARACTERIDMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x189323F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleCharacterIDMapping_TypeDefinitionIndex = 15435;

	class FreeStyleCharacterIDMapping : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FreeStyleCharacterID; // 0x10
		::Il2CppArray<::System::String*>* MappingIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERIDMAPPING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2D35DCC7DB947536(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleCharacterIDMapping*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleCharacterIDMapping*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERIDMAPPING_METHOD_2_2D35DCC7DB947536_OFFSET))(a1, a2);
		}
	};
}
