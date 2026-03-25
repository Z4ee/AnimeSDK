#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMonsterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1763A610)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1763A460)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1763A130)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1763A400)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1763A790)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1763A1B0)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1763A7D0)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1763A9B0)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1763AA00)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1763AD10)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1763A910)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1763A870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMonsterExcelTable_TypeDefinitionIndex = 13413;

	class RogueMonsterExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x4460);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x4468);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x4470);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueMonsterRow* GetData(::System::UInt32 RogueMonsterID)
		{
			return ((::RPG::GameCore::RogueMonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETDATA_OFFSET))(RogueMonsterID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMonsterRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
