#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IBubbleInfoProvider; }

#define RPG_CLIENT_BUBBLEINFOGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x9EB82E0)
#define RPG_CLIENT_BUBBLEINFOGROUP_GETBUBBLEINFOPROVIDERLIST_OFFSET UNITYSDK_OFFSET(0x9EB8350)
#define RPG_CLIENT_BUBBLEINFOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB8340)

namespace RPG::Client
{
	inline static constexpr unsigned int BubbleInfoGroup_TypeDefinitionIndex = 57974;

	class BubbleInfoGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* _bubbleInfoProviderList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFOGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BubbleInfoGroup* Create(::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* bubbleInfoProviders)
		{
			return ((::RPG::Client::BubbleInfoGroup*(*)(::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFOGROUP_CREATE_OFFSET))(bubbleInfoProviders);
		}

		::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* GetBubbleInfoProviderList()
		{
			return ((::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BUBBLEINFOGROUP_GETBUBBLEINFOPROVIDERLIST_OFFSET))(this);
		}
	};
}
