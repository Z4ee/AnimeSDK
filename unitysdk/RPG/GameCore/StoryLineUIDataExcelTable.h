#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StoryLineUIDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DAFB1F0)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DAFB080)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DAFAFA0)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DAFB020)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DAFA470)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DAFA4B0)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DAFA6E0)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAFA8B0)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DAFAC40)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAFB390)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DAFA810)
#define RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DAFA770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineUIDataExcelTable_TypeDefinitionIndex = 15206;

	class StoryLineUIDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(StoryLineUIDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1BCA0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StoryLineUIDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1BCA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StoryLineUIDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1BCB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StoryLineUIDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x5FE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StoryLineUIDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x5FE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StoryLineUIDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StoryLineUIDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineUIDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StoryLineUIDataRow* GetData(::System::UInt32 a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::RPG::GameCore::StoryLineUIDataRow*(*)(::System::UInt32, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}
	};
}
