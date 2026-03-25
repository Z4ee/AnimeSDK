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

#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x177D5CF0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177D5B70)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x177D5840)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x177D5B10)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x177D5EC0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x177D58C0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x177D5F00)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x177D60E0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x177D63D0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x177D66E0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x177D6040)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x177D5FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookInteractionExcelTable_TypeDefinitionIndex = 13975;

	class TarotBookInteractionExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x14690);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x14698);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x146A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5F50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5F51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__CCTOR_OFFSET))();
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

		static ::RPG::GameCore::TarotBookInteractionRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::TarotBookInteractionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETDATA_OFFSET))(ID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TarotBookInteractionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookInteractionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
