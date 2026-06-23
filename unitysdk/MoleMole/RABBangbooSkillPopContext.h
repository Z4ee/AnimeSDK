#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_15C4412F4F8ACB43_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_RABBANGBOOSKILLPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13043100)

namespace MoleMole
{
	inline static constexpr unsigned int RABBangbooSkillPopContext_TypeDefinitionIndex = 56654;

	class RABBangbooSkillPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_15C4412F4F8ACB43_1*>* SkillList; // 0x28
		::System::Int32 DefaultIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABBANGBOOSKILLPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
