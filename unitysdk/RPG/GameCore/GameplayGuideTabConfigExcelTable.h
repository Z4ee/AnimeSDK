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

#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17246670)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172464F0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETTYPEIDBYGUIDETYPE_OFFSET UNITYSDK_OFFSET(0x17247530)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GET_ALLTYPEIDS_OFFSET UNITYSDK_OFFSET(0x172470F0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172461C0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17246490)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172467F0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17246240)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x172475B0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17246830)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17246A10)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17246DE0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17247690)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17246970)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172468D0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x17247130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideTabConfigExcelTable_TypeDefinitionIndex = 12222;

	class GameplayGuideTabConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20190);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideType, ::System::UInt32>** StaticGet__GuideTypeIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideType, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20198);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x201A0);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__AllTypeIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x201A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideTabConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideTabConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x201B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8720);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8721);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8722);
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
