#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HudTemplateConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A094C0)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A09310)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A08FE0)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A092B0)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A09640)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A09060)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A09680)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A09860)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A09B50)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A09E60)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A097C0)
#define RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A09720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HudTemplateConfigExcelTable_TypeDefinitionIndex = 13045;

	class HudTemplateConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HudTemplateConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DEE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(HudTemplateConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DEE8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HudTemplateConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1DEF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HudTemplateConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7B40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HudTemplateConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7B41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HudTemplateConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HudTemplateConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::HudTemplateConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HudTemplateConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HudTemplateConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
