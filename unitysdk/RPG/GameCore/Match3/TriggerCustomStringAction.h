#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_METHOD_5_14BF6998047AD498_OFFSET UNITYSDK_OFFSET(0x1BD2C7A0)
#define RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_METHOD_5_7E9E4AD05F41AB70_OFFSET UNITYSDK_OFFSET(0x1BD2C740)
#define RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2C790)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int TriggerCustomStringAction_TypeDefinitionIndex = 24035;

	class TriggerCustomStringAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* CustomString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7E9E4AD05F41AB70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::TriggerCustomStringAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::TriggerCustomStringAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_METHOD_5_7E9E4AD05F41AB70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_14BF6998047AD498(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::TriggerCustomStringAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::TriggerCustomStringAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRIGGERCUSTOMSTRINGACTION_METHOD_5_14BF6998047AD498_OFFSET))(a1, a2);
		}
	};
}
