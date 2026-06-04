#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NavMapTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199CB470)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199CB340)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199CB030)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199CB2E0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199CB600)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199CB0B0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199CB640)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199CB810)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199CBB60)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199CBE80)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199CB770)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199CB6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavMapTabExcelTable_TypeDefinitionIndex = 13333;

	class NavMapTabExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x19110);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x19118);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x19120);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(NavMapTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x84F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NavMapTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x84F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::NavMapTabRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::NavMapTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::NavMapTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
