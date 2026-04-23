#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerGuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188878A0)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18887720)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188873F0)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188876C0)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18887A20)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18887470)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18887A60)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18887C40)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18888110)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18888420)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18887BA0)
#define RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18887B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestExcelTable_TypeDefinitionIndex = 12463;

	class DrinkMakerGuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x33E60);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x33E68);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x33E70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xCAC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xCAC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerGuestRow* GetData(::System::UInt32 GuestID)
		{
			return ((::RPG::GameCore::DrinkMakerGuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_GETDATA_OFFSET))(GuestID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerGuestRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerGuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
