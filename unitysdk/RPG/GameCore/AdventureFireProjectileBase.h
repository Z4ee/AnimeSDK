#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE_METHOD_3_4C8F1FDCFAD18A7E_OFFSET UNITYSDK_OFFSET(0x1CBB9030)
#define RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE_METHOD_3_C484CAE0A248DB27_OFFSET UNITYSDK_OFFSET(0x1CBB8E80)
#define RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB8E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureFireProjectileBase_TypeDefinitionIndex = 19972;

	class AdventureFireProjectileBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHit; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileLifetimeFinish; // 0x28
		::System::Boolean WaitProjectileFinish; // 0x30
		::System::String* MutexName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C484CAE0A248DB27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureFireProjectileBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureFireProjectileBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE_METHOD_3_C484CAE0A248DB27_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C8F1FDCFAD18A7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureFireProjectileBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureFireProjectileBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE_METHOD_3_4C8F1FDCFAD18A7E_OFFSET))(a1, a2);
		}
	};
}
