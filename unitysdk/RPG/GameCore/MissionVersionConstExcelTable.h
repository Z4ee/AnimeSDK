#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionVersionConstRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D1AEBB0)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1AEA80)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D1AE770)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D1AEA20)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D1AED40)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1AE7F0)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1AED80)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1AEF50)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D1AF0E0)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1AF400)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D1AEEB0)
#define RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1AEE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionVersionConstExcelTable_TypeDefinitionIndex = 14058;

	class MissionVersionConstExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MissionVersionConstExcelTable_TypeDefinitionIndex)->GetStaticField(0xB5B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*>**)Il2CppClass::FromTypeDefinitionIndex(MissionVersionConstExcelTable_TypeDefinitionIndex)->GetStaticField(0xB5B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MissionVersionConstExcelTable_TypeDefinitionIndex)->GetStaticField(0xB5C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MissionVersionConstExcelTable_TypeDefinitionIndex)->GetStaticField(0x2730);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MissionVersionConstExcelTable_TypeDefinitionIndex)->GetStaticField(0x2731);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionVersionConstRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MissionVersionConstRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MissionVersionConstRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MissionVersionConstRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MissionVersionConstRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONVERSIONCONSTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
