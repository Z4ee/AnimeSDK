#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTalkInfo; }

#define RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_METHOD_3_295F341ADA9529E5_OFFSET UNITYSDK_OFFSET(0x1BA02190)
#define RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_METHOD_3_6AB370BCC55421E6_OFFSET UNITYSDK_OFFSET(0x1BA021D0)
#define RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA021C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayAndWaitRogueSimpleTalk_TypeDefinitionIndex = 20318;

	class PlayAndWaitRogueSimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueTalkInfo*>* SimpleTalkList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_295F341ADA9529E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_METHOD_3_295F341ADA9529E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6AB370BCC55421E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAndWaitRogueSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANDWAITROGUESIMPLETALK_METHOD_3_6AB370BCC55421E6_OFFSET))(a1, a2);
		}
	};
}
