#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FAB010)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FAAE90)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16FAAB60)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16FAAE30)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FAB190)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FAABE0)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FAB1D0)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FAB3B0)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FAB9C0)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FABCD0)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FAB310)
#define RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FAB270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRelicRecommendExcelTable_TypeDefinitionIndex = 11652;

	class AvatarRelicRecommendExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarRelicRecommendExcelTable_TypeDefinitionIndex)->GetStaticField(0x206C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarRelicRecommendExcelTable_TypeDefinitionIndex)->GetStaticField(0x206C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRelicRecommendRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRelicRecommendRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarRelicRecommendExcelTable_TypeDefinitionIndex)->GetStaticField(0x206D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarRelicRecommendExcelTable_TypeDefinitionIndex)->GetStaticField(0x8960);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarRelicRecommendExcelTable_TypeDefinitionIndex)->GetStaticField(0x8961);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRelicRecommendRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRelicRecommendRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRelicRecommendRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRelicRecommendRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarRelicRecommendRow* GetData(::System::UInt32 AvatarID)
		{
			return ((::RPG::GameCore::AvatarRelicRecommendRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_GETDATA_OFFSET))(AvatarID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarRelicRecommendRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRELICRECOMMENDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
