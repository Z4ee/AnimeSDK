#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW_METHOD_3_83C2015637B4D5BE_OFFSET UNITYSDK_OFFSET(0x1706ED30)
#define RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW_METHOD_3_F71A36AB8CE33556_OFFSET UNITYSDK_OFFSET(0x1706EDB0)
#define RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1706ED80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterNavigateFollow_TypeDefinitionIndex = 19182;

	class CharacterNavigateFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* TargetCharacterUniqueName; // 0x20
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x28
		::System::Single FollowDistance; // 0x2C
		::System::Boolean WaitUntilFinish; // 0x30
		::System::Boolean AvoidOthers; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83C2015637B4D5BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterNavigateFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterNavigateFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW_METHOD_3_83C2015637B4D5BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F71A36AB8CE33556(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterNavigateFollow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterNavigateFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERNAVIGATEFOLLOW_METHOD_3_F71A36AB8CE33556_OFFSET))(a1, a2);
		}
	};
}
