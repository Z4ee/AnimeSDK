#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerReturnConstValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18C31AE0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C31930)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18C31600)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18C318D0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18C31CD0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C31680)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18C31D10)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C31EF0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18C32070)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C323D0)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18C31E50)
#define RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C31DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnConstValueExcelTable_TypeDefinitionIndex = 13727;

	class PlayerReturnConstValueExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x46650);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x46658);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x46660);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0xF5B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0xF5B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConstValueRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnConstValueRow* GetData(::System::String* PlayerReturnConstValueName)
		{
			return ((::RPG::GameCore::PlayerReturnConstValueRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_GETDATA_OFFSET))(PlayerReturnConstValueName);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlayerReturnConstValueRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnConstValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNCONSTVALUEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
