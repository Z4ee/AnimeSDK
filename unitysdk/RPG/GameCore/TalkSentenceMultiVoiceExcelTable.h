#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TalkSentenceMultiVoiceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB58D60)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB58BF0)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB58B10)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB58B90)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB581D0)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB58210)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB58440)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB58610)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB587A0)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB58EF0)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB58570)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB584D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceMultiVoiceExcelTable_TypeDefinitionIndex = 15225;

	class TalkSentenceMultiVoiceExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceMultiVoiceExcelTable_TypeDefinitionIndex)->GetStaticField(0x23610);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceMultiVoiceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceMultiVoiceRow*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceMultiVoiceExcelTable_TypeDefinitionIndex)->GetStaticField(0x23618);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceMultiVoiceExcelTable_TypeDefinitionIndex)->GetStaticField(0x23620);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceMultiVoiceExcelTable_TypeDefinitionIndex)->GetStaticField(0x7DB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceMultiVoiceExcelTable_TypeDefinitionIndex)->GetStaticField(0x7DB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TalkSentenceMultiVoiceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TalkSentenceMultiVoiceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceMultiVoiceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceMultiVoiceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceMultiVoiceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceMultiVoiceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TalkSentenceMultiVoiceRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TalkSentenceMultiVoiceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
