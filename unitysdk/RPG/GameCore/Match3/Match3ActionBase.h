#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_METHOD_4_B29685D25BC2F28B_OFFSET UNITYSDK_OFFSET(0x1D241650)
#define RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_METHOD_4_CD96510E7B313108_OFFSET UNITYSDK_OFFSET(0x1D241610)
#define RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D23F430)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3ActionBase_TypeDefinitionIndex = 24614;

	class Match3ActionBase : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CD96510E7B313108(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3ActionBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ActionBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_METHOD_4_CD96510E7B313108_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B29685D25BC2F28B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3ActionBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_METHOD_4_B29685D25BC2F28B_OFFSET))(a1, a2);
		}
	};
}
