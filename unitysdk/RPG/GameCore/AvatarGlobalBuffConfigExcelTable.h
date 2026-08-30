#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarGlobalBuffConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETBYMAZEBUFFABILITY_OFFSET UNITYSDK_OFFSET(0x1C5905B0)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETBYMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x1C590070)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C58F250)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C58F120)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C58EE10)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C58F0C0)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C58F420)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C58EE90)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1C590660)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C58F460)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C58F630)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C58FD10)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5906A0)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C58F590)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C58F4F0)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__REBUILDMAPPING_OFFSET UNITYSDK_OFFSET(0x1C5901A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex = 12706;

	class AvatarGlobalBuffConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>** StaticGet__MazeBuffAbilityToConfigMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5CE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5CE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>** StaticGet__MazeBuffIDToConfigMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5CF0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5CF8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5D00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarGlobalBuffConfigRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AvatarGlobalBuffConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarGlobalBuffConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarGlobalBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarGlobalBuffConfigRow* GetByMazeBuffID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarGlobalBuffConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETBYMAZEBUFFID_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarGlobalBuffConfigRow* GetByMazeBuffAbility(::System::String* a1)
		{
			return ((::RPG::GameCore::AvatarGlobalBuffConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETBYMAZEBUFFABILITY_OFFSET))(a1);
		}

		static ::System::Void _RebuildMapping()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__REBUILDMAPPING_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
