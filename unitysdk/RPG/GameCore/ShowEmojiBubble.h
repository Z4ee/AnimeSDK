#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EmojiIconInfo; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWEMOJIBUBBLE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x19C784C0)
#define RPG_GAMECORE_SHOWEMOJIBUBBLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C78420)
#define RPG_GAMECORE_SHOWEMOJIBUBBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C78480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEmojiBubble_TypeDefinitionIndex = 19269;

	class ShowEmojiBubble : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsVertical; // 0x20
		::System::String* BubbleBGPath; // 0x28
		::System::UInt32 PositionIndex; // 0x30
		::Il2CppArray<::RPG::GameCore::EmojiIconInfo*>* EmojiIconInfos; // 0x38
		::System::Single Duration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEMOJIBUBBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEmojiBubble*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEmojiBubble*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEMOJIBUBBLE_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEmojiBubble* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEmojiBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEMOJIBUBBLE_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
