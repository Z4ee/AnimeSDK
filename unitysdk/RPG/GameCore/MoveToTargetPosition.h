#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MoveOffsetCoordType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MOVETOTARGETPOSITION_METHOD_3_CD797DB27855DE97_OFFSET UNITYSDK_OFFSET(0x18B65320)
#define RPG_GAMECORE_MOVETOTARGETPOSITION_METHOD_3_FD73D47ADB95011C_OFFSET UNITYSDK_OFFSET(0x18B65400)
#define RPG_GAMECORE_MOVETOTARGETPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18B65360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveToTargetPosition_TypeDefinitionIndex = 21340;

	class MoveToTargetPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* TargetAttachPointName; // 0x28
		::System::Boolean IgnoreRadius; // 0x30
		::RPG::GameCore::DynamicFloat* OffsetTargetDistance; // 0x38
		::RPG::GameCore::DynamicFloat* MovePercentage; // 0x40
		::RPG::GameCore::MoveOffsetCoordType OffsetCoord; // 0x48
		::RPG::GameCore::DynamicFloat* OffsetForward; // 0x50
		::RPG::GameCore::DynamicFloat* OffsetHorizontal; // 0x58
		::RPG::GameCore::DynamicFloat* OffsetVertical; // 0x60
		::System::Boolean ApplyTargetPosY; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD797DB27855DE97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveToTargetPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveToTargetPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETPOSITION_METHOD_3_CD797DB27855DE97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD73D47ADB95011C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MoveToTargetPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MoveToTargetPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVETOTARGETPOSITION_METHOD_3_FD73D47ADB95011C_OFFSET))(a1, a2);
		}
	};
}
