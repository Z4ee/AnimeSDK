#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BoxingClubStageGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1871B860)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1871B6B0)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1871B380)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1871B650)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1871BA30)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1871B400)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1871BA70)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1871BC50)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1871BF30)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1871C290)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1871BBB0)
#define RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1871BB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubStageGroupConfigExcelTable_TypeDefinitionIndex = 12201;

	class BoxingClubStageGroupConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubStageGroupConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F630);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubStageGroupConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubStageGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubStageGroupConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F638);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubStageGroupConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F640);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubStageGroupConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xBDA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubStageGroupConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xBDA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubStageGroupConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubStageGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubStageGroupConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubStageGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BoxingClubStageGroupConfigRow* GetData(::System::UInt32 StageGroupID)
		{
			return ((::RPG::GameCore::BoxingClubStageGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_GETDATA_OFFSET))(StageGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BoxingClubStageGroupConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BoxingClubStageGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBSTAGEGROUPCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
