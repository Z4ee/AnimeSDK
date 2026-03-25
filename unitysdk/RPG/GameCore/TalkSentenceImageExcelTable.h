#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TalkSentenceImageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x177AB040)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177AAE90)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x177AAB60)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x177AAE30)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x177AB230)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x177AABE0)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x177AB270)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x177AB450)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x177AB620)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x177AB980)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x177AB3B0)
#define RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x177AB310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceImageExcelTable_TypeDefinitionIndex = 13945;

	class TalkSentenceImageExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x13230);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x13238);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceImageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceImageRow*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x13240);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceImageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceImageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceImageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkSentenceImageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TalkSentenceImageRow* GetData(::System::String* Speaker)
		{
			return ((::RPG::GameCore::TalkSentenceImageRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_GETDATA_OFFSET))(Speaker);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TalkSentenceImageRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TalkSentenceImageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
