#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SettingImageQualityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DA9E600)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DA9E490)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DA9E3B0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DA9E430)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DA9DA30)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA9DA70)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA9DCA0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA9DE70)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DA9E040)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA9E7B0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DA9DDD0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DA9DD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SettingImageQualityExcelTable_TypeDefinitionIndex = 15096;

	class SettingImageQualityExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>**)Il2CppClass::FromTypeDefinitionIndex(SettingImageQualityExcelTable_TypeDefinitionIndex)->GetStaticField(0x17300);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SettingImageQualityExcelTable_TypeDefinitionIndex)->GetStaticField(0x17308);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SettingImageQualityExcelTable_TypeDefinitionIndex)->GetStaticField(0x17310);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SettingImageQualityExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SettingImageQualityExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SettingImageQualityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SettingImageQualityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SettingImageQualityRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::SettingImageQualityRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
