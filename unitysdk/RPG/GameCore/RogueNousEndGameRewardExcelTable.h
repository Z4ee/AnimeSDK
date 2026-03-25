#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousEndGameRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17641ED0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17641D50)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17641A20)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17641CF0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x176420A0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17641AA0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x176420E0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x176422C0)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17642540)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17642850)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17642220)
#define RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17642180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousEndGameRewardExcelTable_TypeDefinitionIndex = 13660;

	class RogueNousEndGameRewardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousEndGameRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E50);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousEndGameRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E58);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousEndGameRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousEndGameRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x3930);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousEndGameRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x3931);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousEndGameRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousEndGameRewardRow* GetData(::System::UInt32 EndGameRewardID)
		{
			return ((::RPG::GameCore::RogueNousEndGameRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_GETDATA_OFFSET))(EndGameRewardID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousEndGameRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousEndGameRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSENDGAMEREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
