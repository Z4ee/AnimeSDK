#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkRoundRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CFE5370)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CFE5200)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CFE4EF0)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CFE51A0)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CFE5500)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFE4F70)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFE5540)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFE5710)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CFE5900)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFE5C70)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CFE5670)
#define RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFE55D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkRoundExcelTable_TypeDefinitionIndex = 11154;

	class ClockParkRoundExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkRoundExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C120);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRoundRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRoundRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkRoundExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C128);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkRoundExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C130);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkRoundExcelTable_TypeDefinitionIndex)->GetStaticField(0x9A00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkRoundExcelTable_TypeDefinitionIndex)->GetStaticField(0x9A01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRoundRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRoundRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRoundRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkRoundRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkRoundRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClockParkRoundRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkRoundRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkRoundRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKROUNDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
