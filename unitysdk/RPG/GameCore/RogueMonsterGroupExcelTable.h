#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMonsterGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D48CE0)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D48B30)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D48800)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D48AD0)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D48E60)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D48880)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D48EA0)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D49080)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D49230)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D49540)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D48FE0)
#define RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D48F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMonsterGroupExcelTable_TypeDefinitionIndex = 13883;

	class RogueMonsterGroupExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x46C50);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x46C58);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x46C60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xF670);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xF671);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueMonsterGroupRow* GetData(::System::UInt32 RogueMonsterGroupID)
		{
			return ((::RPG::GameCore::RogueMonsterGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_GETDATA_OFFSET))(RogueMonsterGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMonsterGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMonsterGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
