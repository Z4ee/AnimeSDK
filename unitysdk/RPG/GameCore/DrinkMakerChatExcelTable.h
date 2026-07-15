#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerChatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BB1B390)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BB1B220)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1BB1AF10)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1BB1B1C0)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1BB1B4E0)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BB1AF90)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1BB1B520)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB1B6F0)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1BB1B900)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB1BC20)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1BB1B650)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BB1B5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerChatExcelTable_TypeDefinitionIndex = 12686;

	class DrinkMakerChatExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerChatExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F710);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerChatExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F718);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerChatRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerChatRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerChatExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F720);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerChatExcelTable_TypeDefinitionIndex)->GetStaticField(0x82D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerChatExcelTable_TypeDefinitionIndex)->GetStaticField(0x82D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerChatRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerChatRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerChatRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerChatRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerChatRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerChatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerChatRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerChatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
