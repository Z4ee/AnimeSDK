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

#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D9585E0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D9584B0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETTYPEIDBYGUIDETYPE_OFFSET UNITYSDK_OFFSET(0x1D9594B0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GET_ALLTYPEIDS_OFFSET UNITYSDK_OFFSET(0x1D959030)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D9581A0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D958450)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D958730)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D958220)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1D959530)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D958770)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D958940)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D958D10)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9595E0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D9588A0)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D958800)
#define RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D959070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideTabConfigExcelTable_TypeDefinitionIndex = 13273;

	class GameplayGuideTabConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__AllTypeIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25430);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25438);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideType, ::System::UInt32>** StaticGet__GuideTypeIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GuideType, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25440);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25448);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideTabConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideTabConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25450);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xB420);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xB421);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideTabConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xB422);
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

		static ::RPG::GameCore::GameplayGuideTabConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameplayGuideTabConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GameplayGuideTabConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameplayGuideTabConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_AllTypeIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GET_ALLTYPEIDS_OFFSET))();
		}

		static ::System::UInt32 GetTypeIDByGuideType(::RPG::GameCore::GuideType a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GuideType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDETABCONFIGEXCELTABLE_GETTYPEIDBYGUIDETYPE_OFFSET))(a1);
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
