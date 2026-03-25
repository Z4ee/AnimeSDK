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

#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17642E50)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17642CD0)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x176429A0)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17642C70)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17642FD0)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17642A20)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17643010)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x176431F0)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x176435C0)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x176438D0)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17643150)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x176430B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousMainStoryExcelTable_TypeDefinitionIndex = 13648;

	class RogueNousMainStoryExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E70);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMainStoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMainStoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E78);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x3940);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousMainStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x3941);
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
