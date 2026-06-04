#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT_METHOD_3_552FC41D6E8FB3E5_OFFSET UNITYSDK_OFFSET(0x1960E870)
#define RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT_METHOD_3_743CD257A4E0D1A6_OFFSET UNITYSDK_OFFSET(0x1960E7E0)
#define RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1960E840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHeadStopLookAt_TypeDefinitionIndex = 19721;

	class CharacterHeadStopLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Single FadeOutTime; // 0x20
		::System::Boolean WaitUntilFinish; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_743CD257A4E0D1A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterHeadStopLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterHeadStopLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT_METHOD_3_743CD257A4E0D1A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_552FC41D6E8FB3E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterHeadStopLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterHeadStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADSTOPLOOKAT_METHOD_3_552FC41D6E8FB3E5_OFFSET))(a1, a2);
		}
	};
}
