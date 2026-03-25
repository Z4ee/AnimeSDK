#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityEvolveBuildCardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16EAB640)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16EAB4C0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16EAB190)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16EAB460)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16EAB7C0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16EAB210)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16EAB800)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EAB9E0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16EABDA0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EAC0B0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16EAB940)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16EAB8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildCardExcelTable_TypeDefinitionIndex = 10688;

	class ActivityEvolveBuildCardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildCardExcelTable_TypeDefinitionIndex)->GetStaticField(0x1ED50);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildCardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildCardRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildCardExcelTable_TypeDefinitionIndex)->GetStaticField(0x1ED58);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildCardExcelTable_TypeDefinitionIndex)->GetStaticField(0x1ED60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildCardExcelTable_TypeDefinitionIndex)->GetStaticField(0x7F00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildCardExcelTable_TypeDefinitionIndex)->GetStaticField(0x7F01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildCardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildCardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildCardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildCardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityEvolveBuildCardRow* GetData(::System::UInt32 LvID)
		{
			return ((::RPG::GameCore::ActivityEvolveBuildCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_GETDATA_OFFSET))(LvID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityEvolveBuildCardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityEvolveBuildCardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDCARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
