#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_NUMBERCASECONTAINER_METHOD_3_748F142DC5C73C17_OFFSET UNITYSDK_OFFSET(0x18BC2940)
#define RPG_GAMECORE_NUMBERCASECONTAINER_METHOD_3_AC84ADEF1784E364_OFFSET UNITYSDK_OFFSET(0x18BC2980)
#define RPG_GAMECORE_NUMBERCASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC2970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NumberCaseContainer_TypeDefinitionIndex = 16643;

	class NumberCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::DynamicFloat* Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBERCASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_748F142DC5C73C17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NumberCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NumberCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBERCASECONTAINER_METHOD_3_748F142DC5C73C17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC84ADEF1784E364(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NumberCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NumberCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBERCASECONTAINER_METHOD_3_AC84ADEF1784E364_OFFSET))(a1, a2);
		}
	};
}
