#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTalkInfo; }

#define RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_METHOD_3_1B918ADFABD5C5F7_OFFSET UNITYSDK_OFFSET(0x19A23100)
#define RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_METHOD_3_6AB370BCC55421E6_OFFSET UNITYSDK_OFFSET(0x19A23180)
#define RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A23150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayAndWaitRogueSimpleTalk_TypeDefinitionIndex = 19947;

	class PlayAndWaitRogueSimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueTalkInfo*>* SimpleTalkList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B918ADFABD5C5F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_METHOD_3_1B918ADFABD5C5F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6AB370BCC55421E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_METHOD_3_6AB370BCC55421E6_OFFSET))(a1, a2);
		}
	};
}
