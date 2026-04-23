#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MessageItemRaidEntranceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18AE5450)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18AE52A0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETRAIDENTRANCEITEMID_OFFSET UNITYSDK_OFFSET(0x18AE5D60)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18AE4F70)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18AE5240)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18AE55D0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18AE4FF0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x18AE61C0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18AE5610)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AE57F0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18AE5A50)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AE6260)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18AE5750)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18AE56B0)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18AE5DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemRaidEntranceExcelTable_TypeDefinitionIndex = 13680;

	class MessageItemRaidEntranceExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__RaidEntranceItem()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemRaidEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C2B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemRaidEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C2B8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemRaidEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C2C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemRaidEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C2C8);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageItemRaidEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD330);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageItemRaidEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD331);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageItemRaidEntranceExcelTable_TypeDefinitionIndex)->GetStaticField(0xD332);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemRaidEntranceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageItemRaidEntranceRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MessageItemRaidEntranceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageItemRaidEntranceRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageItemRaidEntranceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::UInt32 GetRaidEntranceItemID(::System::UInt32 raidID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_GETRAIDENTRANCEITEMID_OFFSET))(raidID);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
