#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUEHANDBOOKBUFFTYPEREWARDDATA_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xB040760)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFTYPEREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB040750)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookBuffTypeRewardData_TypeDefinitionIndex = 62073;

	class RogueHandbookBuffTypeRewardData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDs; // 0x10
		::System::UInt32 RogueBuffType; // 0x18

		::System::Void _ctor(::System::UInt32 rogueBuffType, ::Il2CppArray<::System::UInt32>* rogueBuffTypeRewardQuests)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFTYPEREWARDDATA__CTOR_OFFSET))(this, rogueBuffType, rogueBuffTypeRewardQuests);
		}

		::System::Boolean HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFTYPEREWARDDATA_HASREWARDCANTAKE_OFFSET))(this);
		}
	};
}
