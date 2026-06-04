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

#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19DEEDA0)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19DEEC30)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19DEE920)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19DEEBD0)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19DEEF30)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19DEE9A0)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19DEEF70)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DEF140)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19DEF3F0)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DEF760)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19DEF0A0)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19DEF000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex = 11905;

	class TrackPhotoTrashCanConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x63E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x63E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x63F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3180);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TrackPhotoTrashCanConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3181);
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

		static ::RPG::GameCore::TrackPhotoTrashCanConfigRow* GetData(::RPG::GameCore::TrackPhotoCanType a1)
		{
			return ((::RPG::GameCore::TrackPhotoTrashCanConfigRow*(*)(::RPG::GameCore::TrackPhotoCanType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TrackPhotoTrashCanConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrackPhotoTrashCanConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
