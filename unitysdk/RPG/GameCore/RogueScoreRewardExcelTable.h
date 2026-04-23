#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueScoreRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D67800)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D67650)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D67320)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D675F0)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D67A10)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D673A0)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D67A50)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D67C30)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D67E30)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D681E0)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D67B90)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D67AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueScoreRewardExcelTable_TypeDefinitionIndex = 14143;

	class RogueScoreRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueScoreRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueScoreRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x48060);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x48068);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x48070);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xF790);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xF791);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueScoreRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueScoreRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueScoreRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueScoreRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueScoreRewardRow* GetData(::System::UInt32 RewardPoolID, ::System::UInt32 ScoreRow)
		{
			return ((::RPG::GameCore::RogueScoreRewardRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_GETDATA_OFFSET))(RewardPoolID, ScoreRow);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueScoreRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
