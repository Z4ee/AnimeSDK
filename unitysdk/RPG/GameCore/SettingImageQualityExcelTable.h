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

#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x176E87B0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x176E8600)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x176E82D0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x176E85A0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x176E89A0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x176E8350)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x176E89E0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x176E8BC0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x176E8D90)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x176E90F0)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x176E8B20)
#define RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x176E8A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SettingImageQualityExcelTable_TypeDefinitionIndex = 13835;

	class SettingImageQualityExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SettingImageQualityExcelTable_TypeDefinitionIndex)->GetStaticField(0xE1E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingImageQualityRow*>**)Il2CppClass::FromTypeDefinitionIndex(SettingImageQualityExcelTable_TypeDefinitionIndex)->GetStaticField(0xE1E8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SettingImageQualityExcelTable_TypeDefinitionIndex)->GetStaticField(0xE1F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SettingImageQualityExcelTable_TypeDefinitionIndex)->GetStaticField(0x4C80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SettingImageQualityExcelTable_TypeDefinitionIndex)->GetStaticField(0x4C81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__CCTOR_OFFSET))();
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

		static ::RPG::GameCore::SettingImageQualityRow* GetData(::System::String* ID)
		{
			return ((::RPG::GameCore::SettingImageQualityRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE_GETDATA_OFFSET))(ID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SettingImageQualityRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SettingImageQualityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGIMAGEQUALITYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
