#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_METHOD_4_49C770D06E227EAD_OFFSET UNITYSDK_OFFSET(0x18DFB710)
#define RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_METHOD_4_7800D811468E9107_OFFSET UNITYSDK_OFFSET(0x18DFB7E0)
#define RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFB790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_RemoveModifierWhenReset_TypeDefinitionIndex = 19086;

	class ST_Side_RemoveModifierWhenReset : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* ModifierName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_49C770D06E227EAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_METHOD_4_49C770D06E227EAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7800D811468E9107(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RemoveModifierWhenReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEMODIFIERWHENRESET_METHOD_4_7800D811468E9107_OFFSET))(a1, a2);
		}
	};
}
