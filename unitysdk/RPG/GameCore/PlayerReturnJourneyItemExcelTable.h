#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerReturnJourneyItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19A3FF30)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19A3FDC0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19A3FAB0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19A3FD60)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19A400C0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A3FB30)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19A40100)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A402D0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19A40730)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A40AA0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19A40230)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19A40190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex = 13808;

	class PlayerReturnJourneyItemExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x19380);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x19388);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x19390);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x8590);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x8591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnJourneyItemRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerReturnJourneyItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlayerReturnJourneyItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnJourneyItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
