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

#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E096980)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E096810)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E096730)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E0967B0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E095DB0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E095DF0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E096020)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E0961F0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E0963C0)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E096B30)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E096150)
#define RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E0960B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SettingDisplayModeExcelTable_TypeDefinitionIndex = 14930;

	class SettingDisplayModeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SettingDisplayModeExcelTable_TypeDefinitionIndex)->GetStaticField(0xE560);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SettingDisplayModeExcelTable_TypeDefinitionIndex)->GetStaticField(0xE568);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SettingDisplayModeRow*>**)Il2CppClass::FromTypeDefinitionIndex(SettingDisplayModeExcelTable_TypeDefinitionIndex)->GetStaticField(0xE570);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SettingDisplayModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x4610);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SettingDisplayModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x4611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__CCTOR_OFFSET))();
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SettingDisplayModeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SettingDisplayModeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE__ADDITEM_OFFSET))(a1);
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

		static ::RPG::GameCore::SettingDisplayModeRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::SettingDisplayModeRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
