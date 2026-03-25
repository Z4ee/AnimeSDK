#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_64;
class Class_1_E7C4009BCC22497A_48;
namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class MonopolyBuffDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D53F60)
#define RPG_CLIENT_MONOPOLYBUFFINFO_GET_BUFFMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9D549E0)
#define RPG_CLIENT_MONOPOLYBUFFINFO_GET_EMPTYPERMANENTBUFF_OFFSET UNITYSDK_OFFSET(0x9D54B80)
#define RPG_CLIENT_MONOPOLYBUFFINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9D53CE0)
#define RPG_CLIENT_MONOPOLYBUFFINFO_MODIFY_OFFSET UNITYSDK_OFFSET(0x9D54480)
#define RPG_CLIENT_MONOPOLYBUFFINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9D54080)
#define RPG_CLIENT_MONOPOLYBUFFINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0x9D53F20)
#define RPG_CLIENT_MONOPOLYBUFFINFO__ADDBUFF_OFFSET UNITYSDK_OFFSET(0x9D54370)
#define RPG_CLIENT_MONOPOLYBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9D54C00)
#define RPG_CLIENT_MONOPOLYBUFFINFO__REFRESHBUFFTURN_OFFSET UNITYSDK_OFFSET(0x9D54840)
#define RPG_CLIENT_MONOPOLYBUFFINFO__REMOVEBUFF_OFFSET UNITYSDK_OFFSET(0x9D546C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyBuffInfo_TypeDefinitionIndex = 53829;

	class MonopolyBuffInfo : public ::System::Object
	{
	public:
		::RPG::Client::MonopolyBuffDataItem* _EmptyPermanentBuff; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyBuffDataItem*>* ActivatedBuff; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyBuffDataItem*>* BuffDict; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyBuffDataItem*>* BuffList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_E7C4009BCC22497A_48* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_48*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_SYNC_OFFSET))(this, info);
		}

		::System::Void Modify(::Proto::MonopolyActionResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_MODIFY_OFFSET))(this, result);
		}

		::System::Void _AddBuff(::Class_1_120319518E6F6581_64* buffData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_64*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO__ADDBUFF_OFFSET))(this, buffData);
		}

		::System::Void _RemoveBuff(::Class_1_120319518E6F6581_64* buffData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_64*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO__REMOVEBUFF_OFFSET))(this, buffData);
		}

		::System::Void _RefreshBuffTurn(::Class_1_120319518E6F6581_64* buffData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_64*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO__REFRESHBUFFTURN_OFFSET))(this, buffData);
		}

		::System::UInt32 get_BuffMultiplier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_GET_BUFFMULTIPLIER_OFFSET))(this);
		}

		::RPG::Client::MonopolyBuffDataItem* get_EmptyPermanentBuff()
		{
			return ((::RPG::Client::MonopolyBuffDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_GET_EMPTYPERMANENTBUFF_OFFSET))(this);
		}
	};
}
