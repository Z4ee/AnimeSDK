#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NPCDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_NPCDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1746B4F0)
#define RPG_GAMECORE_NPCDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1746B340)
#define RPG_GAMECORE_NPCDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1746B010)
#define RPG_GAMECORE_NPCDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1746B2E0)
#define RPG_GAMECORE_NPCDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1746B670)
#define RPG_GAMECORE_NPCDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1746B090)
#define RPG_GAMECORE_NPCDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1746B6B0)
#define RPG_GAMECORE_NPCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1746B890)
#define RPG_GAMECORE_NPCDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1746BBE0)
#define RPG_GAMECORE_NPCDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1746BEF0)
#define RPG_GAMECORE_NPCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1746B7F0)
#define RPG_GAMECORE_NPCDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1746B750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCDataExcelTable_TypeDefinitionIndex = 13078;

	class NPCDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(NPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F230);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(NPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F238);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F240);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xF420);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(NPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xF421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::NPCDataRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::NPCDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::NPCDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
