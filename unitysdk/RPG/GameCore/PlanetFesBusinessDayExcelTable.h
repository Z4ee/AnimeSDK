#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesBusinessDayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x174B8A10)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x174B8860)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x174B8530)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174B8800)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x174B8BE0)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x174B85B0)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x174B8C20)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x174B8E00)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x174B9190)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174B94F0)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x174B8D60)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x174B8CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBusinessDayExcelTable_TypeDefinitionIndex = 11158;

	class PlanetFesBusinessDayExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x30060);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x30068);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x30070);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF840);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF841);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesBusinessDayRow* GetData(::System::UInt32 BusinessDay)
		{
			return ((::RPG::GameCore::PlanetFesBusinessDayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GETDATA_OFFSET))(BusinessDay);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlanetFesBusinessDayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesBusinessDayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
