#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MainMissionTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A844C0)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A84310)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A83FE0)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A842B0)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A84650)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A84060)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A84690)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A84870)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A84DE0)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A850F0)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A847D0)
#define RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A84730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionTypeConfigExcelTable_TypeDefinitionIndex = 13405;

	class MainMissionTypeConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x315A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionTypeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x315A8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x315B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MainMissionTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC5D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MainMissionTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC5D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionTypeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionTypeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MainMissionTypeConfigRow* GetData(::RPG::GameCore::MainMissionType Type)
		{
			return ((::RPG::GameCore::MainMissionTypeConfigRow*(*)(::RPG::GameCore::MainMissionType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_GETDATA_OFFSET))(Type);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MainMissionTypeConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONTYPECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
