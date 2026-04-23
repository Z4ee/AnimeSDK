#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousSubStoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D53A10)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D53890)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D53560)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D53830)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D53B90)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D535E0)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D53BD0)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D53DB0)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D54220)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D54530)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D53D10)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D53C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousSubStoryExcelTable_TypeDefinitionIndex = 14118;

	class RogueNousSubStoryExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSubStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x473B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSubStoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSubStoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSubStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x473B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSubStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x473C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousSubStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xF6F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousSubStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xF6F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSubStoryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSubStoryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSubStoryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSubStoryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousSubStoryRow* GetData(::System::UInt32 StoryID)
		{
			return ((::RPG::GameCore::RogueNousSubStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_GETDATA_OFFSET))(StoryID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousSubStoryRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousSubStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
