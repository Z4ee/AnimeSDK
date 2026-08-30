#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_STRINGCASECONTAINER_METHOD_3_3AC806E1BD3C4917_OFFSET UNITYSDK_OFFSET(0x1CB02E30)
#define RPG_GAMECORE_STRINGCASECONTAINER_METHOD_3_6099B8615EB4EDE0_OFFSET UNITYSDK_OFFSET(0x1CB02DF0)
#define RPG_GAMECORE_STRINGCASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB02E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StringCaseContainer_TypeDefinitionIndex = 17338;

	class StringCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::DynamicString* Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGCASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6099B8615EB4EDE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StringCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StringCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGCASECONTAINER_METHOD_3_6099B8615EB4EDE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3AC806E1BD3C4917(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StringCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StringCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRINGCASECONTAINER_METHOD_3_3AC806E1BD3C4917_OFFSET))(a1, a2);
		}
	};
}
