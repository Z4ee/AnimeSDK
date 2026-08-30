#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueCaptureMonsterConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D916440)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D9162D0)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D915FC0)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D916270)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D9165D0)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D916040)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D916610)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9167E0)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D916A30)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D916DA0)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D916740)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9166A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex = 14504;

	class RogueCaptureMonsterConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCFA0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCFA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCFB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueCaptureMonsterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCaptureMonsterConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueCaptureMonsterConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueCaptureMonsterConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueCaptureMonsterConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueCaptureMonsterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
