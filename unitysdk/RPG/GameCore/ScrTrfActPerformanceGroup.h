#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferBaseAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActiveTemplateVirtualCamera; }
namespace RPG::GameCore { class ActiveVirtualCamera_PerformanceTransition; }
namespace RPG::GameCore { class AdvCreateGroupEntity; }
namespace RPG::GameCore { class AdvDestroyGroupEntity; }
namespace RPG::GameCore { class AdvNpcFaceToPlayer; }
namespace RPG::GameCore { class CaptureNPCToCharacter; }
namespace RPG::GameCore { class SwitchCharacterAnchor; }

#define RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP_METHOD_3_87DF695F8FF4D7B1_OFFSET UNITYSDK_OFFSET(0x18DFFBC0)
#define RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP_METHOD_3_F48385B8F0589F55_OFFSET UNITYSDK_OFFSET(0x18DFFC00)
#define RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFFBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScrTrfActPerformanceGroup_TypeDefinitionIndex = 19845;

	class ScrTrfActPerformanceGroup : public ::RPG::GameCore::ScreenTransferBaseAction
	{
	public:
		::RPG::GameCore::AdvCreateGroupEntity* AdvCreateGroupEntity; // 0x10
		::RPG::GameCore::AdvDestroyGroupEntity* AdvDestroyGroupEntity; // 0x18
		::Il2CppArray<::RPG::GameCore::CaptureNPCToCharacter*>* CaptureNpc; // 0x20
		::RPG::GameCore::SwitchCharacterAnchor* SwitchCharacterAnchor; // 0x28
		::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* ActiveVirtualCamera; // 0x30
		::RPG::GameCore::ActiveTemplateVirtualCamera* ActiveTemplateVirtualCamera; // 0x38
		::RPG::GameCore::AdvNpcFaceToPlayer* AdvNpcFaceToPlayer; // 0x40
		::System::Boolean WaitStreamingFinish; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_87DF695F8FF4D7B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScrTrfActPerformanceGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScrTrfActPerformanceGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP_METHOD_3_87DF695F8FF4D7B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F48385B8F0589F55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScrTrfActPerformanceGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScrTrfActPerformanceGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCEGROUP_METHOD_3_F48385B8F0589F55_OFFSET))(a1, a2);
		}
	};
}
