#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOLCASECONTAINER_METHOD_3_52C327CF1F70D1BF_OFFSET UNITYSDK_OFFSET(0x1CE8DAD0)
#define RPG_GAMECORE_BOOLCASECONTAINER_METHOD_3_7A2705D4D2695F00_OFFSET UNITYSDK_OFFSET(0x1CE8DB10)
#define RPG_GAMECORE_BOOLCASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8DB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoolCaseContainer_TypeDefinitionIndex = 17339;

	class BoolCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::System::Boolean Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLCASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_52C327CF1F70D1BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoolCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoolCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLCASECONTAINER_METHOD_3_52C327CF1F70D1BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A2705D4D2695F00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoolCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoolCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLCASECONTAINER_METHOD_3_7A2705D4D2695F00_OFFSET))(a1, a2);
		}
	};
}
