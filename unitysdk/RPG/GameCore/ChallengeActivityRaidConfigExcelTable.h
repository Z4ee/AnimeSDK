#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeActivityRaidConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x187BA430)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x187BA280)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x187B9F50)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x187BA220)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x187BA600)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x187B9FD0)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x187BA640)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x187BA820)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x187BAA80)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x187BADE0)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x187BA780)
#define RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x187BA6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeActivityRaidConfigExcelTable_TypeDefinitionIndex = 12234;

	class ChallengeActivityRaidConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeActivityRaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27490);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRaidConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRaidConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeActivityRaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27498);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeActivityRaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x274A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChallengeActivityRaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA650);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChallengeActivityRaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA651);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRaidConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRaidConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRaidConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityRaidConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeActivityRaidConfigRow* GetData(::System::UInt32 ChallengeID)
		{
			return ((::RPG::GameCore::ChallengeActivityRaidConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_GETDATA_OFFSET))(ChallengeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChallengeActivityRaidConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeActivityRaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTIVITYRAIDCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
