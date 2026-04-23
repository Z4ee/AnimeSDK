#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeartDialEmoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189ECFF0)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189ECE40)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x189ECB10)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x189ECDE0)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x189ED1C0)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189ECB90)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x189ED200)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x189ED3E0)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x189ED5B0)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189ED910)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189ED340)
#define RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x189ED2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialEmoExcelTable_TypeDefinitionIndex = 12998;

	class HeartDialEmoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CF00);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CF08);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoExcelTable_TypeDefinitionIndex)->GetStaticField(0x3CF10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoExcelTable_TypeDefinitionIndex)->GetStaticField(0xD7E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeartDialEmoExcelTable_TypeDefinitionIndex)->GetStaticField(0xD7E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialEmoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeartDialEmoRow* GetData(::RPG::GameCore::HeartDialEmoType EmoType)
		{
			return ((::RPG::GameCore::HeartDialEmoRow*(*)(::RPG::GameCore::HeartDialEmoType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_GETDATA_OFFSET))(EmoType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeartDialEmoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeartDialEmoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
