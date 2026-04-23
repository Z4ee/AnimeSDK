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

#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18C32E10)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C32C60)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18C32930)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18C32C00)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18C32FE0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C329B0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18C33020)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C33200)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18C33660)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C339C0)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18C33160)
#define RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C330C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex = 13740;

	class PlayerReturnJourneyItemExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x46730);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnJourneyItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x46738);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x46740);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xF5C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnJourneyItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xF5C1);
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

		static ::RPG::GameCore::PlayerReturnJourneyItemRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::PlayerReturnJourneyItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE_GETDATA_OFFSET))(ID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlayerReturnJourneyItemRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnJourneyItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNJOURNEYITEMEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
