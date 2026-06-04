#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSEMNPCRANDOMCOMBINATIONCOLLECTION_ASSEMNPCRANDOMCOMBINATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB32C880)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPCRandomCombinationCollection_AssemNPCRandomCombinationConfig_TypeDefinitionIndex = 56108;

	class AssemNPCRandomCombinationCollection_AssemNPCRandomCombinationConfig : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* ReplaceMaterialKeyList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCRANDOMCOMBINATIONCOLLECTION_ASSEMNPCRANDOMCOMBINATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
