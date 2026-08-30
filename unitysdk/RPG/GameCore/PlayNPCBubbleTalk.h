#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYNPCBUBBLETALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A5C10)
#define RPG_GAMECORE_PLAYNPCBUBBLETALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A5BA0)
#define RPG_GAMECORE_PLAYNPCBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A5BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayNPCBubbleTalk_TypeDefinitionIndex = 20168;

	class PlayNPCBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BubbleTalkInfo*>* BubbleTalkInfoList; // 0x18
		::RPG::GameCore::BubbleTalkType BubbleTalkType; // 0x20
		::System::Boolean IsLoop; // 0x24
		::System::Single LoopInterval; // 0x28
		::System::Boolean InstantFinish; // 0x2C
		::System::UInt32 ID; // 0x30
		::System::UInt32 UniqueID; // 0x34
		::System::String* UniqueName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayNPCBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayNPCBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCBUBBLETALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayNPCBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCBUBBLETALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
