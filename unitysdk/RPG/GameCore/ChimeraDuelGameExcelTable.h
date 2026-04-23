#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelGameRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x187FC3B0)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x187FC230)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x187FBF00)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x187FC1D0)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x187FC530)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x187FBF80)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x187FC570)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x187FC750)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x187FCA50)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x187FCD60)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x187FC6B0)
#define RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x187FC610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelGameExcelTable_TypeDefinitionIndex = 10639;

	class ChimeraDuelGameExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E4D0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E4D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelGameRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelGameRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E4E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameExcelTable_TypeDefinitionIndex)->GetStaticField(0xB7B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelGameExcelTable_TypeDefinitionIndex)->GetStaticField(0xB7B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelGameRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelGameRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelGameRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelGameRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelGameRow* GetData(::System::UInt32 GameID)
		{
			return ((::RPG::GameCore::ChimeraDuelGameRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_GETDATA_OFFSET))(GameID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChimeraDuelGameRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelGameRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGAMEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
