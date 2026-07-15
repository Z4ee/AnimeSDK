#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooHandbookTextRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B097E90)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B097D20)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B097A10)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B097CC0)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B098020)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B097A90)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B098060)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B098230)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B098450)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0987C0)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B098190)
#define RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B0980F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooHandbookTextExcelTable_TypeDefinitionIndex = 11912;

	class SpaceZooHandbookTextExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooHandbookTextExcelTable_TypeDefinitionIndex)->GetStaticField(0x18F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooHandbookTextExcelTable_TypeDefinitionIndex)->GetStaticField(0x18F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooHandbookTextExcelTable_TypeDefinitionIndex)->GetStaticField(0x1900);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooHandbookTextExcelTable_TypeDefinitionIndex)->GetStaticField(0xA90);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooHandbookTextExcelTable_TypeDefinitionIndex)->GetStaticField(0xA91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooHandbookTextRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooHandbookTextRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooHandbookTextRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooHandbookTextRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooHandbookTextRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOHANDBOOKTEXTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
