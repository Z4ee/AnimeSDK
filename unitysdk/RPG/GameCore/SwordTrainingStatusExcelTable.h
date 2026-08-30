#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingStatusRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E15A960)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E15A7F0)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E15A4E0)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E15A790)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E15AAF0)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E15A560)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E15AB30)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E15AD00)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E15AFE0)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15B350)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E15AC60)
#define RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E15ABC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStatusExcelTable_TypeDefinitionIndex = 12343;

	class SwordTrainingStatusExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingStatusExcelTable_TypeDefinitionIndex)->GetStaticField(0xE6E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingStatusExcelTable_TypeDefinitionIndex)->GetStaticField(0xE6E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingStatusExcelTable_TypeDefinitionIndex)->GetStaticField(0xE6F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingStatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x4670);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingStatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x4671);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStatusRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingStatusRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingStatusRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SwordTrainingStatusRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingStatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
