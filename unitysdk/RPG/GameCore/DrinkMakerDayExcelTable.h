#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerDayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18885EC0)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18885D10)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188859E0)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18885CB0)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18886040)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18885A60)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18886080)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18886260)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18886470)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18886780)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188861C0)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18886120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerDayExcelTable_TypeDefinitionIndex = 12457;

	class DrinkMakerDayExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDayRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x33DF0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x33DF8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x33E00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDayExcelTable_TypeDefinitionIndex)->GetStaticField(0xCAA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDayExcelTable_TypeDefinitionIndex)->GetStaticField(0xCAA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerDayRow* GetData(::System::UInt32 DayID)
		{
			return ((::RPG::GameCore::DrinkMakerDayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_GETDATA_OFFSET))(DayID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerDayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerDayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
