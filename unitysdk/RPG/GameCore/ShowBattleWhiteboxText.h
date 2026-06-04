#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT_METHOD_3_78AA6785B62F53CD_OFFSET UNITYSDK_OFFSET(0x19C76A90)
#define RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT_METHOD_3_83B98BAD8A526574_OFFSET UNITYSDK_OFFSET(0x19C76A10)
#define RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C76A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleWhiteboxText_TypeDefinitionIndex = 22025;

	class ShowBattleWhiteboxText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::String* TextContent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83B98BAD8A526574(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleWhiteboxText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleWhiteboxText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT_METHOD_3_83B98BAD8A526574_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_78AA6785B62F53CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleWhiteboxText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleWhiteboxText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXTEXT_METHOD_3_78AA6785B62F53CD_OFFSET))(a1, a2);
		}
	};
}
