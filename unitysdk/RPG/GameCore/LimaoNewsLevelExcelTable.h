#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LimaoNewsLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B08C8B0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B08C740)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B08C430)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B08C6E0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B08CA40)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B08C4B0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B08CA80)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B08CC50)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B08CF70)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B08D2E0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B08CBB0)
#define RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B08CB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsLevelExcelTable_TypeDefinitionIndex = 13452;

	class LimaoNewsLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x4220);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x4228);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x4230);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B90);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LimaoNewsLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LimaoNewsLevelRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LimaoNewsLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LimaoNewsLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LimaoNewsLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
