#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeScoreCurveRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173B59A0)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173B57F0)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173B54C0)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173B5790)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173B5BF0)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173B5540)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173B5C30)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B5E10)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173B60D0)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173B64A0)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173B5D70)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173B5CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeScoreCurveExcelTable_TypeDefinitionIndex = 10953;

	class MatchThreeScoreCurveExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeScoreCurveRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeScoreCurveRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeScoreCurveExcelTable_TypeDefinitionIndex)->GetStaticField(0x28AC0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeScoreCurveExcelTable_TypeDefinitionIndex)->GetStaticField(0x28AC8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeScoreCurveExcelTable_TypeDefinitionIndex)->GetStaticField(0x28AD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeScoreCurveExcelTable_TypeDefinitionIndex)->GetStaticField(0xD620);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeScoreCurveExcelTable_TypeDefinitionIndex)->GetStaticField(0xD621);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeScoreCurveRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeScoreCurveRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeScoreCurveRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeScoreCurveRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeScoreCurveRow* GetData(::System::UInt32 CurveID, ::System::UInt32 PlayerStep, ::System::UInt32 DelayTime)
		{
			return ((::RPG::GameCore::MatchThreeScoreCurveRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_GETDATA_OFFSET))(CurveID, PlayerStep, DelayTime);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreeScoreCurveRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeScoreCurveRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
