#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define RPG_CLIENT_TEAMBUILDRECIPE___C__DISPLAYCLASS21_0__CHECKCOLLETIONSCONTAINNUMBER_B__0_OFFSET UNITYSDK_OFFSET(0xE189020)
#define RPG_CLIENT_TEAMBUILDRECIPE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE188FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildRecipe___c__DisplayClass21_0_TypeDefinitionIndex = 68090;

	class TeamBuildRecipe___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 number; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckColletionsContainNumber_b__0(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___C__DISPLAYCLASS21_0__CHECKCOLLETIONSCONTAINNUMBER_B__0_OFFSET))(this, a1);
		}
	};
}
