#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphEmotionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18BF4AE0)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18BF4930)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18BF4600)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18BF48D0)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18BF4CB0)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18BF4680)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18BF4CF0)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BF4ED0)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18BF53A0)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BF5700)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18BF4E30)
#define RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18BF4D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphEmotionConfigExcelTable_TypeDefinitionIndex = 13688;

	class PhotoGraphEmotionConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphEmotionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x43B80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphEmotionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x43B88);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphEmotionConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphEmotionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphEmotionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x43B90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphEmotionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xF270);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphEmotionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xF271);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphEmotionConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphEmotionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphEmotionConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphEmotionConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PhotoGraphEmotionConfigRow* GetData(::System::UInt32 EmotionID)
		{
			return ((::RPG::GameCore::PhotoGraphEmotionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_GETDATA_OFFSET))(EmotionID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PhotoGraphEmotionConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhotoGraphEmotionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHEMOTIONCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
