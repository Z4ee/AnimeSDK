#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class QuestTimeLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18C820E0)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C81F30)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18C81C00)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18C81ED0)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18C822B0)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C81C80)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18C822F0)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C824D0)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18C82870)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C82BD0)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18C82430)
#define RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C82390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestTimeLimitExcelTable_TypeDefinitionIndex = 11646;

	class QuestTimeLimitExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(QuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3DF80);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*>**)Il2CppClass::FromTypeDefinitionIndex(QuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3DF88);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(QuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3DF90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(QuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0xDD10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(QuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0xDD11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::QuestTimeLimitRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::QuestTimeLimitRow* GetData(::System::UInt32 QuestID)
		{
			return ((::RPG::GameCore::QuestTimeLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_GETDATA_OFFSET))(QuestID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::QuestTimeLimitRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::QuestTimeLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTTIMELIMITEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
