#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferBaseAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActiveTemplateVirtualCamera; }
namespace RPG::GameCore { class ActiveVirtualCamera_PerformanceTransition; }
namespace RPG::GameCore { class AdvNpcFaceToPlayer; }
namespace RPG::GameCore { class CaptureNPCToCharacter; }
namespace RPG::GameCore { class CreateNPC; }
namespace RPG::GameCore { class CreateProp; }
namespace RPG::GameCore { class DestroyNPC; }
namespace RPG::GameCore { class DestroyProp; }
namespace RPG::GameCore { class SwitchCharacterAnchor; }

#define RPG_GAMECORE_SCRTRFACTPERFORMANCE_METHOD_3_38B761F18348C36A_OFFSET UNITYSDK_OFFSET(0x1D4D6C30)
#define RPG_GAMECORE_SCRTRFACTPERFORMANCE_METHOD_3_CC882AEB9EC3DBB5_OFFSET UNITYSDK_OFFSET(0x1D4D6C70)
#define RPG_GAMECORE_SCRTRFACTPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D6C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScrTrfActPerformance_TypeDefinitionIndex = 21703;

	class ScrTrfActPerformance : public ::RPG::GameCore::ScreenTransferBaseAction
	{
	public:
		::RPG::GameCore::CreateNPC* CreateNpc; // 0x10
		::RPG::GameCore::DestroyNPC* DestroyNpc; // 0x18
		::RPG::GameCore::CreateProp* CreateProp; // 0x20
		::RPG::GameCore::DestroyProp* DestroyProp; // 0x28
		::Il2CppArray<::RPG::GameCore::CaptureNPCToCharacter*>* CaptureNpc; // 0x30
		::RPG::GameCore::SwitchCharacterAnchor* SwitchCharacterAnchor; // 0x38
		::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* ActiveVirtualCamera; // 0x40
		::RPG::GameCore::ActiveTemplateVirtualCamera* ActiveTemplateVirtualCamera; // 0x48
		::RPG::GameCore::AdvNpcFaceToPlayer* AdvNpcFaceToPlayer; // 0x50
		::System::Boolean WaitStreamingFinish; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38B761F18348C36A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScrTrfActPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScrTrfActPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCE_METHOD_3_38B761F18348C36A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC882AEB9EC3DBB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScrTrfActPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScrTrfActPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRTRFACTPERFORMANCE_METHOD_3_CC882AEB9EC3DBB5_OFFSET))(a1, a2);
		}
	};
}
