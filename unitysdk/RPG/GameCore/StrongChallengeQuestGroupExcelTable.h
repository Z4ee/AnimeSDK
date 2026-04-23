#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StrongChallengeQuestGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18EA9A40)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18EA9890)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18EA9560)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18EA9830)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18EA9C10)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18EA95E0)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18EA9C50)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EA9E30)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18EAA000)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EAA360)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18EA9D90)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18EA9CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex = 11728;

	class StrongChallengeQuestGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x54D50);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x54D58);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeQuestGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeQuestGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x54D60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x10010);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x10011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeQuestGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeQuestGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeQuestGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeQuestGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StrongChallengeQuestGroupRow* GetData(::System::UInt32 QuestGroupID)
		{
			return ((::RPG::GameCore::StrongChallengeQuestGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_GETDATA_OFFSET))(QuestGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StrongChallengeQuestGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::StrongChallengeQuestGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
