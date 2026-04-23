#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SysMailGotoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18ECBF70)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18ECBDC0)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18ECBA90)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18ECBD60)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18ECC0F0)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ECBB10)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18ECC130)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ECC310)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18ECC500)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ECC810)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18ECC270)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ECC1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SysMailGotoConfigExcelTable_TypeDefinitionIndex = 14408;

	class SysMailGotoConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SysMailGotoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x567F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(SysMailGotoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x567F8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SysMailGotoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x56800);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SysMailGotoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x100E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SysMailGotoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x100E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailGotoConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SysMailGotoConfigRow* GetData(::System::UInt32 TemplateID)
		{
			return ((::RPG::GameCore::SysMailGotoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_GETDATA_OFFSET))(TemplateID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SysMailGotoConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SysMailGotoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
