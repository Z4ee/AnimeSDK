#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatCampaignConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1715D450)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1715D4F0)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1715D2D0)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1715CFA0)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1715D270)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1715D670)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1715D020)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1715D6B0)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1715D890)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1715E0A0)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1715E3B0)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1715D7F0)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1715D750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatCampaignConfigExcelTable_TypeDefinitionIndex = 10560;

	class DiceCombatCampaignConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatCampaignConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A280);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatCampaignConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatCampaignConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatCampaignConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A288);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatCampaignConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A290);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatCampaignConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xDE80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatCampaignConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xDE81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatCampaignConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatCampaignConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatCampaignConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatCampaignConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatCampaignConfigRow*>, ::RPG::GameCore::DiceCombatCampaignConfigRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DiceCombatCampaignConfigRow*>, ::RPG::GameCore::DiceCombatCampaignConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::DiceCombatCampaignConfigRow* GetData(::System::UInt32 DiceCampaignID)
		{
			return ((::RPG::GameCore::DiceCombatCampaignConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_GETDATA_OFFSET))(DiceCampaignID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DiceCombatCampaignConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DiceCombatCampaignConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
