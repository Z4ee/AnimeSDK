#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityVersionBannerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D69D540)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D69D3D0)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D69D0C0)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D69D370)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D69D690)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D69D140)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D69D6D0)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D69D8A0)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D69DA30)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D69DD50)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D69D800)
#define RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D69D760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityVersionBannerExcelTable_TypeDefinitionIndex = 11214;

	class ActivityVersionBannerExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityVersionBannerExcelTable_TypeDefinitionIndex)->GetStaticField(0x44900);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVersionBannerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVersionBannerRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityVersionBannerExcelTable_TypeDefinitionIndex)->GetStaticField(0x44908);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityVersionBannerExcelTable_TypeDefinitionIndex)->GetStaticField(0x44910);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityVersionBannerExcelTable_TypeDefinitionIndex)->GetStaticField(0x10320);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityVersionBannerExcelTable_TypeDefinitionIndex)->GetStaticField(0x10321);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVersionBannerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVersionBannerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVersionBannerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVersionBannerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityVersionBannerRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityVersionBannerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityVersionBannerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityVersionBannerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVERSIONBANNEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
