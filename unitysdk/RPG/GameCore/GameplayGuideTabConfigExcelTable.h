#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GuideType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameplayGuideTabConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189955F0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18995470)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETTYPEIDBYGUIDETYPE_OFFSET UNITYSDK_OFFSET(0x189964B0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GET_ALLTYPEIDS_OFFSET UNITYSDK_OFFSET(0x18996070)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18995140)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18995410)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18995770)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189951C0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x18996530)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x189957B0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18995990)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18995D60)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18996610)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189958F0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18995850)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x189960B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideTabConfigExcelTable_TypeDefinitionIndex = 12655;

	class GameplayGuideTabConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideTabConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideTabConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34530);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34538);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34540);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideType, ::System::UInt32>** StaticGet__GuideTypeIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideType, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34548);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__AllTypeIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34550);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE11);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE12);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideTabConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideTabConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideTabConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideTabConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GameplayGuideTabConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::GameplayGuideTabConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GameplayGuideTabConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameplayGuideTabConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_AllTypeIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GET_ALLTYPEIDS_OFFSET))();
		}

		static ::System::UInt32 GetTypeIDByGuideType(::RPG::GameCore::GuideType guideType)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GuideType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETTYPEIDBYGUIDETYPE_OFFSET))(guideType);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
