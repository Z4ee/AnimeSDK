#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicSetConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19AC39A0)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19AC3870)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19AC3560)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19AC3810)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19AC3AF0)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19AC35E0)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19AC3B30)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AC3D00)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19AC4120)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AC4440)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19AC3C60)
#define RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19AC3BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetConfigExcelTable_TypeDefinitionIndex = 13908;

	class RelicSetConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42260);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42268);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42270);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicSetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xBCD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicSetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xBCD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicSetConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RelicSetConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicSetConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicSetConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
