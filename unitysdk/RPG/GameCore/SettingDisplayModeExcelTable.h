#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SettingDisplayModeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18E4AE90)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18E4ACE0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18E4A9B0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18E4AC80)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18E4B080)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18E4AA30)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18E4B0C0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E4B2A0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18E4B470)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E4B7D0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18E4B200)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18E4B160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SettingDisplayModeExcelTable_TypeDefinitionIndex = 14305;

	class SettingDisplayModeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SettingDisplayModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x50350);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>**)Il2CppClass::FromTypeDefinitionIndex(SettingDisplayModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x50358);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SettingDisplayModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x50360);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SettingDisplayModeExcelTable_TypeDefinitionIndex)->GetStaticField(0xFD10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SettingDisplayModeExcelTable_TypeDefinitionIndex)->GetStaticField(0xFD11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SettingDisplayModeRow* GetData(::System::String* ID)
		{
			return ((::RPG::GameCore::SettingDisplayModeRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SettingDisplayModeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SettingDisplayModeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
