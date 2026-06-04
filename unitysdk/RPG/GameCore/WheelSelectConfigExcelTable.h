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

#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19E666A0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19E66530)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19E66220)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19E664D0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19E66830)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19E662A0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19E66870)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E66A40)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19E66C40)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E66FB0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19E669A0)
#define RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19E66900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WheelSelectConfigExcelTable_TypeDefinitionIndex = 12688;

	class WheelSelectConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WheelSelectConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WheelSelectConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(WheelSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA540);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(WheelSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA548);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WheelSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA550);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(WheelSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4470);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WheelSelectConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4471);
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

		static ::RPG::GameCore::WheelSelectConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::WheelSelectConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::WheelSelectConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::WheelSelectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHEELSELECTCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
