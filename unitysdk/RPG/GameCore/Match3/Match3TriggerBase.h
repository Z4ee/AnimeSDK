#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiTriggerConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE_METHOD_3_4BF3AEF28061CCC3_OFFSET UNITYSDK_OFFSET(0x1D261FD0)
#define RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE_METHOD_3_BB7C501AE052E965_OFFSET UNITYSDK_OFFSET(0x1D261600)
#define RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D25CFE0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TriggerBase_TypeDefinitionIndex = 24590;

	class Match3TriggerBase : public ::RPG::GameCore::MiTriggerConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB7C501AE052E965(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TriggerBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TriggerBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE_METHOD_3_BB7C501AE052E965_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4BF3AEF28061CCC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TriggerBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TriggerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TRIGGERBASE_METHOD_3_4BF3AEF28061CCC3_OFFSET))(a1, a2);
		}
	};
}
