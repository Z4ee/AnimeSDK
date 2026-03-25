#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ADVENTURESKILLMAXMPCHANGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x906EC10)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureSkillMaxMPChangeParam_TypeDefinitionIndex = 55612;

	class AdventureSkillMaxMPChangeParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* MPList; // 0x10
		::System::Boolean ShowChangeUI; // 0x18
		::System::Int32 ChangeCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTURESKILLMAXMPCHANGEPARAM__CTOR_OFFSET))(this);
		}
	};
}
