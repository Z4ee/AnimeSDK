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

#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D26D100)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D26CF90)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D26CC80)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D26CF30)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D26D310)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D26CD00)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D26D350)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D26D520)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D26D7E0)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D26DBB0)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D26D480)
#define RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D26D3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeScoreCurveExcelTable_TypeDefinitionIndex = 11893;

	class MatchThreeScoreCurveExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeScoreCurveRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeScoreCurveRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeScoreCurveExcelTable_TypeDefinitionIndex)->GetStaticField(0x36AB0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeScoreCurveExcelTable_TypeDefinitionIndex)->GetStaticField(0x36AB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeScoreCurveExcelTable_TypeDefinitionIndex)->GetStaticField(0x36AC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeScoreCurveExcelTable_TypeDefinitionIndex)->GetStaticField(0xE600);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeScoreCurveExcelTable_TypeDefinitionIndex)->GetStaticField(0xE601);
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

		static ::RPG::GameCore::MatchThreeScoreCurveRow* GetData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::MatchThreeScoreCurveRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE_GETDATA_OFFSET))(a1, a2, a3);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreeScoreCurveRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeScoreCurveRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
