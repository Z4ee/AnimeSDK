#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPromotionRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186C9EE0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186C9D30)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186C9A00)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186C9CD0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186CA060)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186C9A80)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186CA0A0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186CA280)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186CA3C0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186CA6D0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186CA1E0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186CA140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionRewardExcelTable_TypeDefinitionIndex = 12034;

	class AvatarPromotionRewardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x284D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPromotionRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPromotionRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x284D8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x284E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xAB00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xAB01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPromotionRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPromotionRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPromotionRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPromotionRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarPromotionRewardRow* GetData(::System::UInt32 Promotion)
		{
			return ((::RPG::GameCore::AvatarPromotionRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_GETDATA_OFFSET))(Promotion);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarPromotionRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPromotionRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
