#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOLCASECONTAINER_METHOD_3_49DDABB5CEC66292_OFFSET UNITYSDK_OFFSET(0x187127C0)
#define RPG_GAMECORE_BOOLCASECONTAINER_METHOD_3_75D3C90ED0C606F9_OFFSET UNITYSDK_OFFSET(0x18712780)
#define RPG_GAMECORE_BOOLCASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x187127B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoolCaseContainer_TypeDefinitionIndex = 16645;

	class BoolCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::System::Boolean Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLCASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75D3C90ED0C606F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoolCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoolCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLCASECONTAINER_METHOD_3_75D3C90ED0C606F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_49DDABB5CEC66292(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoolCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoolCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOLCASECONTAINER_METHOD_3_49DDABB5CEC66292_OFFSET))(a1, a2);
		}
	};
}
