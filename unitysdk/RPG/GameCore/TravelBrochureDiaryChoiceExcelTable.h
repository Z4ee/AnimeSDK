#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TravelBrochureDiaryChoiceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x190B4330)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x190B4180)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x190B3E50)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x190B4120)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x190B4500)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x190B3ED0)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x190B4540)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B4720)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x190B4980)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190B4CE0)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x190B4680)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x190B45E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureDiaryChoiceExcelTable_TypeDefinitionIndex = 14584;

	class TravelBrochureDiaryChoiceExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureDiaryChoiceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD640);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureDiaryChoiceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD648);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureDiaryChoiceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD650);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureDiaryChoiceExcelTable_TypeDefinitionIndex)->GetStaticField(0x5010);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureDiaryChoiceExcelTable_TypeDefinitionIndex)->GetStaticField(0x5011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TravelBrochureDiaryChoiceRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::TravelBrochureDiaryChoiceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TravelBrochureDiaryChoiceRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TravelBrochureDiaryChoiceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
