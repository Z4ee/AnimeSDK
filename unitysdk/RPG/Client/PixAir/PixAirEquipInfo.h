#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::PixAir { class PixAirEquipData; }
namespace RPG::Client::PixAir { class PixAirEquipLevelData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_CONTAINSEQUIPLEVEL_OFFSET UNITYSDK_OFFSET(0xC3BFEF0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_CONTAINSEQUIP_OFFSET UNITYSDK_OFFSET(0xC3BFBA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GETALLEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xC3BFC30)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GETALLEQUIPLEVELDATA_OFFSET UNITYSDK_OFFSET(0xC3BFF90)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GETEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xC3BFA20)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GETEQUIPLEVELDATA_OFFSET UNITYSDK_OFFSET(0xC3BFD50)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GET_EQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xC3BF980)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GET_EQUIPLEVELCOUNT_OFFSET UNITYSDK_OFFSET(0xC3BF9D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC3C00B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_TRYGETEQUIPDATA_OFFSET UNITYSDK_OFFSET(0xC3BFAD0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_TRYGETEQUIPLEVELDATA_OFFSET UNITYSDK_OFFSET(0xC3BFE10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C0580)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipInfo_TypeDefinitionIndex = 73625;

	class PixAirEquipInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::PixAir::PixAirEquipLevelData*>* _equipLevelDataMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PixAir::PixAirEquipData*>* _equipDataMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_EquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GET_EQUIPCOUNT_OFFSET))(this);
		}

		::System::Int32 get_EquipLevelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GET_EQUIPLEVELCOUNT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipData* GetEquipData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GETEQUIPDATA_OFFSET))(this, a1);
		}

		::System::Boolean TryGetEquipData(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirEquipData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::PixAir::PixAirEquipData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_TRYGETEQUIPDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean ContainsEquip(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_CONTAINSEQUIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::PixAir::PixAirEquipData*>* GetAllEquipData()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::PixAir::PixAirEquipData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GETALLEQUIPDATA_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipLevelData* GetEquipLevelData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipLevelData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GETEQUIPLEVELDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetEquipLevelData(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::PixAir::PixAirEquipLevelData*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::PixAir::PixAirEquipLevelData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_TRYGETEQUIPLEVELDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ContainsEquipLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_CONTAINSEQUIPLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::PixAir::PixAirEquipLevelData*>* GetAllEquipLevelData()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::PixAir::PixAirEquipLevelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_GETALLEQUIPLEVELDATA_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFO_INIT_OFFSET))(this);
		}
	};
}
