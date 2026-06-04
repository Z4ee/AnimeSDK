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

#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19BA83F0)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BA82C0)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19BA7FB0)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19BA8260)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19BA8580)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BA8030)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19BA85C0)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BA8790)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19BA8940)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA8C60)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19BA86F0)
#define RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BA8650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousStoryRewardExcelTable_TypeDefinitionIndex = 14200;

	class RogueNousStoryRewardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x423C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x423C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousStoryRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x423D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xBD00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xBD01);
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

		static ::RPG::GameCore::RogueNousStoryRewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousStoryRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousStoryRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousStoryRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
