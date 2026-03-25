#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeActivityRewardConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17056A60)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x170568B0)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17056580)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17056850)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17056C30)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17056600)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17056C70)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17056E50)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17057050)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170573B0)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17056DB0)
#define RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17056D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeActivityRewardConfigExcelTable_TypeDefinitionIndex = 11809;

	class ChallengeActivityRewardConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeActivityRewardConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x259F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeActivityRewardConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x259F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRewardConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRewardConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeActivityRewardConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25A00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChallengeActivityRewardConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC250);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChallengeActivityRewardConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC251);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRewardConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRewardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRewardConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRewardConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeActivityRewardConfigRow* GetData(::System::UInt32 ActivityRewardID)
		{
			return ((::RPG::GameCore::ChallengeActivityRewardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_GETDATA_OFFSET))(ActivityRewardID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChallengeActivityRewardConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeActivityRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYREWARDCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
