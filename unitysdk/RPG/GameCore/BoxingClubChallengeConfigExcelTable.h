#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BoxingClubChallengeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18716830)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x187166B0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18716380)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18716650)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x187169B0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18716400)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x187169F0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18716BD0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18717280)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18717590)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18716B30)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18716A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubChallengeConfigExcelTable_TypeDefinitionIndex = 12199;

	class BoxingClubChallengeConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F3B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F3B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F3C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xBCE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xBCE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BoxingClubChallengeConfigRow* GetData(::System::UInt32 ChallengeID)
		{
			return ((::RPG::GameCore::BoxingClubChallengeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_GETDATA_OFFSET))(ChallengeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BoxingClubChallengeConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BoxingClubChallengeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
