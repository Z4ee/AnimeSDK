#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MainStoryActViewRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D4924F0)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D492380)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D492070)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D492320)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D492680)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4920F0)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4926C0)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D492890)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D492BF0)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D492F60)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D4927F0)
#define RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D492750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainStoryActViewExcelTable_TypeDefinitionIndex = 13891;

	class MainStoryActViewExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MainStoryActViewExcelTable_TypeDefinitionIndex)->GetStaticField(0x39730);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainStoryActViewExcelTable_TypeDefinitionIndex)->GetStaticField(0x39738);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainStoryActViewRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainStoryActViewRow*>**)Il2CppClass::FromTypeDefinitionIndex(MainStoryActViewExcelTable_TypeDefinitionIndex)->GetStaticField(0x39740);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MainStoryActViewExcelTable_TypeDefinitionIndex)->GetStaticField(0xED80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MainStoryActViewExcelTable_TypeDefinitionIndex)->GetStaticField(0xED81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainStoryActViewRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainStoryActViewRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainStoryActViewRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainStoryActViewRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MainStoryActViewRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MainStoryActViewRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MainStoryActViewRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainStoryActViewRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINSTORYACTVIEWEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
