#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DESTROYCHARACTER_METHOD_3_6808519CC2358B02_OFFSET UNITYSDK_OFFSET(0x1885B120)
#define RPG_GAMECORE_DESTROYCHARACTER_METHOD_3_76E43C74FB880C6B_OFFSET UNITYSDK_OFFSET(0x1885B1A0)
#define RPG_GAMECORE_DESTROYCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1885B170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyCharacter_TypeDefinitionIndex = 20540;

	class DestroyCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6808519CC2358B02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCHARACTER_METHOD_3_6808519CC2358B02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76E43C74FB880C6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCHARACTER_METHOD_3_76E43C74FB880C6B_OFFSET))(a1, a2);
		}
	};
}
