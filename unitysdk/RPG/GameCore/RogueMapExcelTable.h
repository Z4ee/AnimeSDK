#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMapRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17619450)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x176192A0)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETSTARTSITEID_OFFSET UNITYSDK_OFFSET(0x17619F30)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17618F70)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17619240)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17619660)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17618FF0)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1761A340)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x176196A0)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17619880)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17619B80)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1761A3E0)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x176197E0)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17619740)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x17619FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMapExcelTable_TypeDefinitionIndex = 13436;

	class RogueMapExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x35310);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x35318);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x35320);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__MapToStartSite()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x35328);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x10AC0);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x10AC1);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x10AC2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueMapRow* GetData(::System::UInt32 RogueMapID, ::System::UInt32 SiteID)
		{
			return ((::RPG::GameCore::RogueMapRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETDATA_OFFSET))(RogueMapID, SiteID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMapRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::UInt32 GetStartSiteID(::System::UInt32 mapID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETSTARTSITEID_OFFSET))(mapID);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}
	};
}
