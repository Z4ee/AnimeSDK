#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/EntranceShowType.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FuncUnlockConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x197AA3A0)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x197AA270)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_GETSHOWCONDITION_OFFSET UNITYSDK_OFFSET(0x197AABF0)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x197A9F60)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_HASSHOWCONDITION_OFFSET UNITYSDK_OFFSET(0x197AB090)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x197AA210)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x197AA4F0)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x197A9FE0)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x197AB170)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x197AA530)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x197AA700)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x197AA8D0)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x197AB200)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x197AA660)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x197AA5C0)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x197AAC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncUnlockConfigExcelTable_TypeDefinitionIndex = 12684;

	class FuncUnlockConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FuncUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x199E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FuncUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x199E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(FuncUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x199F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::EntranceShowType>*>** StaticGet__ShowConditions()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::EntranceShowType>*>**)Il2CppClass::FromTypeDefinitionIndex(FuncUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x199F8);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FuncUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x86D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FuncUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x86D1);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FuncUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x86D2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FuncUnlockConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FuncUnlockConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FuncUnlockConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FuncUnlockConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::EntranceShowType>* GetShowCondition(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::EntranceShowType>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_GETSHOWCONDITION_OFFSET))(a1);
		}

		static ::System::Boolean HasShowCondition(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_HASSHOWCONDITION_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
