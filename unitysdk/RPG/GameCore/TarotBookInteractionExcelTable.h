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

#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18EFBC30)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18EFBAB0)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18EFB780)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18EFBA50)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18EFBE00)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18EFB800)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18EFBE40)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFC020)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18EFC310)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EFC620)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18EFBF80)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18EFBEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookInteractionExcelTable_TypeDefinitionIndex = 14450;

	class TarotBookInteractionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5A90);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5A98);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookInteractionRow*>**)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5AA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TarotBookInteractionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C81);
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
