#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LockHPStrength.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOCKTARGETHP_METHOD_3_BDD12ECAE64AC1E8_OFFSET UNITYSDK_OFFSET(0x18A79FA0)
#define RPG_GAMECORE_LOCKTARGETHP_METHOD_3_EF8E1A6801411667_OFFSET UNITYSDK_OFFSET(0x18A79F10)
#define RPG_GAMECORE_LOCKTARGETHP__CTOR_OFFSET UNITYSDK_OFFSET(0x18A79F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockTargetHP_TypeDefinitionIndex = 22597;

	class LockTargetHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LockHPStrength Strength; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* LockKey; // 0x28
		::RPG::GameCore::DynamicFloat* Threshold; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EF8E1A6801411667(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockTargetHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockTargetHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETHP_METHOD_3_EF8E1A6801411667_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BDD12ECAE64AC1E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockTargetHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockTargetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTARGETHP_METHOD_3_BDD12ECAE64AC1E8_OFFSET))(a1, a2);
		}
	};
}
