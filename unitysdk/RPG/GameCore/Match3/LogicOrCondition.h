#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_LOGICORCONDITION_METHOD_5_2D206C3CDE0904D1_OFFSET UNITYSDK_OFFSET(0x198E1F10)
#define RPG_GAMECORE_MATCH3_LOGICORCONDITION_METHOD_5_8D564AF70A867604_OFFSET UNITYSDK_OFFSET(0x198E1DD0)
#define RPG_GAMECORE_MATCH3_LOGICORCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x198E1E90)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int LogicOrCondition_TypeDefinitionIndex = 23535;

	class LogicOrCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::Match3ConditionBase*>* Conditions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICORCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8D564AF70A867604(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::LogicOrCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::LogicOrCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICORCONDITION_METHOD_5_8D564AF70A867604_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2D206C3CDE0904D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::LogicOrCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::LogicOrCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_LOGICORCONDITION_METHOD_5_2D206C3CDE0904D1_OFFSET))(a1, a2);
		}
	};
}
