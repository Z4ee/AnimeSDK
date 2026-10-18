#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PerformanceLiveStreamAtmosphereType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceLiveStreamEmojiRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8CEDD0)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8CEC60)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D8CE950)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D8CEC00)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D8CEF60)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8CE9D0)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8CEFA0)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8CF170)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D8CF390)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8CF700)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D8CF0D0)
#define RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8CF030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceLiveStreamEmojiExcelTable_TypeDefinitionIndex = 14322;

	class PerformanceLiveStreamEmojiExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceLiveStreamEmojiRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceLiveStreamEmojiRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceLiveStreamEmojiExcelTable_TypeDefinitionIndex)->GetStaticField(0x53960);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceLiveStreamEmojiExcelTable_TypeDefinitionIndex)->GetStaticField(0x53968);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceLiveStreamEmojiExcelTable_TypeDefinitionIndex)->GetStaticField(0x53970);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceLiveStreamEmojiExcelTable_TypeDefinitionIndex)->GetStaticField(0x12A10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PerformanceLiveStreamEmojiExcelTable_TypeDefinitionIndex)->GetStaticField(0x12A11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceLiveStreamEmojiRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceLiveStreamEmojiRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceLiveStreamEmojiRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceLiveStreamEmojiRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceLiveStreamEmojiRow* GetData(::RPG::GameCore::PerformanceLiveStreamAtmosphereType a1)
		{
			return ((::RPG::GameCore::PerformanceLiveStreamEmojiRow*(*)(::RPG::GameCore::PerformanceLiveStreamAtmosphereType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceLiveStreamEmojiRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceLiveStreamEmojiRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCELIVESTREAMEMOJIEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
