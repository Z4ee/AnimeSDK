#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_METHOD_5_1372DD688D0FBD28_OFFSET UNITYSDK_OFFSET(0x1BD2A6B0)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_METHOD_5_D1E653485E1A3154_OFFSET UNITYSDK_OFFSET(0x1BD2A650)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2A6A0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomChangeBombToMultiStyleAction_TypeDefinitionIndex = 24046;

	class RandomChangeBombToMultiStyleAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D1E653485E1A3154(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_METHOD_5_D1E653485E1A3154_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1372DD688D0FBD28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEBOMBTOMULTISTYLEACTION_METHOD_5_1372DD688D0FBD28_OFFSET))(a1, a2);
		}
	};
}
