#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NpcMonsterTrackQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199D2460)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199D22F0)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199D2210)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199D2290)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199D25F0)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199D2630)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199D2860)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199D2A30)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199D2BF0)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199D2F60)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199D2990)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199D28F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcMonsterTrackQuestExcelTable_TypeDefinitionIndex = 13850;

	class NpcMonsterTrackQuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(NpcMonsterTrackQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x333B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NpcMonsterTrackQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x333B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NpcMonsterTrackQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NpcMonsterTrackQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(NpcMonsterTrackQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x333C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(NpcMonsterTrackQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xA250);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NpcMonsterTrackQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0xA251);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NpcMonsterTrackQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NpcMonsterTrackQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NpcMonsterTrackQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NpcMonsterTrackQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::NpcMonsterTrackQuestRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::NpcMonsterTrackQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::NpcMonsterTrackQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::NpcMonsterTrackQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
