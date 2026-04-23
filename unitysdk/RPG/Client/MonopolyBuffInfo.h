#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_71;
class Class_1_D40936EF3BF54118_55;
namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class MonopolyBuffDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA98E80)
#define RPG_CLIENT_MONOPOLYBUFFINFO_GET_BUFFMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xAA99900)
#define RPG_CLIENT_MONOPOLYBUFFINFO_GET_EMPTYPERMANENTBUFF_OFFSET UNITYSDK_OFFSET(0xAA99AA0)
#define RPG_CLIENT_MONOPOLYBUFFINFO_INIT_OFFSET UNITYSDK_OFFSET(0xAA98C00)
#define RPG_CLIENT_MONOPOLYBUFFINFO_MODIFY_OFFSET UNITYSDK_OFFSET(0xAA993A0)
#define RPG_CLIENT_MONOPOLYBUFFINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xAA98FA0)
#define RPG_CLIENT_MONOPOLYBUFFINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0xAA98E40)
#define RPG_CLIENT_MONOPOLYBUFFINFO__ADDBUFF_OFFSET UNITYSDK_OFFSET(0xAA99290)
#define RPG_CLIENT_MONOPOLYBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAA99C20)
#define RPG_CLIENT_MONOPOLYBUFFINFO__REFRESHBUFFTURN_OFFSET UNITYSDK_OFFSET(0xAA99760)
#define RPG_CLIENT_MONOPOLYBUFFINFO__REMOVEBUFF_OFFSET UNITYSDK_OFFSET(0xAA995E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyBuffInfo_TypeDefinitionIndex = 60973;

	class MonopolyBuffInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyBuffDataItem*>* BuffList; // 0x10
		::RPG::Client::MonopolyBuffDataItem* _EmptyPermanentBuff; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyBuffDataItem*>* BuffDict; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyBuffDataItem*>* ActivatedBuff; // 0x28

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

		::System::Void Sync(::Class_1_D40936EF3BF54118_55* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_SYNC_OFFSET))(this, info);
		}

		::System::Void Modify(::Proto::MonopolyActionResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_MODIFY_OFFSET))(this, result);
		}

		::System::Void _AddBuff(::Class_1_D1E0AD3915BCCF29_71* buffData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_71*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO__ADDBUFF_OFFSET))(this, buffData);
		}

		::System::Void _RemoveBuff(::Class_1_D1E0AD3915BCCF29_71* buffData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_71*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO__REMOVEBUFF_OFFSET))(this, buffData);
		}

		::System::Void _RefreshBuffTurn(::Class_1_D1E0AD3915BCCF29_71* buffData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_71*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO__REFRESHBUFFTURN_OFFSET))(this, buffData);
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
