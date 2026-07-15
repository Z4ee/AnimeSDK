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

#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BB69CF0)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BB69B80)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1BB69870)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1BB69B20)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1BB69EC0)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BB698F0)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1BB69F00)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB6A0D0)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1BB6A2D0)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB6A670)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1BB6A030)
#define RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BB69F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueScoreRewardExcelTable_TypeDefinitionIndex = 14352;

	class RogueScoreRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueScoreRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueScoreRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F680);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F688);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F690);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xE410);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueScoreRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xE411);
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

		static ::RPG::GameCore::RogueScoreRewardRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueScoreRewardRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE_GETDATA_OFFSET))(a1, a2);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueScoreRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueScoreRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESCOREREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
