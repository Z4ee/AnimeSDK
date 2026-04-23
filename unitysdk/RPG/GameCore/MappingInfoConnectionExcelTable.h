#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MappingInfoConnectionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A920C0)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A91F10)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A91BE0)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A91EB0)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A922D0)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A91C60)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A92310)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A924F0)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A926F0)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A92AA0)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A92450)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A923B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingInfoConnectionExcelTable_TypeDefinitionIndex = 11871;

	class MappingInfoConnectionExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoConnectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x33620);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoConnectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x33628);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoConnectionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoConnectionRow*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoConnectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x33630);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MappingInfoConnectionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC840);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MappingInfoConnectionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC841);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoConnectionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoConnectionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoConnectionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoConnectionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MappingInfoConnectionRow* GetData(::System::UInt32 SourceEntranceID, ::System::UInt32 SourceMappingInfoID)
		{
			return ((::RPG::GameCore::MappingInfoConnectionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_GETDATA_OFFSET))(SourceEntranceID, SourceMappingInfoID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MappingInfoConnectionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MappingInfoConnectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
