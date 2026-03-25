#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MusicRhythmGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17466BD0)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17466A50)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17466720)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174669F0)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17466D50)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x174667A0)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17466D90)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17466F70)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17467690)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174679A0)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17466ED0)
#define RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17466E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmGroupExcelTable_TypeDefinitionIndex = 13060;

	class MusicRhythmGroupExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F1A0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F1A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F1B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xF3F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xF3F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MusicRhythmGroupRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MusicRhythmGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MusicRhythmGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
