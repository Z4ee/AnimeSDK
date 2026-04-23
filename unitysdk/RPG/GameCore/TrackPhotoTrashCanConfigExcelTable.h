#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/TrackPhotoCanType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrackPhotoTrashCanConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x190A4050)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x190A3EA0)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x190A3B70)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x190A3E40)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x190A4220)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x190A3BF0)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x190A4260)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A4440)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x190A46F0)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190A4A50)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x190A43A0)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x190A4300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex = 11809;

	class TrackPhotoTrashCanConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8860);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8868);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8870);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TrackPhotoTrashCanConfigRow* GetData(::RPG::GameCore::TrackPhotoCanType CanTypeID)
		{
			return ((::RPG::GameCore::TrackPhotoTrashCanConfigRow*(*)(::RPG::GameCore::TrackPhotoCanType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_GETDATA_OFFSET))(CanTypeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TrackPhotoTrashCanConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrackPhotoTrashCanConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
