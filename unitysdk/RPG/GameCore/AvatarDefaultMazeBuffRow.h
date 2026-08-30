#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARDEFAULTMAZEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C586880)
#define RPG_GAMECORE_AVATARDEFAULTMAZEBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C586A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDefaultMazeBuffRow_TypeDefinitionIndex = 12679;

	class AvatarDefaultMazeBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DefaultMazeBuffIDList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 SkillIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEFAULTMAZEBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarDefaultMazeBuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarDefaultMazeBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEFAULTMAZEBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
