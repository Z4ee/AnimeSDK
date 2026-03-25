#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/SpecialNPCDataExcelTable_IndexKey.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpecialNPCDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1775D5B0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1775D400)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1775D0E0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1775D3A0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1775D700)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1775D160)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1775D740)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1775D920)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1775DB60)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1775DFB0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1775D880)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1775D7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCDataExcelTable_TypeDefinitionIndex = 13871;

	class SpecialNPCDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x11580);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x11588);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x11590);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x5460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpecialNPCDataRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::SpecialNPCDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpecialNPCDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpecialNPCDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
