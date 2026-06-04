#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MINIEMOEFFECTNODEVISIBLE_METHOD_2_00DF941BF7B88851_OFFSET UNITYSDK_OFFSET(0x1993EFA0)
#define RPG_GAMECORE_MINIEMOEFFECTNODEVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1993F100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniEmoEffectNodeVisible_TypeDefinitionIndex = 20640;

	class MiniEmoEffectNodeVisible : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* NodePath; // 0x10
		::System::Boolean Visible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIEMOEFFECTNODEVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_00DF941BF7B88851(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniEmoEffectNodeVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniEmoEffectNodeVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIEMOEFFECTNODEVISIBLE_METHOD_2_00DF941BF7B88851_OFFSET))(a1, a2);
		}
	};
}
