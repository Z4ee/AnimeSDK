#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVDISABLENPCSYNCMOTION_METHOD_3_26D66354F298E2E1_OFFSET UNITYSDK_OFFSET(0x1864CA90)
#define RPG_GAMECORE_ADVDISABLENPCSYNCMOTION_METHOD_3_36A7A2D9827825CD_OFFSET UNITYSDK_OFFSET(0x1864CA10)
#define RPG_GAMECORE_ADVDISABLENPCSYNCMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1864CA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvDisableNpcSyncMotion_TypeDefinitionIndex = 21279;

	class AdvDisableNpcSyncMotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Disable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLENPCSYNCMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36A7A2D9827825CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDisableNpcSyncMotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDisableNpcSyncMotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLENPCSYNCMOTION_METHOD_3_36A7A2D9827825CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_26D66354F298E2E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDisableNpcSyncMotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDisableNpcSyncMotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLENPCSYNCMOTION_METHOD_3_26D66354F298E2E1_OFFSET))(a1, a2);
		}
	};
}
