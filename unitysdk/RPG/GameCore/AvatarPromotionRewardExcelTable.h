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

#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x194A0130)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1949FFC0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1949FCB0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1949FF60)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x194A0280)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1949FD30)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x194A02C0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x194A0490)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x194A05D0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x194A08F0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x194A03F0)
#define RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x194A0350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionRewardExcelTable_TypeDefinitionIndex = 12126;

	class AvatarPromotionRewardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x47A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPromotionRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPromotionRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x47A8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x47B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x29C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x29C1);
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

		static ::RPG::GameCore::AvatarPromotionRewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarPromotionRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarPromotionRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPromotionRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
