#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUEHANDBOOKBUFFTYPEREWARDDATA_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xDEC0240)
#define RPG_CLIENT_ROGUEHANDBOOKBUFFTYPEREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDEC0230)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookBuffTypeRewardData_TypeDefinitionIndex = 67369;

	class RogueHandbookBuffTypeRewardData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDs; // 0x10
		::System::UInt32 RogueBuffType; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFTYPEREWARDDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKBUFFTYPEREWARDDATA_HASREWARDCANTAKE_OFFSET))(this);
		}
	};
}
