#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreePVPScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173B31D0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173B3020)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173B2CF0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173B2FC0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173B33A0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173B2D70)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173B33E0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B35C0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173B3A50)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173B3DB0)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173B3520)
#define RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173B3480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreePVPScoreExcelTable_TypeDefinitionIndex = 10947;

	class MatchThreePVPScoreExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePVPScoreExcelTable_TypeDefinitionIndex)->GetStaticField(0x28A10);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePVPScoreExcelTable_TypeDefinitionIndex)->GetStaticField(0x28A18);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePVPScoreExcelTable_TypeDefinitionIndex)->GetStaticField(0x28A20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreePVPScoreExcelTable_TypeDefinitionIndex)->GetStaticField(0xD5D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreePVPScoreExcelTable_TypeDefinitionIndex)->GetStaticField(0xD5D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreePVPScoreRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreePVPScoreRow* GetData(::System::UInt32 ScoreID)
		{
			return ((::RPG::GameCore::MatchThreePVPScoreRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_GETDATA_OFFSET))(ScoreID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreePVPScoreRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreePVPScoreRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEPVPSCOREEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
