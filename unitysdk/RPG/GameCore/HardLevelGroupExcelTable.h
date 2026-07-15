#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HardLevelGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B66FB80)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B66FA10)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B66F700)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B66F9B0)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B66FD20)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B66F780)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B66FD60)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B66FF30)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B670470)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6707D0)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B66FE90)
#define RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B66FDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HardLevelGroupExcelTable_TypeDefinitionIndex = 13659;

	class HardLevelGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HardLevelGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B100);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(HardLevelGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B108);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HardLevelGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B110);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HardLevelGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x6370);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HardLevelGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x6371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HardLevelGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HardLevelGroupRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::HardLevelGroupRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HardLevelGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HardLevelGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HARDLEVELGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
