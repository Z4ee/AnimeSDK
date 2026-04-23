#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BillboardIconConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18709680)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x187094D0)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x187091A0)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18709470)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18709800)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18709220)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18709840)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18709A20)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18709BC0)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18709ED0)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18709980)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x187098E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BillboardIconConfigExcelTable_TypeDefinitionIndex = 11846;

	class BillboardIconConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BillboardIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EEE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BillboardIconConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BillboardIconConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BillboardIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EEE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BillboardIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EEF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BillboardIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xBA70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BillboardIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xBA71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BillboardIconConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BillboardIconConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BillboardIconConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BillboardIconConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BillboardIconConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::BillboardIconConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BillboardIconConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BillboardIconConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
