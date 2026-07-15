#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipData; }
namespace RPG::GameCore { class PixAirRecommendConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GETEQUIPDATALIST_OFFSET UNITYSDK_OFFSET(0x1A0DDA80)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GETRECOMMENDEQUIPCOUNTINEQUIPBAR_OFFSET UNITYSDK_OFFSET(0x1A0DE130)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GETRECOMMENDTIP_OFFSET UNITYSDK_OFFSET(0x1A0DDED0)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GET_COREEQUIPDATA_OFFSET UNITYSDK_OFFSET(0x1A0DD940)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GET_CORERECOMMENDTAGS_OFFSET UNITYSDK_OFFSET(0x1A0DD9E0)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GET_RECOMMENDID_OFFSET UNITYSDK_OFFSET(0x1A0DD800)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1A0DD880)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1A0DD820)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_ISCORERECOMMEND_OFFSET UNITYSDK_OFFSET(0x1A0DDCE0)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_ISEQUIPRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1A0DDD90)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1A0DDC70)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_SET_RECOMMENDID_OFFSET UNITYSDK_OFFSET(0x1A0DD810)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_TRYCREATEBYCOREID_OFFSET UNITYSDK_OFFSET(0x1A0DE4E0)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1A0C7310)
#define RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DE4D0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirRecommendData_TypeDefinitionIndex = 75329;

	class PixAirRecommendData : public ::System::Object
	{
	public:
		::System::UInt32 _RecommendID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RecommendID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GET_RECOMMENDID_OFFSET))(this);
		}

		::System::Void set_RecommendID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_SET_RECOMMENDID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PixAirRecommendConfigRow* get__Row()
		{
			return ((::RPG::GameCore::PixAirRecommendConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipData* get_CoreEquipData()
		{
			return ((::RPG::Client::PixAir::PixAirEquipData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GET_COREEQUIPDATA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* get_CoreRecommendTags()
		{
			return ((::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GET_CORERECOMMENDTAGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipData*>* GetEquipDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GETEQUIPDATALIST_OFFSET))(this);
		}

		::System::Boolean IsRecommend(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_ISRECOMMEND_OFFSET))(this, a1);
		}

		::System::Boolean IsCoreRecommend(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_ISCORERECOMMEND_OFFSET))(this, a1);
		}

		::System::Boolean IsEquipRecommend(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_ISEQUIPRECOMMEND_OFFSET))(this, a1);
		}

		::System::String* GetRecommendTip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GETRECOMMENDTIP_OFFSET))(this);
		}

		::System::Int32 GetRecommendEquipCountInEquipBar()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_GETRECOMMENDEQUIPCOUNTINEQUIPBAR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirRecommendData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirRecommendData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_TRYCREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PixAir::PixAirRecommendData* TryCreateByCoreID(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirRecommendData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECOMMENDDATA_TRYCREATEBYCOREID_OFFSET))(a1);
		}
	};
}
