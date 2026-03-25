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

#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171757D0)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17175620)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171752F0)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171755C0)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17175950)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17175370)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17175990)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17175B70)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17175D80)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17176090)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17175AD0)
#define RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17175A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerChatExcelTable_TypeDefinitionIndex = 12028;

	class DrinkMakerChatExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerChatRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerChatRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerChatExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A920);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerChatExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A928);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerChatExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A930);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerChatExcelTable_TypeDefinitionIndex)->GetStaticField(0xE070);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerChatExcelTable_TypeDefinitionIndex)->GetStaticField(0xE071);
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

		static ::RPG::GameCore::DrinkMakerChatRow* GetData(::System::UInt32 ChatID)
		{
			return ((::RPG::GameCore::DrinkMakerChatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE_GETDATA_OFFSET))(ChatID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerChatRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerChatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
