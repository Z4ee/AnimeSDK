#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETCHALLENGEIDSBYGROUP_OFFSET UNITYSDK_OFFSET(0x1705CE80)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1705BE80)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1705BD00)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1705B9D0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1705BCA0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1705C000)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1705BA50)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1705D1E0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1705C040)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0x1705D280)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1705C220)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1705CB60)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1705D420)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1705C180)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1705C0E0)
#define RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1705CEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeMazeConfigExcelTable_TypeDefinitionIndex = 11824;

	class ChallengeMazeConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeMazeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C70);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeMazeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C78);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeMazeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C80);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__ChallengeIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeMazeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C88);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChallengeMazeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC370);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChallengeMazeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC371);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChallengeMazeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC372);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeMazeConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::ChallengeMazeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChallengeMazeConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetChallengeIDsByGroup(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_GETCHALLENGEIDSBYGROUP_OFFSET))(groupID);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _AddChallengeGroup(::RPG::GameCore::ChallengeMazeConfigRow* row)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeMazeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEMAZECONFIGEXCELTABLE__ADDCHALLENGEGROUP_OFFSET))(row);
		}
	};
}
