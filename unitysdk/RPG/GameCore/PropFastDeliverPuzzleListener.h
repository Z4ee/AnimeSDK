#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER_METHOD_3_2EF7F0CDED577361_OFFSET UNITYSDK_OFFSET(0x1BA229A0)
#define RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER_METHOD_3_732E49F1C267C9A2_OFFSET UNITYSDK_OFFSET(0x1BA22920)
#define RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA22970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropFastDeliverPuzzleListener_TypeDefinitionIndex = 21339;

	class PropFastDeliverPuzzleListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AimFinishCallback; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DollyZoomStartCallback; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AvatarTeleportCallback; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* RotatePuzzleStartCallback; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_732E49F1C267C9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropFastDeliverPuzzleListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropFastDeliverPuzzleListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER_METHOD_3_732E49F1C267C9A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EF7F0CDED577361(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropFastDeliverPuzzleListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropFastDeliverPuzzleListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERPUZZLELISTENER_METHOD_3_2EF7F0CDED577361_OFFSET))(a1, a2);
		}
	};
}
