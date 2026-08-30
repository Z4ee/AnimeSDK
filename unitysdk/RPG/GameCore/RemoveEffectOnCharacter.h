#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REMOVEEFFECTONCHARACTER_METHOD_3_2B33A55E8DAF66E9_OFFSET UNITYSDK_OFFSET(0x1DB8D130)
#define RPG_GAMECORE_REMOVEEFFECTONCHARACTER_METHOD_3_57BC68ECEFD60026_OFFSET UNITYSDK_OFFSET(0x1DB8D0F0)
#define RPG_GAMECORE_REMOVEEFFECTONCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8D120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveEffectOnCharacter_TypeDefinitionIndex = 20624;

	class RemoveEffectOnCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* EffectPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECTONCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_57BC68ECEFD60026(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveEffectOnCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveEffectOnCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECTONCHARACTER_METHOD_3_57BC68ECEFD60026_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B33A55E8DAF66E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveEffectOnCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveEffectOnCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECTONCHARACTER_METHOD_3_2B33A55E8DAF66E9_OFFSET))(a1, a2);
		}
	};
}
