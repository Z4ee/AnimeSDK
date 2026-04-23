#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousMainStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D507C0)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D50640)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D50310)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D505E0)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D50940)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D50390)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D50980)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D50B60)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D50F30)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D51240)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D50AC0)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D50A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousMainStoryExcelTable_TypeDefinitionIndex = 14120;

	class RogueNousMainStoryExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMainStoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMainStoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x47190);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x47198);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x471A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xF6D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xF6D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMainStoryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMainStoryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMainStoryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMainStoryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousMainStoryRow* GetData(::System::UInt32 StoryID)
		{
			return ((::RPG::GameCore::RogueNousMainStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_GETDATA_OFFSET))(StoryID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousMainStoryRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousMainStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
