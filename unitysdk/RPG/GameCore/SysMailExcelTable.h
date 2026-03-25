#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SysMailRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SYSMAILEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x177A4990)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177A47E0)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x177A44B0)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x177A4780)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x177A4B10)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x177A4530)
#define RPG_GAMECORE_SYSMAILEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x177A4B50)
#define RPG_GAMECORE_SYSMAILEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x177A4D30)
#define RPG_GAMECORE_SYSMAILEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x177A5080)
#define RPG_GAMECORE_SYSMAILEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x177A5390)
#define RPG_GAMECORE_SYSMAILEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x177A4C90)
#define RPG_GAMECORE_SYSMAILEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x177A4BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SysMailExcelTable_TypeDefinitionIndex = 13931;

	class SysMailExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SysMailExcelTable_TypeDefinitionIndex)->GetStaticField(0x130B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SysMailExcelTable_TypeDefinitionIndex)->GetStaticField(0x130B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*>**)Il2CppClass::FromTypeDefinitionIndex(SysMailExcelTable_TypeDefinitionIndex)->GetStaticField(0x130C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SysMailExcelTable_TypeDefinitionIndex)->GetStaticField(0x5A00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SysMailExcelTable_TypeDefinitionIndex)->GetStaticField(0x5A01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SysMailRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SysMailRow* GetData(::System::UInt32 MailID)
		{
			return ((::RPG::GameCore::SysMailRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_GETDATA_OFFSET))(MailID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SysMailRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SysMailRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
