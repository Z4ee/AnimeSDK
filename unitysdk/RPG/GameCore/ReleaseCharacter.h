#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RELEASECHARACTER_METHOD_3_248D8ECB6514001A_OFFSET UNITYSDK_OFFSET(0x19ABAE30)
#define RPG_GAMECORE_RELEASECHARACTER_METHOD_3_8A6EC2537344FB23_OFFSET UNITYSDK_OFFSET(0x19ABADB0)
#define RPG_GAMECORE_RELEASECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABAE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseCharacter_TypeDefinitionIndex = 19676;

	class ReleaseCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A6EC2537344FB23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTER_METHOD_3_8A6EC2537344FB23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_248D8ECB6514001A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECHARACTER_METHOD_3_248D8ECB6514001A_OFFSET))(a1, a2);
		}
	};
}
