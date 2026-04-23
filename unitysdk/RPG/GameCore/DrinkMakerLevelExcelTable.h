#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1888A240)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1888A090)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18889D60)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1888A030)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1888A410)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18889DE0)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1888A450)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1888A630)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1888A840)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1888ABA0)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1888A590)
#define RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1888A4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerLevelExcelTable_TypeDefinitionIndex = 12455;

	class DrinkMakerLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x33F20);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x33F28);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x33F30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xCAF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xCAF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerLevelRow* GetData(::System::UInt32 Level)
		{
			return ((::RPG::GameCore::DrinkMakerLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_GETDATA_OFFSET))(Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerLevelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERLEVELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
