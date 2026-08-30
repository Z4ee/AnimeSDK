#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DESTROYCHARACTER_METHOD_3_76E43C74FB880C6B_OFFSET UNITYSDK_OFFSET(0x1D0204A0)
#define RPG_GAMECORE_DESTROYCHARACTER_METHOD_3_9951A709A5265DD8_OFFSET UNITYSDK_OFFSET(0x1D020460)
#define RPG_GAMECORE_DESTROYCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D020490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyCharacter_TypeDefinitionIndex = 21447;

	class DestroyCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9951A709A5265DD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCHARACTER_METHOD_3_9951A709A5265DD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76E43C74FB880C6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCHARACTER_METHOD_3_76E43C74FB880C6B_OFFSET))(a1, a2);
		}
	};
}
