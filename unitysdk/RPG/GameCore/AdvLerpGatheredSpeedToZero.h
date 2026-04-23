#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO_METHOD_3_73D9BACFE1F9D9AA_OFFSET UNITYSDK_OFFSET(0x186547B0)
#define RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO_METHOD_3_9F1BD3D5C875F8FD_OFFSET UNITYSDK_OFFSET(0x18654760)
#define RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO__CTOR_OFFSET UNITYSDK_OFFSET(0x18654950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLerpGatheredSpeedToZero_TypeDefinitionIndex = 19984;

	class AdvLerpGatheredSpeedToZero : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Single LerpTime; // 0x20
		::System::String* LerpCurve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F1BD3D5C875F8FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLerpGatheredSpeedToZero*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLerpGatheredSpeedToZero*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO_METHOD_3_9F1BD3D5C875F8FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73D9BACFE1F9D9AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLerpGatheredSpeedToZero* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLerpGatheredSpeedToZero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLERPGATHEREDSPEEDTOZERO_METHOD_3_73D9BACFE1F9D9AA_OFFSET))(a1, a2);
		}
	};
}
