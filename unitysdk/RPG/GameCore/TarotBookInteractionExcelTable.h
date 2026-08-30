#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotBookInteractionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5BF660)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D5BF530)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D5BF450)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D5BF4D0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D5BEA10)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5BEA50)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5BEC80)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5BEE50)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5BF130)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5BF7F0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D5BEDB0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D5BED10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookInteractionExcelTable_TypeDefinitionIndex = 15091;

	class TarotBookInteractionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x27F60);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x27F68);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x27F70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0xBB60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0xBB61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TarotBookInteractionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookInteractionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookInteractionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookInteractionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
