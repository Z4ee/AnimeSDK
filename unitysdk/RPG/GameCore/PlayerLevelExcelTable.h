#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x174DD230)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x174DD080)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x174DCD50)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174DD020)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x174DD3B0)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x174DCDD0)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x174DD3F0)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x174DD5D0)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x174DD820)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174DDB30)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x174DD530)
#define RPG_GAMECORE_PLAYERLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x174DD490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerLevelExcelTable_TypeDefinitionIndex = 13239;

	class PlayerLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x30890);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x30898);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x308A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlayerLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xFC30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlayerLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xFC31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlayerLevelRow* GetData(::System::UInt32 Level)
		{
			return ((::RPG::GameCore::PlayerLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE_GETDATA_OFFSET))(Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlayerLevelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
