#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class BlindBoxPool; }
namespace RPG::Client::BlindBox::Pool { class IBlindBoxPool; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_ADD_OFFSET UNITYSDK_OFFSET(0xC88CC40)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_CLEAR_OFFSET UNITYSDK_OFFSET(0xC889520)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_FULLUPDATECURRENTSETOPENED_OFFSET UNITYSDK_OFFSET(0xC88D2D0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_GETALL_OFFSET UNITYSDK_OFFSET(0xC88ACB0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xC88D460)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0xC88D1E0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_GET__DEBUGPOOLS_OFFSET UNITYSDK_OFFSET(0xC88D4B0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_TRYGET_OFFSET UNITYSDK_OFFSET(0xC88AFD0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_UPDATECURRENTSETOPENED_OFFSET UNITYSDK_OFFSET(0xC88D090)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY__CTOR_OFFSET UNITYSDK_OFFSET(0xC888490)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxPoolRepository_TypeDefinitionIndex = 74917;

	class BlindBoxPoolRepository : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BlindBox::Pool::BlindBoxPool*>* _Pools; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Pool::IBlindBoxPool* Get(::System::UInt32 a1)
		{
			return ((::RPG::Client::BlindBox::Pool::IBlindBoxPool*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_GET_OFFSET))(this, a1);
		}

		::System::Boolean TryGet(::System::UInt32 a1, ::RPG::Client::BlindBox::Pool::IBlindBoxPool*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::BlindBox::Pool::IBlindBoxPool*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_TRYGET_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Pool::IBlindBoxPool*>* GetAll()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Pool::IBlindBoxPool*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_GETALL_OFFSET))(this);
		}

		::System::Void Add(::RPG::Client::BlindBox::Pool::BlindBoxPool* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Pool::BlindBoxPool*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_CLEAR_OFFSET))(this);
		}

		::System::Void UpdateCurrentSetOpened(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_UPDATECURRENTSETOPENED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FullUpdateCurrentSetOpened(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_FULLUPDATECURRENTSETOPENED_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_GET_COUNT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::BlindBox::Pool::BlindBoxPool*>* get__DebugPools()
		{
			return ((::Il2CppArray<::RPG::Client::BlindBox::Pool::BlindBoxPool*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLREPOSITORY_GET__DEBUGPOOLS_OFFSET))(this);
		}
	};
}
