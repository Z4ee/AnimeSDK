#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_METHOD_4_25311FA9716BC34C_OFFSET UNITYSDK_OFFSET(0x1D4D32B0)
#define RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_METHOD_4_7800D811468E9107_OFFSET UNITYSDK_OFFSET(0x1D4D32F0)
#define RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D32E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_RemoveModifierWhenReset_TypeDefinitionIndex = 19914;

	class ST_Side_RemoveModifierWhenReset : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* ModifierName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_25311FA9716BC34C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_METHOD_4_25311FA9716BC34C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7800D811468E9107(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_METHOD_4_7800D811468E9107_OFFSET))(a1, a2);
		}
	};
}
