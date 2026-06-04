#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BoxingClubChallengeSeasonConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETCHALLENGEIDTYPE_OFFSET UNITYSDK_OFFSET(0x194EB700)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x194EA650)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x194EA4E0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETQUESTIDTYPE_OFFSET UNITYSDK_OFFSET(0x194EAFF0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x194EA1D0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x194EA480)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x194EA7E0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x194EA250)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x194EB7E0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x194EA820)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x194EA9F0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x194EACD0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x194EB8D0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x194EA950)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x194EA8B0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x194EB0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex = 12282;

	class BoxingClubChallengeSeasonConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6AB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6AB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6AC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>** StaticGet__ChallengeIDToType()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6AC8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>** StaticGet__QuestIDToType()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6AD0);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3400);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3401);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3402);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BoxingClubChallengeSeasonConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::RPG::GameCore::BoxingClubActivityType GetQuestIDType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BoxingClubActivityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETQUESTIDTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::BoxingClubActivityType GetChallengeIDType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BoxingClubActivityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETCHALLENGEIDTYPE_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
