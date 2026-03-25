#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHENEMYINALERTRANGE_METHOD_4_B165FF4FBD73FB49_OFFSET UNITYSDK_OFFSET(0x177BE840)
#define RPG_GAMECORE_TARGETFETCHENEMYINALERTRANGE_METHOD_4_C147F1CBEFDDE4CF_OFFSET UNITYSDK_OFFSET(0x177B5340)
#define RPG_GAMECORE_TARGETFETCHENEMYINALERTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x177B52C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchEnemyInAlertRange_TypeDefinitionIndex = 22170;

	class TargetFetchEnemyInAlertRange : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHENEMYINALERTRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B165FF4FBD73FB49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchEnemyInAlertRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchEnemyInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHENEMYINALERTRANGE_METHOD_4_B165FF4FBD73FB49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C147F1CBEFDDE4CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchEnemyInAlertRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchEnemyInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHENEMYINALERTRANGE_METHOD_4_C147F1CBEFDDE4CF_OFFSET))(a1, a2);
		}
	};
}
