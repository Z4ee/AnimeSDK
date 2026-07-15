#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesBusinessDayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B4D5320)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B4D51B0)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B4D4EA0)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B4D5150)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B4D54B0)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B4D4F20)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B4D54F0)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4D56C0)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B4D5A50)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4D5DC0)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B4D5620)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B4D5580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBusinessDayExcelTable_TypeDefinitionIndex = 11760;

	class PlanetFesBusinessDayExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x38970);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x38978);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x38980);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x9750);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayExcelTable_TypeDefinitionIndex)->GetStaticField(0x9751);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBusinessDayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesBusinessDayRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesBusinessDayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlanetFesBusinessDayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesBusinessDayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
