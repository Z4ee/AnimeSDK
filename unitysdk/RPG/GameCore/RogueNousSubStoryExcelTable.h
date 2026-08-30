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

#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D4089D0)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D4088A0)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D408590)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D408840)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D408B20)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D408610)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D408B60)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D408D30)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D409190)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4094B0)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D408C90)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D408BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousSubStoryExcelTable_TypeDefinitionIndex = 14747;

	class RogueNousSubStoryExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSubStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x10880);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSubStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x10888);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSubStoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSubStoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSubStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x10890);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousSubStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x75E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousSubStoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x75E1);
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

		static ::RPG::GameCore::RogueNousSubStoryRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousSubStoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousSubStoryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousSubStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
