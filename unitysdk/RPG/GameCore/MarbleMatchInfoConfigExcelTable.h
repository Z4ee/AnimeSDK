#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleMatchInfoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D4AB660)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D4AB530)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D4AB220)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D4AB4D0)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D4AB7F0)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4AB2A0)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4AB830)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4ABA00)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D4ABF40)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4AC260)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D4AB960)
#define RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4AB8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex = 11833;

	class MarbleMatchInfoConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A2F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A2F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A300);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEEF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MarbleMatchInfoConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEEF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchInfoConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MarbleMatchInfoConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleMatchInfoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MarbleMatchInfoConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleMatchInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHINFOCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
