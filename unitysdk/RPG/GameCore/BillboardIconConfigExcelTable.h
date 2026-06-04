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

#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x194DC860)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x194DC6F0)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x194DC3E0)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x194DC690)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x194DC9B0)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x194DC460)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x194DC9F0)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x194DCBC0)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x194DCD60)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x194DD080)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x194DCB20)
#define RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x194DCA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BillboardIconConfigExcelTable_TypeDefinitionIndex = 11941;

	class BillboardIconConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BillboardIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6490);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BillboardIconConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BillboardIconConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BillboardIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6498);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BillboardIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x64A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BillboardIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BillboardIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31B1);
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

		static ::RPG::GameCore::BillboardIconConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BillboardIconConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BillboardIconConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BillboardIconConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDICONCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
