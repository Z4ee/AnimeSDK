#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournBuildRefAvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19BC1D80)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BC1C10)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19BC1900)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19BC1BB0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19BC1F10)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BC1980)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19BC1F50)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BC2120)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19BC2290)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BC2600)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19BC2080)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BC1FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex = 14265;

	class RogueTournBuildRefAvatarExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x47620);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x47628);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x47630);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0xD020);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0xD021);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournBuildRefAvatarRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournBuildRefAvatarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournBuildRefAvatarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournBuildRefAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
