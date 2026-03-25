#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETANIMSPEEDSCALE_METHOD_3_7F594083C0BA46DA_OFFSET UNITYSDK_OFFSET(0x176E0E40)
#define RPG_GAMECORE_SETTARGETANIMSPEEDSCALE_METHOD_3_C24602D2718DBFA9_OFFSET UNITYSDK_OFFSET(0x176E0EC0)
#define RPG_GAMECORE_SETTARGETANIMSPEEDSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x176E0E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetAnimSpeedScale_TypeDefinitionIndex = 21084;

	class SetTargetAnimSpeedScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AnimSpeedScale; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETANIMSPEEDSCALE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F594083C0BA46DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetAnimSpeedScale*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetAnimSpeedScale*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETANIMSPEEDSCALE_METHOD_3_7F594083C0BA46DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C24602D2718DBFA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetAnimSpeedScale* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetAnimSpeedScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETANIMSPEEDSCALE_METHOD_3_C24602D2718DBFA9_OFFSET))(a1, a2);
		}
	};
}
