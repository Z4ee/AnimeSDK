#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class WheelSelectConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1910DFA0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1910DDF0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1910DAC0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1910DD90)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1910E170)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1910DB40)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1910E1B0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1910E390)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1910E590)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1910E8F0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1910E2F0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1910E250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WheelSelectConfigExcelTable_TypeDefinitionIndex = 12598;

	class WheelSelectConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WheelSelectConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WheelSelectConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(WheelSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x137C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(WheelSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x137C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WheelSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x137D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(WheelSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B40);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WheelSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WheelSelectConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WheelSelectConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WheelSelectConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WheelSelectConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::WheelSelectConfigRow* GetData(::System::UInt32 IndexID)
		{
			return ((::RPG::GameCore::WheelSelectConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_GETDATA_OFFSET))(IndexID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::WheelSelectConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::WheelSelectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
