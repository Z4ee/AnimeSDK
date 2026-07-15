#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IBubbleInfoGroupProvider; }
namespace RPG::Client { class IBubbleInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0x19851DB0)
#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER_GETBUBBLEINFOPROVIDERLIST_OFFSET UNITYSDK_OFFSET(0x19851F60)
#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__CREATEBUBBLEINFOPROVIDERLISTBYINDEX_OFFSET UNITYSDK_OFFSET(0x198521D0)
#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19851EC0)
#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__GETANDRECORDRANDOMSELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x19851FB0)
#define RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__RESETAVAILABLEINDICES_OFFSET UNITYSDK_OFFSET(0x19852320)

namespace RPG::Client
{
	inline static constexpr unsigned int RandomBubbleInfoGroupProvider_TypeDefinitionIndex = 60166;

	class RandomBubbleInfoGroupProvider : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _Weights; // 0x10
		::Il2CppArray<::RPG::Client::IBubbleInfoGroupProvider*>* _BubbleTalkInfoGroupList; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _AvailableIndices; // 0x20

		::System::Void _ctor(::Il2CppArray<::RPG::Client::IBubbleInfoGroupProvider*>* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::IBubbleInfoGroupProvider*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::RandomBubbleInfoGroupProvider* Create(::Il2CppArray<::RPG::Client::IBubbleInfoGroupProvider*>* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::RPG::Client::RandomBubbleInfoGroupProvider*(*)(::Il2CppArray<::RPG::Client::IBubbleInfoGroupProvider*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER_CREATE_OFFSET))(a1, a2);
		}

		::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* GetBubbleInfoProviderList()
		{
			return ((::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER_GETBUBBLEINFOPROVIDERLIST_OFFSET))(this);
		}

		::System::Int32 _GetAndRecordRandomSelectedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__GETANDRECORDRANDOMSELECTEDINDEX_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>* _CreateBubbleInfoProviderListByIndex(::System::Int32 a1)
		{
			return ((::Il2CppArray<::RPG::Client::IBubbleInfoProvider*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__CREATEBUBBLEINFOPROVIDERLISTBYINDEX_OFFSET))(this, a1);
		}

		::System::Void _ResetAvailableIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMBUBBLEINFOGROUPPROVIDER__RESETAVAILABLEINDICES_OFFSET))(this);
		}
	};
}
