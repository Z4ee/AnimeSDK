#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeGroupExtraConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1705AFB0)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1705AE00)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1705AAD0)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1705ADA0)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1705B180)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1705AB50)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1705B1C0)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1705B3A0)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1705B520)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1705B880)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1705B300)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1705B260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeGroupExtraConfigExcelTable_TypeDefinitionIndex = 11821;

	class ChallengeGroupExtraConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C30);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupExtraConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupExtraConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C38);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC350);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC351);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupExtraConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupExtraConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupExtraConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupExtraConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeGroupExtraConfigRow* GetData(::System::UInt32 GroupID)
		{
			return ((::RPG::GameCore::ChallengeGroupExtraConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_GETDATA_OFFSET))(GroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChallengeGroupExtraConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeGroupExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
