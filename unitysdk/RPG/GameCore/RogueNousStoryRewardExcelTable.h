#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousStoryRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D52B20)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D529A0)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D52670)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D52940)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D52CF0)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D526F0)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D52D30)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D52F10)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D530C0)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D533D0)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D52E70)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D52DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousStoryRewardExcelTable_TypeDefinitionIndex = 14139;

	class RogueNousStoryRewardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x34740);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x34748);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x34750);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xCF20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xCF21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousStoryRewardRow* GetData(::System::UInt32 MainStoryReward)
		{
			return ((::RPG::GameCore::RogueNousStoryRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_GETDATA_OFFSET))(MainStoryReward);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousStoryRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousStoryRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
