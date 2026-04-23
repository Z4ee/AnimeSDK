#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AchievementLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x185F69D0)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185F6820)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x185F64F0)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x185F67C0)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x185F6BA0)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x185F6570)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x185F6BE0)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x185F6DC0)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x185F6FC0)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x185F7320)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x185F6D20)
#define RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x185F6C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementLevelExcelTable_TypeDefinitionIndex = 10448;

	class AchievementLevelExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x5CE0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x5CE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(AchievementLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x5CF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AchievementLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AchievementLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AchievementLevelRow* GetData(::System::UInt32 Level)
		{
			return ((::RPG::GameCore::AchievementLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_GETDATA_OFFSET))(Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AchievementLevelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AchievementLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
