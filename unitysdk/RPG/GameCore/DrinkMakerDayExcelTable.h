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

#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x196C2A90)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196C2920)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x196C2610)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x196C28C0)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x196C2BE0)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x196C2690)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x196C2C20)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x196C2DF0)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x196C2FF0)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x196C3310)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x196C2D50)
#define RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x196C2CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerDayExcelTable_TypeDefinitionIndex = 12545;

	class DrinkMakerDayExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x13360);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x13368);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDayRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x13370);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x7990);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x7991);
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

		static ::RPG::GameCore::DrinkMakerDayRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerDayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerDayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerDayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
