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

#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D575D00)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D575B90)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D575880)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D575B30)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D575E90)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D575900)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D575ED0)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5760A0)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D576270)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5765E0)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D576000)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D575F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex = 12314;

	class StrongChallengeQuestGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x20D50);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x20D58);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeQuestGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeQuestGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x20D60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xAB30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeQuestGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xAB31);
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

		static ::RPG::GameCore::StrongChallengeQuestGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StrongChallengeQuestGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StrongChallengeQuestGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StrongChallengeQuestGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
