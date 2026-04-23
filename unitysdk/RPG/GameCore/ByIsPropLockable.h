#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_1252331BDED31950_OFFSET UNITYSDK_OFFSET(0x18755F20)
#define RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_4701642148B09233_OFFSET UNITYSDK_OFFSET(0x18756040)
#define RPG_GAMECORE_BYISPROPLOCKABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18755FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsPropLockable_TypeDefinitionIndex = 19128;

	class ByIsPropLockable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean UseRaycast; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1252331BDED31950(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsPropLockable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsPropLockable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_1252331BDED31950_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4701642148B09233(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_4701642148B09233_OFFSET))(a1, a2);
		}
	};
}
