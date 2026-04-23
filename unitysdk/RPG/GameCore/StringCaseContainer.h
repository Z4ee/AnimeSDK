#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_STRINGCASECONTAINER_METHOD_3_9E9E7B3A2E1924A6_OFFSET UNITYSDK_OFFSET(0x18EA8F10)
#define RPG_GAMECORE_STRINGCASECONTAINER_METHOD_3_A22FC063629C9975_OFFSET UNITYSDK_OFFSET(0x18EA8F50)
#define RPG_GAMECORE_STRINGCASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA8F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StringCaseContainer_TypeDefinitionIndex = 16644;

	class StringCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::DynamicString* Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGCASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E9E7B3A2E1924A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StringCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StringCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGCASECONTAINER_METHOD_3_9E9E7B3A2E1924A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A22FC063629C9975(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StringCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StringCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGCASECONTAINER_METHOD_3_A22FC063629C9975_OFFSET))(a1, a2);
		}
	};
}
