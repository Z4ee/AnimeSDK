#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173B1980)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173B1800)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173B14D0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173B17A0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173B1B50)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173B1550)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173B1B90)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173B1D70)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173B2550)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173B28B0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173B1CD0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173B1C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeLevelExcelTable_TypeDefinitionIndex = 10935;

	class MatchThreeLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x289A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x289A8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x289B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xD5A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xD5A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeLevelRow* GetData(::System::UInt32 LevelID, ::System::UInt32 Mode)
		{
			return ((::RPG::GameCore::MatchThreeLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETDATA_OFFSET))(LevelID, Mode);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreeLevelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
