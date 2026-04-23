#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERSTEERTO_METHOD_3_0E31B757DD6200F1_OFFSET UNITYSDK_OFFSET(0x187D8260)
#define RPG_GAMECORE_CHARACTERSTEERTO_METHOD_3_D0E703C6B254C72E_OFFSET UNITYSDK_OFFSET(0x187D81D0)
#define RPG_GAMECORE_CHARACTERSTEERTO__CTOR_OFFSET UNITYSDK_OFFSET(0x187D8230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSteerTo_TypeDefinitionIndex = 19854;

	class CharacterSteerTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::String* AreaName; // 0x28
		::System::Single Duration; // 0x30
		::System::String* TargetCharacterUniqueName; // 0x38
		::System::Boolean WaitUntilFinish; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTEERTO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0E703C6B254C72E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterSteerTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterSteerTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTEERTO_METHOD_3_D0E703C6B254C72E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E31B757DD6200F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterSteerTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterSteerTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSTEERTO_METHOD_3_0E31B757DD6200F1_OFFSET))(a1, a2);
		}
	};
}
