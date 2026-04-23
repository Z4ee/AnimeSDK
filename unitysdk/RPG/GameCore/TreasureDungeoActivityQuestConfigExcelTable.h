#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TreasureDungeoActivityQuestConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x190B6BC0)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x190B6A10)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x190B66E0)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x190B69B0)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x190B6D90)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x190B6760)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x190B6DD0)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B6FB0)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x190B7220)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190B7580)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x190B6F10)
#define RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x190B6E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeoActivityQuestConfigExcelTable_TypeDefinitionIndex = 11839;

	class TreasureDungeoActivityQuestConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeoActivityQuestConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD880);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeoActivityQuestConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD888);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeoActivityQuestConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD890);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeoActivityQuestConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5080);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TreasureDungeoActivityQuestConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5081);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeoActivityQuestConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TreasureDungeoActivityQuestConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeoActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TREASUREDUNGEOACTIVITYQUESTCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
