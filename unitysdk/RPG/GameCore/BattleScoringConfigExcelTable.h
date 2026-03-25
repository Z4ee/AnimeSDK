#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleScoringConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FE0D80)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FE0C00)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16FE08D0)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16FE0BA0)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FE0F00)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FE0950)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FE0F40)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FE1120)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FE15F0)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE1900)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FE1080)
#define RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FE0FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringConfigExcelTable_TypeDefinitionIndex = 11764;

	class BattleScoringConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleScoringConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleScoringConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BattleScoringConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23050);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BattleScoringConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23058);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BattleScoringConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23060);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleScoringConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9270);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BattleScoringConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9271);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleScoringConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleScoringConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleScoringConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleScoringConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BattleScoringConfigRow* GetData(::System::UInt32 ScoringID)
		{
			return ((::RPG::GameCore::BattleScoringConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_GETDATA_OFFSET))(ScoringID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BattleScoringConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleScoringConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
