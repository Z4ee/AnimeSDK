#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumAreaMissionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199BAF50)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199BADE0)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199BAAD0)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199BAD80)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199BB120)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199BAB50)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199BB160)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199BB330)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199BB580)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199BB930)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199BB290)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199BB1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaMissionExcelTable_TypeDefinitionIndex = 13549;

	class MuseumAreaMissionExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x32B20);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x32B28);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x32B30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x9FE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x9FE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumAreaMissionRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MuseumAreaMissionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumAreaMissionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumAreaMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
