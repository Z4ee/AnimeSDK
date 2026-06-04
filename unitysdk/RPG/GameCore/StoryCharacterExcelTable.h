#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19CC2690)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19CC2520)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19CC2440)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19CC24C0)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19CC1AF0)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19CC1B30)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19CC1D60)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CC1F30)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19CC2120)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CC2800)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19CC1E90)
#define RPG_GAMECORE_STORYCHARACTEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19CC1DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryCharacterExcelTable_TypeDefinitionIndex = 14432;

	class StoryCharacterExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StoryCharacterExcelTable_TypeDefinitionIndex)->GetStaticField(0x77B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryCharacterRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryCharacterRow*>**)Il2CppClass::FromTypeDefinitionIndex(StoryCharacterExcelTable_TypeDefinitionIndex)->GetStaticField(0x77B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StoryCharacterExcelTable_TypeDefinitionIndex)->GetStaticField(0x77C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StoryCharacterExcelTable_TypeDefinitionIndex)->GetStaticField(0x3620);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StoryCharacterExcelTable_TypeDefinitionIndex)->GetStaticField(0x3621);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StoryCharacterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryCharacterRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryCharacterRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryCharacterRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryCharacterRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StoryCharacterRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::StoryCharacterRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYCHARACTEREXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
