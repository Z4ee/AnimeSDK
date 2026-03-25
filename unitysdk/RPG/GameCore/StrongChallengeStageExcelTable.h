#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StrongChallengeStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17784B40)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177849C0)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17784690)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17784960)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17784D10)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17784710)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17784D50)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17784F30)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17785750)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17785A70)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17784E90)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17784DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeStageExcelTable_TypeDefinitionIndex = 11324;

	class StrongChallengeStageExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x127B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x127B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x127C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x5780);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x5781);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StrongChallengeStageRow* GetData(::System::UInt32 StrongChallengeStageID)
		{
			return ((::RPG::GameCore::StrongChallengeStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETDATA_OFFSET))(StrongChallengeStageID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StrongChallengeStageRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::StrongChallengeStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
